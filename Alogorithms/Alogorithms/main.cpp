//
//  main.cpp
//  Alogorithms
//
//  Created by apple on 3/9/18.
//  Copyright © 2018 apple. All rights reserved.
//

#include <iostream>

#include "binary_search.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    if(!strcmp("binary_search", argv[1]))
    {
        binary_search();
    }
    else
    {
        cout << "unsupported command\n";
    }
    
    return 0;
}
