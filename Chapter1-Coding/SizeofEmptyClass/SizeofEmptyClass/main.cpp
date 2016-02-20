//
//  main.cpp
//  SizeofEmptyClass
//
//  Created by goutdas on 20/01/16.
//  Copyright © 2016 goutdas. All rights reserved.r
//

#include <iostream>
//case-1:
class empty{};
// case-2:
//class derived: empty { int a; };
 
int main(int argc, const char * argv[]) {
    std::cout << "Size of an Empty Class is :" <<sizeof(empty)<< "\n";
    //empty a;
    //std::cout << "Size of an Object for that Empty Class is :"<< sizeof(a)<< "\n";
    //std::cout << "Size of an derived Class is :" <<sizeof(derived)<< "\n";
    //derived b;
    //std::cout << "Size of an Object for that derived Class is :"<< sizeof(b)<< "\n";

    return 0;
}

/*int main(int argc, const char * argv[]) {
 
 Empty a, b;
 if (&a == &b)
 cout << "impossible " << endl;
 else
 cout << "Fine " << endl;return 0;
}*/


/*int main(int argc, const char * argv[]) {
 Empty* p1 = new Empty;
 Empty* p2 = new Empty;
 if (p1 == p2)
 cout << "impossible " << endl;
 else
 cout << "Fine " << endl;
 return 0;
 }*/