//=================================================================
// ©2021 Ryan Shoobert, all rights reserved
//=================================================================
// Author: Ryan Shoobert
// Created: 09 March, 2021; Modified: 09 March, 2021
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

}

void taskTwo() {
    
}