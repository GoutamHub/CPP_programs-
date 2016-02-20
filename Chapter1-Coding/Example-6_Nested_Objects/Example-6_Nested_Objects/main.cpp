//
//  main.cpp
//  Example-6_Nested_Objects
//
//  Created by goutdas on 25/01/16.
//  Copyright © 2016 goutdas. All rights reserved.
//

#include <iostream>

class result{
public:
    float marks;
    void getdata();
    void display();
};

class student{
public:
    char name[20];
    int roll;
    void getdata();
    void display();
};

class exam{
private:
    result R;
    student S;
public:
    void getdata();
    void display();
};

void student::getdata(){
    std::cout << "Enter Name :";
    std::cin >> name;
    std::cout << "Enter Roll :";
    std::cin >> roll;
}

void student::display(){
    std::cout << "\nName of the student is :: " << name;
    std::cout << "\nRoll No of the student is :: " << roll;
}

void result::getdata(){
    std::cout << "Enter Marks :";
    std::cin >> marks;
}

void result::display(){
    std::cout << "\nMarks of the student is :: " << marks;
}

void exam::getdata(){
    S.getdata();
    R.getdata();
}

void exam::display(){
    S.display();
    R.display();
}

int main(int argc, const char * argv[]) {
    std::cout << "Please Craete and Display Student DataBase !! \n\n";
    exam E;
    E.getdata();
    E.display();
    std::cout << "\n\n";
    return 0;
}
