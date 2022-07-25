#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "cv_bridge/cv_bridge.h"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp/qos.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "event_array_msgs/msg/event_array.hpp"
#include "event_array_msgs/decode.h"
using std::placeholders::_1;

#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui/highgui.hpp>
#if CV_MAJOR_VERSION >= 4
#include <opencv2/highgui/highgui_c.h>
#endif
#include <opencv2/video.hpp>

static const std::string IMAGE_TOPIC = "/camera/color/image_raw";
static const std::string EVENTS_TOPIC = "/event_camera/events";
static const std::string NC_IMAGE_TOPIC = "/image";
//static const std::string IMAGE_TOPIC = "/camera/depth/image_rect_raw";
using namespace cv;
using namespace cv_bridge;


int count=100;
bool blWindowCreated=false;

class nc_main : public rclcpp::Node
{
  public:
    nc_main()
    : Node("nc_main")
    {
      //subscription_ = this->create_subscription("/camera/depth/image_rect_raw",10,std::bind(&nc_main::depth_img_callback, this, _1));
      //message_filters::Subscriber<sensor_msgs::msg::Image> image_1(this, "image_1");
      //depth_img_callback(image_1)
      //this->create_subscription<sensor_msgs::msg::Image>
      //subscription_ = this->create_subscription<std_msgs::msg::String>(
      //"topic", 10, std::bind(&nc_main::topic_callback, this, _1));
      /*subscription_ = this->create_subscription<sensor_msgs::msg::Image>(
      IMAGE_TOPIC, 10, std::bind(&nc_main::depth_img_callback, this, _1));

*/

      rmw_qos_profile_t qos_profile = rmw_qos_profile_sensor_data;
      auto qos = rclcpp::QoS(
        rclcpp::QoSInitialization(
          qos_profile.history,
          qos_profile.depth
        ),
        qos_profile);

      subscription_events = this->create_subscription<event_array_msgs::msg::EventArray>(
      EVENTS_TOPIC, qos, std::bind(&nc_main::events_camera_data, this, _1));

      nc_subscription = this->create_subscription<sensor_msgs::msg::Image>
      (NC_IMAGE_TOPIC, 10, std::bind(&nc_main::event_camera_images, this, _1));

      publisher_ = this->create_publisher<sensor_msgs::msg::Image>("nc_controller/main/proc_img", 10);
       //pBackSub = createBackgroundSubtractorKNN();

      //run_nc_camera();



    }

  private:

  void create_window(const std::string &window_name, const unsigned int &sensor_width,
                                           const unsigned int &sensor_height, const int &shift_x, const int &shift_y) {
      cv::namedWindow(window_name, CV_GUI_EXPANDED);
      cv::resizeWindow(window_name, sensor_width, sensor_height);
      // move needs to be after resize on apple, otherwise the window stacks
      cv::moveWindow(window_name, shift_x, shift_y);
  }

    void run_nc_camera(){ 

    }

    void opencv_video_capture(){
      Mat frame;
      //--- INITIALIZE VIDEOCAPTURE
      VideoCapture cap;
      // open the default camera using default API
      // cap.open(0);
      // OR advance usage: select any API backend
      int deviceID = 1;             // 0 = open default camera
      int apiID = cv::CAP_ANY;      // 0 = autodetect default API
      // open selected camera using selected API
      cap.open(deviceID, apiID);
      // check if we succeeded
      if (!cap.isOpened()) {
        printf("ERROR! Unable to open camera\n");
          //cerr << "ERROR! Unable to open camera\n";
          //return -1;
      }
      //--- GRAB AND WRITE LOOP
      //cout << "Start grabbing" << endl
      //    << "Press any key to terminate" << endl;
      for (;;)
      {
          // wait for a new frame from camera and store it into 'frame'
          cap.read(frame);
          // check if we succeeded
          if (frame.empty()) {
             //printf("ERROR! blank frame grabbed\n");
              //cerr << "ERROR! blank frame grabbed\n";
              //break;
              
          }
          else{
            //imshow("Live", frame);
            printf("THERE IS A FRAME!!!!\n");
          }
          // show live and wait for a key with timeout long enough to show images
          //imshow("Live", frame);
          //if (waitKey(5) >= 0)o
              //break;
      }
      // the camera will be deinitialized automatically in VideoCapture destructor
    }

    void event_camera_images(const sensor_msgs::msg::Image & img_events) const
    {
      //printf("HEY NEW IMAGE> ");
    }

