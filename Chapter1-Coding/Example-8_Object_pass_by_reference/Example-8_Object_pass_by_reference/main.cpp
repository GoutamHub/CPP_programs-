//
//  main.cpp
//  Example-8_Object_pass_by_reference
//
//  Created by goutdas on 26/01/16.
//  Copyright © 2016 goutdas. All rights reserved.
//

#include <iostream>
class sample{
private:
    int x,y,z;
public:
    void getdata(int, int, int);
    void display();
    void change_sign(sample &);
};
void sample::getdata(int a, int b, int c){
    x = a;
    y = b;
    z = c;
}

void sample::display(){
    std::cout << "\nThe value of x is ::" << x << "\n";
    std::cout << "\nThe value of y is ::" << y << "\n";
    std::cout << "\nThe value of z is ::" << z << "\n";
}

void sample::change_sign(sample &s){
    s.x = -s.x;
    s.y = -s.y;
    s.z = -s.z;
    std::cout << "\nThe value of x within Change_sign method is ::" << s.x << "\n";
    std::cout << "\nThe value of y within Change_sign method is ::" << s.y << "\n";
    std::cout << "\nThe value of z within Change_sign method is ::" << s.z << "\n";
    
}
int main(int argc, const char * argv[]) {
    sample s;
    s.getdata(-2, 5, -9);
    std::cout << "\n\n\t Befor Calling The Change-Sign Method !!";
    s.display();
    s.change_sign(s);
    std::cout << "\n\n\t After Calling The Change-Sign Method !!";
    s.display();
    std::cout << "\n";
    return 0;
}
