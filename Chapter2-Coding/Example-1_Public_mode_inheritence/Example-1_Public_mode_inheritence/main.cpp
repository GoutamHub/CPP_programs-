//
//  main.cpp
//  Example-1_Public_member_inheritence
//
//  Created by goutdas on 22/02/16.
//  Copyright © 2016 goutdas. All rights reserved.
//

#include <iostream>
//Base Class is Student here with 2 member variables in public section
class student{
public:
    int roll;
    int marks;
};
//Result is a Derived class for Student base class
//Inheritence mode used is Public.
class result: public student{
public:
    void getdata();
    void display();
};
//Accessing Base-Class Public variables using Derived class member Function
void result::getdata(){
    std::cout<<"\nPlease Enter Roll no for the student : ";
    std::cin >> roll;
    std::cout<<"\nPlease Enter Marks no for the student : ";
    std::cin >> marks;
}

void result::display(){
    std::cout<<"\nRoll no for the student is : " << roll;
    std::cout<<"\nMarks for the student is : " << marks;
}

int main(int argc, const char * argv[]) {
    
    result r;
    r.getdata();
    r.display();
    
    //Accessing Base-Class Public Member varibles with Derived class object and . operator
    std::cout<<"\nPlease Enter Roll no for the student : ";
    std::cin >> r.roll;
    std::cout<<"\nPlease Enter Marks no for the student : ";
    std::cin >> r.marks;
    std::cout<<"\nRoll no for the student is : " << r.roll;
    std::cout<<"\nMarks for the student is : " << r.marks;
    std::cout<<"\n";
    return 0;
}
