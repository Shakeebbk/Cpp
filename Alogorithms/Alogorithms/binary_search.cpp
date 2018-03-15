//
//  binary_search.cpp
//  Alogorithms
//
//  Created by apple on 3/9/18.
//  Copyright © 2018 apple. All rights reserved.
//
#include <iostream>
#include "binary_search.hpp"

using namespace std;

uint8_t dataset[] = {0x01, 0x02, 0x03, 0x5, 0x9};
uint8_t key = 0x6;

void binary_search(void)
{
    size_t start = 0;
    size_t end   = (sizeof(dataset) / sizeof(uint8_t)) - 1;
    while (start < end)
    {
        uint8_t mid = (start + end) / 2;
        if (dataset[mid] == key)
        {
            printf("Found the key [0x%02X] at index [0x%02X]\n", key, mid);
            return;
        }
        
        if (dataset[mid] < key)
        {
            start = mid;
        }
        else
        {
            end = mid;
        }
    }
    printf("key not found\n");
}
