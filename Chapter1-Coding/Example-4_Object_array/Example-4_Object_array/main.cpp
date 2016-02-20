//
//  main.cpp
//  Example-3_Object_array
//
//  Created by goutdas on 25/01/16.
//  Copyright © 2016 goutdas. All rights reserved.
//

#include <iostream>
#define MAX 3
class student{
public:
    int roll;
    char name[10];
    float marks;
    void getdata();
    void display();
};

void student::getdata()
{
    std::cout << "\nPlease Enter The Name of the student: ";
    std::cin >> name;
    std::cout << "\nPlease Enter The Roll of the student: ";
    std::cin >> roll;
    std::cout << "\nPlease ENter The marks of the student: ";
    std::cin >> marks;
}

void student::display()
{
    std::cout << "\nThe Name of the student is : " << name;
    std::cout << "\nThe Roll of the student is : " << roll;
    std::cout << "\nThe marks of the student is : " << marks;
}

int main(int argc, const char * argv[]) {
    student s[MAX];
    for (int count=0; count<=MAX-1 ; count++) {
        std::cout << "Please Insert Data for Student[" << count << "] : " << std::endl;
        s[count].getdata();
    }
    std::cout << std::endl;
    for (int count=0; count<=MAX-1 ; count++) {
        std::cout << "\nInformation for Student[" << count << "] : " << std::endl;
        s[count].display();
    }
    std::cout << std::endl;
    return 0;
}
