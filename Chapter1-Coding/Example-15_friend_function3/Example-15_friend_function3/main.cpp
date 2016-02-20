//
//  main.cpp
//  Example-15_friend_function3
//
//  Created by goutdas on 10/02/16.
//  Copyright © 2016 goutdas. All rights reserved.
//
#include <iostream>
class student{
private:
    int class_test_marks;
public:
    void getdata();
    void display();
};

class exam{
public:
    int final_exam_marks;
    friend void student::display(); //display must be defined with a public scope in class student
};

void student::getdata(){
    std::cout << "\nPlease Enter class test marks :";
    std::cin >> class_test_marks;
}


void student::display(){
    std::cout << "\nclass test marks for the student is : " << class_test_marks << "\n";
}

void display (){
    exam e;
    std::cout << "\nPlease Enter final test marks :";
    std::cin >> e.final_exam_marks;
    std::cout << "\nfinal test marks for the student is : " << e.final_exam_marks << "\n";
}
int main(int argc, const char * argv[]) {
    student obj1;
    obj1.getdata();
    std::cout << "\nMarks obtain in Exam is : " ;
    obj1.display();
    display();
    return 0;
}
