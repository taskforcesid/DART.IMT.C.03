/*
Please write a C-program that uses a recursive function called 
"sumOfDigits()" to compute the sum of the digits of a number. 
To do so, your main function should first read an integer number 
as input and then call sumOfDigits(), which should in turn call 
itself until there are no digits left to sum, at which point the 
final sum should display to the user.
*/
#include <stdio.h>

int sumOfDigits (int);

int main(){
    int input = 0;
    //read an integer value
    scanf("%d",&input);
    int result = sumOfDigits (input);
    printf("%d", result);
}

int sumOfDigits(int value){
    if(value == 0){
        return 0;
    }else{
        int digit = value % 10;
        return digit + sumOfDigits((value - digit) / 10);
    }
}