    void events_camera_data(const event_array_msgs::msg::EventArray &ea) const
    {
      
      
        //printf("!!!!!!!! EVENTOS RECIBIDOS!!!! %d",events.height);
        //printf("\n----------------- ENCODING: %s ------------------------\n",events.encoding);
        //if(count>0){
          /*for (long unsigned int j=0; j < sizeof(ea.events); j++)
          {
            uint16_t *x;
            uint16_t *y;
            event_array_msgs::mono::decode_x_y_p(&ea.events[j],x,y,);
            //printf("| %d , %d",*x,*y);
            printf("| %d ",ea.events[j]);
          }*/
          //uint16_t *x;
          //uint16_t *y;
           //event_array_msgs::mono::decode_x_y_p(ea.events,x,y);
           if(!blWindowCreated){
              const unsigned int &sensor_width = ea.width;
              const unsigned int &sensor_height = ea.height;
              const std::string &window_name = "CD EVENT TEST";
              //printf("width: %d x height: %d\n",ea.width,ea.height);
              cv::namedWindow(window_name, CV_GUI_EXPANDED);
              cv::resizeWindow(window_name, sensor_width, sensor_height);
              // move needs to be after resize on apple, otherwise the window stacks
              cv::moveWindow(window_name, 0, 0);
              //create_window(window_name,sensor_width,sensor_height,0,0);
              //create_window("CD Events", 640,480, 0, 0);
              // Initialize CD frame generator
              //cd_frame_generator_.init(sensor_width, sensor_height);
              //cd_frame_generator_.set_display_accumulation_time_us(display_acc_time_);
              // Start CD frame generator thread
              //cd_frame_generator_.start();
           }

          
          //printf("Events size: %ld\n",sizeof(ea.events));

          //printf("---------------------------------------------------------------\n");
          //count--;
        //}
    }

    void depth_img_callback(const sensor_msgs::msg::Image & imgraw) const
    {
      CvImagePtr cv_image = NULL;
      //try
      //{
        cv_image=toCvCopy(imgraw, "bgr8");
        //pBackSub->apply(cv_image->image, fgMask);
        //toCvShare(cv_image);

        sensor_msgs::msg::Image::SharedPtr msg =
            cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", cv_image->image)
                .toImageMsg();

        publisher_->publish(*msg.get());
        /*cv_bridge::CvImage out_msg;

        out_msg.header   = imgraw.header; // Same timestamp and tf frame as input image
        out_msg.encoding = sensor_msgs::image_encodings::TYPE_32FC1; // Or whatever
        out_msg.image    = cv_image->image; 

        publisher_->publish(out_msg);*/
        //cv_image = imgMsgToCv(msg_ptr, "bgr8");
      //}
      //catch (sensor_msgs::CvBridgeException error)
      //{
       //   ROS_ERROR("error");
      //}
      /*cv_bridge::CvImage out_msg;
      out_msg.header   = imgraw.header; // Same timestamp and tf frame as input image
      out_msg.encoding = sensor_msgs::image_encodings::TYPE_32FC1; // Or whatever
      out_msg.image    = imgraw.; // Your cv::Mat*/

      //update the background model
      //frame=toCvCopy(imgraw);
      //frame=imgraw.data;
      /*pBackSub->apply(cv_image->image, fgMask);
      sensor_msgs::msg::Image::SharedPtr msg =
            cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", fgMask)
                .toImageMsg();
      publisher_->publish(*msg.get());*/
      //get the frame number and write it on the current frame
      //rectangle(imgraw.data, cv::Point(10, 2), cv::Point(100,20),
      //            cv::Scalar(255,255,255), -1);
      

      /*stringstream ss;
      ss << capture.get(CAP_PROP_POS_FRAMES);
      string frameNumberString = ss.str();
      putText(frame, frameNumberString.c_str(), cv::Point(15, 15),
              FONT_HERSHEY_SIMPLEX, 0.5 , cv::Scalar(0,0,0));*/
      /*capture >> frame;
      if (frame.empty())
          break;
      */
      //createBack
      //cv_bridge::CvImagePtr cv_ptr;
      /*
      cv::Mat img(cv::Size(1280, 720), CV_8UC3);

      cv::randu(img, cv::Scalar(0, 0, 0), cv::Scalar(255, 255, 255));
      
      sensor_msgs::msg::Image::SharedPtr msg =
            cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", img)
                .toImageMsg();

      publisher_->publish(*msg.get());
      */     
     // publisher_->publish(imgraw);
      //RCLCPP_INFO_STREAM(this->get_logger(), "I heard: '" << imgraw << "'");
      //RCLCPP_INFO(this->get_logger(), "I heard: '%s'", imgraw->data.c_str());
      //printf("Width: %d x Height: %d",imgraw.width,imgraw.height);

    }

    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscription_;
    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr nc_subscription;
    rclcpp::Subscription<event_array_msgs::msg::EventArray>::SharedPtr subscription_events;
    rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr publisher_;
    Ptr<BackgroundSubtractor> pBackSub;
    Mat frame,fgMask;
};


int main(int argc, char ** argv)
{
rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<nc_main>());
  rclcpp::shutdown();
  return 0;
}
