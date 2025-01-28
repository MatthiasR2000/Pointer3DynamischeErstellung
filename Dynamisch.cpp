//
// Created by Matthias Roos on 21.01.25.
//

#include "Dynamisch.h"

Student* createStudent(const string& name, int matrikelnummer, double durchschnitt) {
    Student* student = new Student;
    student->name = name;
    student->matrikelnummer = matrikelnummer;
    student->durchschnittsNote = durchschnitt;
    student->next = nullptr;
    return student;
}

void addStudent(Hochschule& hochschule, Student* student) {
    if(hochschule.head == nullptr) {//Fall 1 Liste leer
        hochschule.head = student;
        student->next = nullptr;
    } else { //Fall 2 Liste nicht leer
        student->next = hochschule.head;
        hochschule.head = student;
    }
}
void printStudentList(const Hochschule& hochschule) {
    Student* temp = hochschule.head;
    while (temp != nullptr) {
        cout << temp->name << endl;
        cout << temp->matrikelnummer << endl;
        cout << temp->durchschnittsNote << endl;
        temp = temp->next;
    }
}
void deleteStudentList(Hochschule& hochschule) {
    Student* tmp = hochschule.head;
    while (tmp != nullptr) {
        Student* next = tmp->next;
        delete tmp;
        tmp = next;
    }
    hochschule.head = nullptr;
}

Student* findStudent(const Hochschule& hochschule, int matrikelnummer) {
    Student* temp = hochschule.head;
    while (temp) {
        if (temp->matrikelnummer == matrikelnummer) {
            cout << "Student gefunden: "
            << " Name: " << temp->name
            << " Matrikelnummer: " << temp->matrikelnummer
            << " Durchschnittsnote: " << temp->durchschnittsNote << endl;
            return temp;
        }
        temp = temp->next;
    }
    return nullptr;
}
