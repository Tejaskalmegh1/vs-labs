// Write a program to check whether a number is even or odd using the bitwise operator

#include<stdio.h>

int main(){
    int numberOne;

    printf("\n enter any number: ");
    scanf("%d",&numberOne);

    if(numberOne & 1){
        printf("\n %d is odd",numberOne);
    } 
    else{
        printf("\n %d is even",numberOne);
    }

    return 0;
}