//
//  main.cpp
//  basicsTutorials
//
//  Created by Falgun Shah on 4/1/14.
//  Copyright (c) 2014 Ozymandias. All rights reserved.
//

#include <iostream>
#include "sortingAlgorithms.h"

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    sortingAlgorithms s ;
    int x[7] = {97,87,67,109,2,4,5};
    s.bubbleSort(x, 7);
    return 0;
}

