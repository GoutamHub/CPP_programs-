//
//  main.cpp
//  Example-10_Pointer_Objects_and_Pointer_Members
//
//  Created by goutdas on 28/01/16.
//  Copyright © 2016 goutdas. All rights reserved.
//

//
//  main.cpp
//  example-1_accessing_public_member
//
//  Created by goutdas on 20/01/16.
//  Copyright © 2016 goutdas. All rights reserved.
//

#include <iostream>
class student{
public:
    char name[20];
    int roll;
    float marks;
    //protected:
    void getdata();
    //public:
    void display();
};

/* Accessing Public Member data via public member function */

void student::getdata(){
    std::cout << "\nPlease Enter the 1st Name of the student : ";
    std::cin >> name;
    std::cout << "\nPlease Enter the roll number of the student : ";
    std::cin >> roll;
    std::cout << "\nPlease Enter the marks of the student : ";
    std::cin >> marks;
}

/* Accessing Public Member data and Public member funtion via another member function */

void student::display(){
    
    std::cout << "\n\t\t------ENTER INTO STUDENT DATABASE------\n\n";
    getdata();
    std::cout << "\nName of the Student is : " << name;
    std::cout << "\nRoll of the Student is : " << roll;
    std::cout << "\nMarks of the Student is : " << marks;
    std::cout << "\n";
}

/* Accessing Public Member data and Public member funtion via object of that class */

int main(int argc, const char * argv[]) {
    student s1, s2;
    student *sptr1 = &s1;
    student *sptr2 = &s2;
    sptr1->display(); /*Accessing Public Function Member via Class object*/
    std::cout << "\nPlease Enter the 1st Name of the student : ";
    std::cin >> (*sptr2).name;
    std::cout << "\nPlease Enter the roll number of the student : ";
    std::cin >> (*sptr2).roll;
    std::cout << "\nPlease Enter the marks of the student : ";
    std::cin >> (*sptr2).marks;
    std::cout << "\nName of the Student is : " << sptr2->name;
    std::cout << "\nRoll of the Student is : " << sptr2->roll;
    std::cout << "\nMarks of the Student is : " << sptr2->marks;
    std::cout << "\n";
    return 0;
}
