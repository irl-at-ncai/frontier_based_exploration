#include <ros/ros.h>
#include "mavros_navigation/frontier_based_exploration.h"

int main(int argc, char** argv)
{
    ros::init(argc, argv, "mavros_navigation_node");
    ros::spin();
    return 0;
}