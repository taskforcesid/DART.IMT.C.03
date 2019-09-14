/*
The goal of this problem is to find the smallest integer 
in a list of numbers.

To help you with this task, please write a function called 
min() that finds and returns the smallest amongst two 
integers (be sure to also write a prototype for this function). 
The function thus takes two integers as input and returns the
smallest of the two. This function will use an if statement 
with a condition that contains either "less than" or "greater 
than".

Next, please use min() in your main function to work your way 
through an entire list of numbers in order to find its minimum. 
The first number you read gives the number of elements in the 
list of integers under consideration. You will then read the 
integer values, using min() to keep only the smallest integer 
read at each step. In the end, please print out the smallest 
integer in the list.
*/

int min (int, int);

#include <stdio.h>

int main (){
    int numberOfValues = 0;
    scanf("%d", &numberOfValues);
    int values[50];
    int i = 0;
    for(i = 0; i < numberOfValues ; i++ ){
        scanf ("%d", &values[i]);
    }
    
    int minimum = values[0];
    int j = 0;
    for (j = 0; j < numberOfValues; j++ ){
        minimum = min (minimum, values[j]);
    }  
    printf("%d",minimum);
}

int min (int number1, int number2){
    if(number1 < number2){
        return number1;
    }else{
        return number2;
    }
}

