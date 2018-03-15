//
//  main.cpp
//  hello-world
//
//  Created by apple on 3/8/18.
//  Copyright © 2018 apple. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[])
{
    char* name = new char[12];
    cout << "Please enter your name and hit ENTER\n";
    gets(name);
    // insert code here...
    cout << "Hello, " << name << endl;
    return 0;
}
