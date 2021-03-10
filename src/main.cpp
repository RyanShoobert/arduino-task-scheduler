//=================================================================
// ©2021 Ryan Shoobert, all rights reserved
//=================================================================
// Author: Ryan Shoobert
// Created: 09 March, 2021; Modified: 10 March, 2021
// Filename: main.cpp
//=================================================================

#include <Arduino.h>
#include "Scheduler.h"

void taskOne() {
    for (short i = 0; i < 10; i++)
    {
        Serial.println("Task1 count: " + i);
    }    
}

void taskTwo() {
    for (short i = 0; i < 100; i++)
    {
        Serial.println("Task2 count: " + i);
    } 
}

void setup() {
    TaskHandler taskHandler;
    Scheduler scheduler(&taskHandler);

    taskHandler.AddTask(taskOne);
    taskHandler.AddTask(taskTwo);

    //scheduler->Start();
}

void loop() {
}