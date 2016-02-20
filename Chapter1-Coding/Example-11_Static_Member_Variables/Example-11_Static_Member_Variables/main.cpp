//
//  main.cpp
//  Example-11_Static_Member_Variables
//
//  Created by goutdas on 08/02/16.
//  Copyright © 2016 goutdas. All rights reserved.
//

#include <iostream>

class noname{
public:
    static int i;
public:
    void display();
};

void noname::display(){
    std::cout << "\n";
    std::cout << "The value of the static variable is : " << ++i << "\n";
}

//Initialize the value of a static member with 0
int noname::i = 6;

int main(int argc, const char * argv[]) {
    noname n1;
    noname n2;
    std::cout << "The value of the static variable is : " << n1.i << "\n";
    std::cout << "The value of the static variable is : " << n2.i << "\n";
    //Increment the value of the Static Member variable
    noname::i++;
    n1.display();
    n2.display();
    return 0;
}
