## APRIL ROS2 WORKSPACE

## Description

This level is only the Workspace level of the complete IIT April Ros2, for SIM and SEM components and all their nodes.
Here you will find, inside the /src folder, all the PACKAGES (SIM, SEM, etc.) that will include the necesarry funcionality.

There will be also INTERFACE Package, which will include as an independent package all the messages used by our system.

Later on, all the PACKAGES included here will be deployed by a DOCKER system inside the APRIL environment.

## PATCHES AND FIXES

We are using now ROS2 Humble. For it to work, you need Ubuntu 22. BUT we can finde some errores and fixes that will be listed here:

1) Colcon Python build FAILS: setuptools depreceated. To fix this, follow post: https://answers.ros.org/question/396439/setuptoolsdeprecationwarning-setuppy-install-is-deprecated-use-build-and-pip-and-other-standards-based-tools/ 

You need ONLY to DOWNGRADE the SETUPTOOLS (no need to downgrade python to 3.8)

```sh
pip install setuptools==58.2.0
```