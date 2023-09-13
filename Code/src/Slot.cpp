//
// Created by pedropassos on 29-10-2022.
//

#include "../Include/Slot.h"
#include <string>

Slot::Slot(string weekDay, float startHour, float endHour, string classType): weekDay_(weekDay), startHour_(startHour), endHour_(endHour), classType_(classType) {}

string Slot::getWeekDay() const {return weekDay_; }
string Slot::getClassType() const {return classType_; }
float Slot::getStartHour() const {return startHour_; }
float Slot::getEndHour() const {return endHour_; }
