/* delivery company has hired you to manage their tracking 
services division. It is your job to store all of the currently 
used tracking codes in the company's database. These codes 
consist of either all integers, all decimal numbers, or all 
characters. The chief technology officer has warned you that 
the database is old and has limited space, so you want to 
determine how much memory the tracking codes will occupy 
before storing them. You decide to write a program to assist 
you in this process. 

Your program should first read an integer number indicating 
how many tracking codes you plan on entering. Next, for each 
successive tracking code your program should read in the 
integer length of code followed by a space and then the type 
of code ('i' for integer, 'd' for decimal, or 'c' for character). 
Finally your program should print the total amount of space 
required to store all of the tracking codes (in bytes). If 
the user enters an incorrect type for any tracking number, 
the program should print 'Invalid tracking code type' 
and exit. */

#include <stdio.h>

int main (){
    int numberOfCodes = 0;
    int codeLength;
    char typeOfCode = ' ';
    int totalSpace = 0;
    int i = 0;
    
    scanf("%d", &numberOfCodes);
    
    for(i = 0 ; i < numberOfCodes; i++){
        scanf("%d %c", &codeLength, &typeOfCode);
        if(typeOfCode == 'i' || typeOfCode == 'I'){
            totalSpace += sizeof(int)*codeLength;
        }else if (typeOfCode == 'd' || typeOfCode == 'D'){
            totalSpace += sizeof(double)*codeLength;
        }else if (typeOfCode == 'c' || typeOfCode == 'C'){
            totalSpace += sizeof(char)*codeLength;
        }else{
            printf("Invalid tracking code type\n");
            return 0;
        }        
    }
    printf("%d bytes\n",totalSpace);

}