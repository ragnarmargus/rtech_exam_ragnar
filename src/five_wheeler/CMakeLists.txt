cmake_minimum_required(VERSION 2.8.3)
project(five_wheeler)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  nav_msgs
  roscpp
  rospy
  std_msgs
  tf
)

###################################
## catkin specific configuration ##
###################################
catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES r2d2_navigator
#  CATKIN_DEPENDS geometry_msgs nav_msgs roscpp rospy std_msgs tf
#  DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
include_directories(
  ${catkin_INCLUDE_DIRS}
)



## Declare a C++ executable
## Add cmake target dependencies of the executable
## Add cmake target dependencies of the executable

add_executable(speed_pub src/speed_publisher.cpp)
target_link_libraries(speed_pub ${catkin_LIBRARIES})
