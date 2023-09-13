

#ifndef TRABALHOAED_GESTAOHORARIO_H
#define TRABALHOAED_GESTAOHORARIO_H

#include <set>
#include <queue>
#include "Student.h"
#include "HClass.h"
#include "Request.h"
using namespace std;


class GestaoHorario {
public:
    void readFileStudents(); // Reads the students_classes file and stores every student in students_.
    void readFileRequests(); // Reads the declined_requests file and stores every request in requests_.
    void readFileClasses(); // Reads the classes file and stores every class in classesH_.
    void processRequest(); // Processes all requests in requests_ and if a request cant be satisfied is stored in declined_requests.
    void addStudentsToClasses(); // Distribute all students in students_ for all for the corresponding classes in classesH_.
    bool classesOverlap(UCClass,UCClass); // Takes two classes and returns a bool with the condition if they would overlap in the same schedule.
    vector<Student> students_; // List of all students.
    vector<HClass> classesH_; // List of all Classes.
    vector<Request> requests_; // List of Requests.
};


#endif //TRABALHOAED_GESTAOHORARIO_H


