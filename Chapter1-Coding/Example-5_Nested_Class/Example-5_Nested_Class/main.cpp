//
//  main.cpp
//  Example-5_Nested_Class
//
//  Created by goutdas on 25/01/16.
//  Copyright © 2016 goutdas. All rights reserved.
//

#include <iostream>

class result{
private:
    float marks;
public:
    void getdata_marks();
    void display_marks();
    
    class exam{
    private:
        int roll_no;
    public:
        void getdata_roll();
        void display_roll();
        
        class student{
        private:
            char name[10];
        public:
            void getdata_name();
            void display_name();
        };
    };
};

void result::getdata_marks(){
    std::cout << "Please Enter the marks for the student :: ";
    std::cin >> marks;
}

void result::display_marks(){
    std::cout << "\n\n marks for the student :: " << marks;
}

void result::exam::getdata_roll(){
    std::cout << "Please Enter the Roll_no for the student :: ";
    std::cin >> roll_no;
}

void result::exam::display_roll(){
    std::cout << "\n\n Roll_No for the student :: " << roll_no;
}

void result::exam::student::getdata_name(){
    std::cout << "Please Enter the Name of the student :: ";
    std::cin >> name;
}

void result::exam::student::display_name(){
    std::cout << "\n\n Name of the student :: " << name;
}
int main(int argc, const char * argv[]) {
    std::cout << "\n\nPlease Create+Display The Student Databse !!\n\n" ;
    result R;
    result::exam E;
    result::exam::student S;
    S.getdata_name();
    E.getdata_roll();
    R.getdata_marks();
    S.display_name();
    E.display_roll();
    R.display_marks();
    std::cout << std::endl;
    return 0;
}
