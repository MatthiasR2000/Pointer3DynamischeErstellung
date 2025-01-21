//
// Created by Matthias Roos on 21.01.25.
//

#ifndef DYNAMISCH_H
#define DYNAMISCH_H
#include <iostream>
using namespace std;

struct Student {
    string name;
    int matrikelnummer;
    double durchschnittsNote;
    Student* next;
};

struct Hochschule {
    string name;
    Student* head;
};
Student* createStudent(const string& name, int matrikelnummer, double durchschnitt);
void addStudent(Hochschule& hochschule, Student* student);
void printStudentList(const Hochschule& hochschule);
void deleteStudentList(Hochschule& hochschule);
Student* findStudent(const Hochschule& hochschule, int matrikelnummer);
#endif //DYNAMISCH_H
