//
// Created by pedropassos on 01-11-2022.
//

#ifndef TRABALHOAED_APP_H
#define TRABALHOAED_APP_H
#include "GestaoHorario.h"


class App {
public:
    void start(); //Start The Program.
    bool printUserMenu(); // Print the User Menu/Interface.
    void printStudentClasses(); // Print the Student Classes.
    bool printMakeRequest(); // Print Options to Make a Request.
    void printRequestList(); // Print a List of Requests.
    void cancelRequest(); // Cancel Requests.
    void printClassSchedule(); // Print Class Schedule of a specific UC.
    void printUcClassesStudents(); // Print all Students of a Class.
    void listAllStudents(); // Print list of Students.
    void printListOfClasses(); // Print List of Classes.
private:
    GestaoHorario horario; // Where we store and process all of our data.
};


#endif //TRABALHOAED_APP_H
