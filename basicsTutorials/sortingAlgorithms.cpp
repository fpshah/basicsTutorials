//
//  sortingAlgorithms.cpp
//  basicsTutorials
//
//  Created by Falgun Shah on 4/1/14.
//  Copyright (c) 2014 Ozymandias. All rights reserved.
//

#include "sortingAlgorithms.h"

void sortingAlgorithms::bubbleSort(int num[] , int numLength)
{
    int i, j, flag = 1;    // set flag to 1 to start first pass
    int temp;             // holding variable
 
    for(i = 1; (i <= numLength) && flag; i++)
    {
        flag = 0;
        for (j=0; j < (numLength -1); j++)
        {
            if (num[j+1] > num[j])      // ascending order simply changes to <
            {
                temp = num[j];             // swap elements
                num[j] = num[j+1];
                num[j+1] = temp;
                flag = 1;               // indicates that a swap occurred.
            }
        }
    }
    for (int k=0; k<numLength; k++) {
            std::cout << num[k]<<std::endl;
    }

}
