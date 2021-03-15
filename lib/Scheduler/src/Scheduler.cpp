//=================================================================
// ©2021 Ryan Shoobert, all rights reserved
//=================================================================
// Author: Ryan Shoobert
// Created: 08 March, 2021; Modified: 15 March, 2021
// Filename: Scheduler.cpp
//=================================================================

#define LED_PIN 13
#define SECONDS_TO_WAIT 10

#include "Scheduler.h"

int millisecondCounter = 0;

void ContextSwitch();

//interrupt from timer which is raised every millisecond
//TODO look at configuring one of the other times to a longer interval to get remove need for if statement
// SIGNAL(TIMER0_COMPA_vect) {
//     millisecondCounter++;
    
//     if ((millisecondCounter % (SECONDS_TO_WAIT * 1000)) == 0)
//     {
//         ContextSwitch();
//         millisecondCounter = 0;
//     }
    
// }

Scheduler::Scheduler(TaskHandler* taskHandler) {
    handler = *taskHandler;

    OCR0A = 0xAF;
    TIMSK0 |= _BV(OCIE0A);
}

void Scheduler::Start() {
    Task tasks[MAX_TASKS];
    tasks[0] = *handler.GetTasks(tasks);

    // for (Task t : tasks)
    // {
        Serial.begin(9600);
        Serial.print(tasks[1].name[0]);
        Serial.end();
        //void* pc = t.taskProgramCounter;
        //(pc); //call to task from current position
    //}    
}

void ContextSwitch() {
    //asm for moving bits around
    asm volatile(
        "NOP                   \n"
    );
}

void Scheduler::Stop() {
}

bool Scheduler::AddTask(void (*function)(), String friendlyName) {
    if (function == nullptr)
    {
        return false;
    }

    handler.AddTask(function, friendlyName);
    return true;
}

bool Scheduler::RemoveTask(String friendlyName) {
    //TODO implement logic later to get correct task    
    handler.RemoveTask(Task{1, Ready, nullptr, friendlyName});
    return true;
}

Scheduler::~Scheduler() {
}