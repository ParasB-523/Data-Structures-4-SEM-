// C-Program to sort the numbers read from Files in C .//
/* Name : Paras Bharatesh Bennadi
   Class : 'E' Division
   Roll no.: 513
   USN : 01fe21bec256
   Program Name : Replace the Sub-String
   Date : 24-04-2023
*/

#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fptr=NULL;
    char s[100];
    fptr = fopen("BVB.txt","w");
    printf("Enter the string\n");
    gets(s);
    fputs(s,fptr);
    fclose(fptr);
    return 0;
}
