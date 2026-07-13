// Write a program to swap two numbers without using a third variable

#include<stdio.h>

int swap(int,int);

int main(){

    int numberOne, numberTwo;
    printf("\n enter first number: ");
    scanf("%d",&numberOne);
    printf("\n enter second number: ");
    scanf("%d",&numberTwo);

    printf("\n before swap ");
    printf("\n first number: %d",numberOne);
    printf("\n second number: %d",numberTwo);
    swap(numberOne,numberTwo);

    return 0;
}

int swap(int numberOne, int numberTwo){

    numberOne = numberOne + numberTwo;
    numberTwo = numberOne - numberTwo;
    numberOne = numberOne - numberTwo;

    printf("\n after swap ");
    printf("\n first number: %d",numberOne);
    printf("\n second number: %d",numberTwo);
    
    return 0;
}