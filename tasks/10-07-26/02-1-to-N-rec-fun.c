// Write a recursive function to print numbers from 1 to N

#include<stdio.h>

int printOneToN(int);

int main(){
    int number, i = 1;
    printf("\n enter any number: ");
    scanf("%d",&number);
    printOneToN(number);
    return 0;
}

int i = 1;
int printOneToN(int number){
    printf("\n %d",i);
    if(i != number)
    return printOneToN(i++);
}