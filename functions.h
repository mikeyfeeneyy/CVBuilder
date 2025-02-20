#pragma once
#include <iostream>
using namespace std;
// Name: Mikey Feeney   
// Student Number : C00252471
//You can only use int,char or bool variable.
// ONLY USE COUT IN DrawShape()
//You can use any functions you write yourself.
//Upload this file Exam2 Upload in Blackboard before the deadline.
//You may upload it more than once.
//To get marks the code must compile.
//Exam Duration 60 minutes

/*
Question 1 : 20 Marks
Write a nested loop that outputs the following. This nested loop contains only 2 for loops and at most 1 if and an else conditional statement.
You may only use cout << 'A' and cout << endl. The answer must be exactly the below to get marks.
A
AA
AAA
AA
A
*/
void DrawShape()
{
    int i;
    int j; 
    for(int i=0; i<5; i++){
        for(int j=0;j<3; j++){
           cout << "A";
        }
          cout << "\n" ;
     }
    
}



//Question 2 : 30 Marks

//Delete an element from an array of at a specified position.
//The parameter size is the size of the array when the array was declared
//The elements higher in the array are shifted to the left one position.
//Use a variable called count to track the number of elements in the array.
///Return true if an element was deleted, otherwise return false.


bool deleteElement(int& size, int& count, int arr[], int deleteIndex)
{
    int i;
    int j; 
        for(int i=0; i<size;i++)
        {
                if(arr[i] == deleteIndex)
                {
                    i--; 
                    count ++ ;
                }
        }
        
                if(count == size -1)
                {

                    return true;
                }
                else
                {

                    return false;
                }
}

//Question 3 : 20 Marks
//return the frequency of value in arr 
//( return a count of the number of times value appears in the array) 
int frequencyCount(int size, int arr[], int value)
{
    int count;
    int i;
    for(int i=0; i<size; i++)
    {
        if(arr[i] == value)
        {
            count ++;
        }
    }
    return count; 
    
}

//Question 4 : 30 Marks
//given an array of integers between 0 an 9 . 
//Count the frequency of each element of array 
// the frequencies are stored in freqArray.


//Example
//	int numberArray[12] = { 0,0,2,3,9,5,6,1,9,8,7,7 };

//int freqArray[10] = { 0,0,0,0,0,0,0,0,0 };
//frequencyCount(12, numberArray, 10, freqArray);
//After calling frequencyCount 
// freqArray = {2,1,1,1,0,1,1,2,1,2};
//position 0 in freqArray holds the number of 0's in numberArray
//position 1 i freqArray holds the number of 1's in numberArray
//etc..
//void frequencyCount(int sizeNumberArray, int numberArray[], int sizeFreqArray, int freqArray[])//
//{

//int i;
//int j;
 
 //or(i=0;i<sizeNumberArray;i++)
 //{
   //  for(j=0;j<sizeFreqArray;j++)
     //{
   //      frequencyCount(freqArray[]); 
     //}
 //}


//}