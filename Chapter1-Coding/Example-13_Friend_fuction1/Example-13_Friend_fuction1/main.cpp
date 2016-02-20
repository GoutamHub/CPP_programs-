//
//  main.cpp
//  Example-13_Friend_fuction1
//
//  Created by goutdas on 10/02/16.
//  Copyright © 2016 goutdas. All rights reserved.
//

#include <iostream>
class student{
private:
    long roll;
    int marks;
    void getdata();
    //Here display is a non-member function of the class student
    friend void display(student S);
};
void student::getdata(){
    std::cout << "Please provide inputs for the student record !!!\n";
    std::cout << "Please Enter the roll : " ;
    std::cin >> roll;
    std::cout << "Please Enter the marks : " ;
    std::cin >> marks;
    std::cout << "\n";
    }
inline void display(student S){
    S.getdata();
    std::cout << "Roll No of the student is : " << S.roll << "\n";
    std::cout << "Marks of the student is : " << S.marks << "\n";
    
}

int main(int argc, const char * argv[]) {
    student obj;
    display(obj);
    std::cout << "\n";
    return 0;
}
