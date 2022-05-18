#include "Student.h"
#include <iostream>
#include <string.h>

// Assign studentId and name
void Student::assignDetails(int inputID, char inputName[]) {
  strcpy(name, inputName);
  studentId = inputID; 
}

// Display StudentId and Name
void Student::display() {
  std::cout << "Name : " << name << std::endl << "Student ID :" << studentId
  << std::endl;
}

