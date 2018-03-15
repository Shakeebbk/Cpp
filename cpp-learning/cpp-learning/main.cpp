//
//  main.cpp
//  cpp-learning
//
//  Created by apple on 3/13/18.
//  Copyright © 2018 apple. All rights reserved.
//

#include <iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base construct\n";
    }
    ~Base()
    {
        cout << "Base destruct\n";
    }
    
    virtual void sayHello() {
        cout << "Hello from Base\n";
    }
};

class Derived : public Base
{
public:
    Derived() {
        cout << "Derived construct\n";
    }
    ~Derived() {
        cout << "Derived destruct\n";
    }
    void sayHello() {
        cout << "Hello from Derived\n";
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Derived *d = new Derived();
    Base *b = d;
    
    b->sayHello();
    
    std::cout << "Hello, World!\n";
    return 0;
}
