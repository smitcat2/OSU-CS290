/****************************
 ** Author: Catherine Smith
 ** Date: Oct 11, 2015
 ** Description: Project 5.b boxSort
 *****************************/


#include "Box.cpp"
#include <iostream>

using namespace std;

void sortArray ( Box array[], int size)
{
    bool swap;
    Box temp;
    
        do
            
        {
            swap=false;
            for (int count=0; count<(size-1); count++)
            {
                if (array[count].getVolume() < array[count+1].getVolume())
                {
                    temp=array[count];
                    array[count]=array[count+1];
                    array[count+1]=temp;
                    swap=true;
                }
            }
        }
        while (swap);
}