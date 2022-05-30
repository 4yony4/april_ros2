cmake_minimum_required(VERSION 3.8)
project(sim_sem_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Emergency.msg"
  "msg/EmergencyRequestStatus.msg"
  "msg/Environment.msg"
  "msg/FatigueAnalysis.msg"
  "msg/HumanBehaviour.msg"
  "msg/HumanGraspingStrategies.msg"
  "msg/HumanHandGesture.msg"
  "msg/HumanMotion.msg"
  "msg/HumanParameterIntention.msg" #FLOAT TYPE FAILS BUILD, CHECK FLOAT TYPE
  "msg/HumanSight.msg"
  "msg/NeuromorphicSensing.msg"
  "msg/PhysicalObject.msg"
  "msg/RobotArm.msg"
  "msg/RobotArmKinematic.msg"
  "msg/RobotGraspingStrategies.msg"
  "msg/RobotHand.msg"
  "msg/RobotHandKinematic.msg"
  "msg/RobotHighLatencyCorrections.msg"
  "msg/RobotLowLatencyCorrections.msg"
  "msg/Tactile.msg"
  #"srv/AddThreeInts.srv"
  DEPENDENCIES std_msgs
)

ament_package()
