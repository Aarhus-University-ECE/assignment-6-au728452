#include <stdio.h>
#include <assert.h>

int max(int* numbers, int size)
{
    // Excercise 2
    // Implement your code below...
    int maximum = 0; // Initialize variable
    assert(size>0); // To check for precondition
    for (int i = 0; i < size; i++) //For loop, that checks every number in an array, and compares its size to the previous number in the array
    {
        if(numbers[i]>maximum){
            maximum = numbers[i];
        }
    }
    

    return maximum; //Returns the value of the largest number in the array
}
