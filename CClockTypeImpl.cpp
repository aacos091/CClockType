#include "CClockType.h"
#include <iostream>

using namespace std;

void setTime(int hours, int minutes, int seconds);
void printTime();
//void getTime(int *hours, int *minutes, int *seconds);
void incrementTimeBySeconds();
void incrementTimeByMinutes();
void incrementTimeByHours();


// TODO Define a constructor with no parameter list
CClockType::CClockType() {
    hr = 0;
    min = 0;
    sec = 0;
}



// TODO Define a constructor with three int parameters for setting up hours, minutes, and seconds
CClockType::CClockType(int hours, int minutes, int seconds) {
    hr = hours;
    min = minutes;
    sec = seconds;
}



// Define a destructor
CClockType::~CClockType(){
    cout << "Deleting Clock . . . " << endl;
}


void CClockType::setTime(int hours, int minutes, int seconds) {
    hr = hours;
    min = minutes;
    sec = seconds;
}

/*
TODO Define member function CClockType::getTime
Goal: read out the hours, minutes, and seconds and save them to the outside variables
Inputs: pointers referring to outside variables used to save hours, minutes, and seconds
Output: void

void getTime(int *hours, int *minutes, int *seconds) {

}

*/

void CClockType::incrementTimeBySeconds() {
    sec += 1;
}

void CClockType::incrementTimeByMinutes() {
    min += 1;
}

void CClockType::incrementTimeByHours() {
    hr += 1;
}

void CClockType::printTime() {
    cout << hr << ":" << min << ":" << sec << endl;
}




