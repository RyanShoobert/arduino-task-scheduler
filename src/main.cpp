//=================================================================
// ©2021 Ryan Shoobert, all rights reserved
//=================================================================
// Author: Ryan Shoobert
// Created: 09 March, 2021; Modified: 15 March, 2021
// Filename: main.cpp
//=================================================================

#include "Scheduler.h"

void taskOne() {
    for (short i = 0; i < 10; i++)
    {
        Serial.println("Task1 count: " + i);
        delay(1000);
    }    
}

void taskTwo() {
    for (short i = 0; i < 100; i++)
    {
        Serial.println("Task2 count: " + i);
        delay(1000);
    } 
}

void setup() {
    TaskHandler taskHandler;
    Scheduler scheduler(&taskHandler);

    taskHandler.AddTask(taskOne, "Task One");
    taskHandler.AddTask(taskTwo, "Task Two");

    scheduler.Start();

}

void loop() {
}