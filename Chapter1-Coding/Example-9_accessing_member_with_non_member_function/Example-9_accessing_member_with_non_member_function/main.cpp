//
//  main.cpp
//  Example-9_accessing_member_with_non_member_function
//
//  Created by goutdas on 28/01/16.
//  Copyright © 2016 goutdas. All rights reserved.
//
#include <iostream>
class sample{
public:
    int x,y,z;
public:
    void getdata(int, int, int);
};
void sample::getdata(int a, int b, int c){
    x = a;
    y = b;
    z = c;
}

void display(sample s){
    s.getdata(-2, 5, -9);
    std::cout << "\nThe value of x is ::" << s.x << "\n";
    std::cout << "\nThe value of y is ::" << s.y << "\n";
    std::cout << "\nThe value of z is ::" << s.z << "\n";
}

int main(int argc, const char * argv[]) {
    sample s;
//s.getdata(-2, 5, -9);
    display(s);
    std::cout << "\n";
    return 0;
}
