#!/bin/bash
        COUNTER=0
        while  [ $COUNTER -lt $1 ]; do
                echo "Joshua Fogg"
                sleep 1
                let "COUNTER++"
        done
