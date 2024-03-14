#!/bin/bash

#Run the Python script and capture its output
verification_output=$(python3 $(pwd)/init/verify_beacon_connection.py)

#check the return value
if [ "$verification_output" == "" ]; then
    #Run roslaunch
    roslaunch beacon_launch competition_start.launch
else
    echo $verification_output
fi

