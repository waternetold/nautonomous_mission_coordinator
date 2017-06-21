/*
 * ActionManager.h
 *
 *  Created on: Mar 19, 2016
 *      Author: zeeuwe01
 */

#ifndef MOVEBASEACTION_H_
#define MOVEBASEACTION_H_

#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>
#include <nautonomous_operation_action/MissionPlanAction.h>

#include "geometry_msgs/Pose2D.h"
#include "geometry_msgs/Point.h"
#include "geometry_msgs/Quaternion.h"

typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;

class MoveBaseActionClient{
private:
	MoveBaseClient *ac;
public:
	MoveBaseActionClient();
	~MoveBaseActionClient();
	int requestGoal(geometry_msgs::Pose2D pose2d);
};

/*

class MoveBaseAction{

};*/

#endif /* MOVEBASEACTION_H_ */
