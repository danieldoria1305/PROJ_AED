

#ifndef TRABALHOAED_HCLASS_H
#define TRABALHOAED_HCLASS_H

#include <list>
#include "../Include/Slot.h"
#include "Student.h"

using namespace std;


class HClass {
public:
    HClass(string uc, string classes); // Constructor for the HClass.
    HClass(); // Empty Constructor.
    string getUc() const; // Returns uc_.
    string getClass() const; // Returns class_
    list<Slot> getClassUcHour() const; // Returns classUcHour_.
    vector<Student> getStudentList() const; // Returns liststudents_
    void InsertStudent(Student); // Takes a Student and Inserts him in listStudents_.
    void InsertClassUCHour(Slot); // Takes a New Hour and Date for the Class and inserts it in classUcHour_.
private:
    list<Slot> classUcHour_; // List of the Classes Hour and Date
    vector<Student> liststudents_; // List of Students of the Class
    string uc_; // Uc Code
    string class_; // Class Code
};


#endif //TRABALHOAED_HCLASS_H
