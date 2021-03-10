//=================================================================
// ©2021 Ryan Shoobert, all rights reserved
//=================================================================
// Author: Ryan Shoobert
// Created: 09 March, 2021; Modified: 10 March, 2021
// Filename: main.cpp
//=================================================================

#include <Arduino.h>
#include "TaskHandler.h"
#include "Scheduler.h"

void setup() {
    TaskHandler* taskHandler = new TaskHandler();
    Scheduler* scheduler = new Scheduler(taskHandler);

    //scheduler->Start();
}

void loop() {
}

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