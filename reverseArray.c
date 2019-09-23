/*
Within this program, we will pass an array with 6 integers to a 
function, have the function swap the first and last integer, the 
second and the second to last integer, the third and the third to 
last integer.

The function is called reverseArray and doesn't return anything 
(void). It should take one parameter, representing the array of integers. 

The main function first reads 6 integers from the input, and assigns 
them to the array. The main function then calls reverseArray, passing 
the array as an argument.

The main function then prints the reversed array.
*/
#include <stdio.h>

void reverseArray (int []);
void swap (int *, int *);

int main (){
    int dataArray[6];
    int i = 0;
    for(i = 0; i < 6; i++){
        scanf("%d", &dataArray[i]);
    }
    reverseArray(dataArray);
    for(i = 0; i < 6; i++){
        printf("%d ", dataArray[i]);
    }
}

void swap (int *ptrA, int *ptrB){
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

void reverseArray(int *myArray){
    swap(myArray,myArray+5);
    swap(myArray+1,myArray+4);
    swap(myArray+2,myArray+3);
}