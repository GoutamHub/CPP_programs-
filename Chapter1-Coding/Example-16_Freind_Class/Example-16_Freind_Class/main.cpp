//
//  main.cpp
//  Example-16_Freind_Class
//
//  Created by goutdas on 10/02/16.
//  Copyright © 2016 goutdas. All rights reserved.
//

#include <iostream>
class student{
    friend class exam; //Here exam is a Friend class for Student class
private:
    int roll;
public:
    void getdata();
};

class exam{
public:
    void display(class student);
};

void student::getdata(){
    std::cout << "\nEnter the roll no : ";
    std::cin >> roll;
}

void exam::display(student s){
    std::cout << "\nRoll No. of the student is : " << s.roll << "\n";
    
}
int main(int argc, const char * argv[]) {
    student s;
    exam e;
    s.getdata();
    e.display(s);
    return 0;
}
