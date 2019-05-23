#include <ros/ros.h>
#include <ros/time.h>
#include <sensor_msgs/Range.h>
#include <stdlib.h>
#include <geometry_msgs/Twist.h>

//Create a publisher
ros::Publisher pub_speed;
//Create a velocity class element
geometry_msgs::Twist velocity	

int main(int argc, char **argv)
{
	//initialize the node
	ros::init(argc, argv, "speed_pub");
	ros::NodeHandle nh;
	
	//Advertise the message on the topic
	pub_speed = nh.advertise<sensor_msgs::Range>("/cmd_vel", 1000); //Create a publisher
	
	ros::Rate loop_rate(1); //Running rate of the loop in Hz

	velocity.linear.x = 0.4; //Set the "Constant speed"

	while(ros::ok())
	{	
  		pub_speed.publish(velocity); //Publish the message
		ros::spinOnce();
		loop_rate.sleep();
	}
	
}

