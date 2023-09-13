//
// Created by pedropassos on 29-10-2022.
//

#ifndef TRABALHOAED_SLOT_H
#define TRABALHOAED_SLOT_H

#include <string>
using namespace std;


class Slot {
public:
    Slot(string weekDay, float startHour, float endHour, string classType); // Constructor for Slot.
    string getWeekDay() const; // Returns weekday_.
    string getClassType() const; // Returns classType_.
    float getStartHour() const; // Returns startHour_.
    float getEndHour() const; // Returns endHour_.


private:
    string weekDay_; // Week Day.
    float startHour_; // Start Hour.
    float endHour_; // End Hour.
    string classType_; // Class Type.
};


#endif //TRABALHOAED_SLOT_H
