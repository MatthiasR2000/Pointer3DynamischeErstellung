#include "Dynamisch.h"
int main() {

    Hochschule hochschule={"Hochschule RheinMain", nullptr};
    addStudent(hochschule, createStudent("Matthias",1122464,0.0));
    addStudent(hochschule, createStudent("Jeff",4641122,2.0));
    addStudent(hochschule, createStudent("Bruder Stein",45647356,3.0));
    cout << "Ausgabe Studenten" << endl;
    printStudentList(hochschule);
    cout << "Student Suchen: " << endl;
    findStudent(hochschule, 1122464);
    cout << "Löschung Studenten" << endl;
    deleteStudentList(hochschule);
    cout << "Ausgabe Studenten" << endl;
    printStudentList(hochschule);
    return 0;
}
