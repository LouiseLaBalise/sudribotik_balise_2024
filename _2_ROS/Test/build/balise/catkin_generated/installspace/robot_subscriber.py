#!/usr/bin/env python3

import rospy
from balise.msg import RobotCoordinates, PlantCoordinates

class RobotSubscriber:

    def __init__(self):
        rospy.init_node('robot_subscriber', anonymous=True)
        rospy.Subscriber('robot_coordinates', RobotCoordinates, self.robot_callback)
        rospy.Subscriber('plant_coordinates', PlantCoordinates, self.plant_callback)

    def robot_callback(self, msg):
        rospy.loginfo(f"Received robot: ID {msg.id}, Coordinates: {msg.x}, {msg.y}, {msg.theta}")

    def plant_callback(self, msg):
        rospy.loginfo(f"Received plant: ID {msg.id}, Coordinates: {msg.x}, {msg.y}, {msg.theta}")

def main():
    robot_subscriber = RobotSubscriber()
    rospy.spin()

if __name__ == '__main__':
    main()
