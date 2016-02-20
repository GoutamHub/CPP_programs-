//
//  main.cpp
//  Example2-Argumented_Member_functions
//
//  Created by goutdas on 20/01/16.
//  Copyright © 2016 goutdas. All rights reserved.
//

#include <iostream>

class student{
    char * name;
    int roll;
    float marks;
public:
    void getdata(char *, int , float);
    void display();
};

inline void student::getdata(char * n, int r, float m)
{
    name = n;
    roll = r;
    marks = m;
}

/*Default Argumented Member functions
 void student::getdata(char * n = , int r, float m=33)
 {
 name = n;
 roll = r;
 marks = m;
 }
*/

void student::display(){
    getdata((char *)"Goutam", 45, 89);
    std::cout << "\nThe name of the Student is : " << name;
    std::cout << "\nThe roll of the Student is : " << roll;
    std::cout << "\nThe marks of the Student is : " << marks;
    std::cout << "\n";
}

int main(int argc, const char * argv[]) {
    student s2;
    //s1.display();
    s2.getdata((char *)"Hara", 67, 88);
    s2.display();
    return 0;
}
