//
//  main.cpp
//  Example12-Static_functions
//
//  Created by goutdas on 10/02/16.
//  Copyright © 2016 goutdas. All rights reserved.
//

#include <iostream>
class sample{
    static int i;
    //int j = 10; J is a non-static member variable
public:
    sample();
    static void display();
};

int sample::i = 0;
sample::sample(){
    ++i;
}

void sample::display(){
    std::cout <<"\n";
    std::cout << "No of objects created is : " << i << "\n";
    //display is a static member function which trying to access a non-static member variable and getting complite time Error
    //std::cout << "The value of J is : " << j << "\n";
}
int main(int argc, const char * argv[]) {
    sample obj1, obj2, obj3;
    sample::display();
    obj1.display();
    return 0;
}
