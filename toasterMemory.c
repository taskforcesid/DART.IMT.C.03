/*
You are programming a toaster! The toaster does not have a lot of 
memory, so you need to be careful about the data types you use 
(remember that different data types use different amounts of memory). 
To make this easier, you'd like an easy way to track how much memory 
your variables are going to use.

Your job is to write a program that shows, in human-readable form 
(see below for specifics), how much memory a set of variables of 
a certain type will use. Your program should read a character that 
identifies the data type ('i' for int, 's' for short, 'c' for char, 
'd' for double). Next it should read an integer that indicates how 
many variables of the given type you wish to store.

Your program should then calculate the amount of memory required 
to store the given variables. Your program needs to be written in 
such a way that it would also perform correctly on other computers. 
In other words, rather than hard-coding specific sizes for the 
different variable types, your program needs to use the "sizeof()" 
function to determine how much memory an individual variable of 
a given type needs.

Finally, you need to output the amount of space required by your 
variables to the screen. You need to make sure you provide this 
output in a form that is easy to read for humans. The following 
examples illustrate what this means:
*/
#include <stdio.h>

void formatOutput (int, int, int);

int main (){
    char varType;
    int numberOfVariables;
    
    unsigned long int size = 0;
    int unitSize = 0;
    scanf("%c %d",&varType, &numberOfVariables);
    
    if(varType == 'c'){
        unitSize = sizeof(char);
    }else if (varType == 'i'){
        unitSize = sizeof(int);
    }else if (varType == 's'){
        unitSize = sizeof(short);
    }else if (varType == 'd'){
        unitSize = sizeof(double);
    }else{
        unitSize = 0;
    }
    size = unitSize * numberOfVariables;
    
    int MegaBytes = size / 1000000;
    
    size -= MegaBytes * 1000000;
    int kiloBytes = size / 1000;
    
    size -= kiloBytes *1000;
    int bytes = (int) size;
    
    formatOutput (MegaBytes, kiloBytes, bytes);
}

void formatOutput (int megaBytes, int kiloBytes, int bytes){
    if(megaBytes > 0){
        printf("%d MB", megaBytes);
    }
    if(kiloBytes > 0){
        if(megaBytes > 0){
            printf(" and ");
        }
        printf("%d KB",kiloBytes);
    }
    if(bytes >= 0){
        if(megaBytes > 0 || kiloBytes > 0){
            printf(" and ");
        }
        printf("%d B",bytes);
    }
}