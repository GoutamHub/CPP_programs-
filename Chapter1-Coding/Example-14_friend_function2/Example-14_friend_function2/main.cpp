//
//  main.cpp
//  Example-14_friend_function2
//
//  Created by goutdas on 10/02/16.
//  Copyright © 2016 goutdas. All rights reserved.
//

#include <iostream>
class exam;
class student{
private:
    int class_test_marks;
    void getdata();
    friend int Total(student s, exam e);
};

class exam{
private:
    int final_exam_marks;
    void getdata();
    friend int Total(student s, exam e);
};

void student::getdata(){
    std::cout << "\nPlease Enter class test marks :";
    std::cin >> class_test_marks;
}

void exam::getdata(){
    std::cout << "\nPlease Enter final test marks :";
    std::cin >> final_exam_marks;
}

int Total(student s, exam e){
    s.getdata();
    e.getdata();
    int total_marks = s.class_test_marks + e.final_exam_marks;
    return total_marks;
}
int main(int argc, const char * argv[]) {
    student obj1;
    exam obj2;
    int Total_marks = Total(obj1, obj2);
    std::cout << "\nTotal Marks obtain in Exam is : " << Total_marks << "\n";
    return 0;
}
