// Write a function to check whether a number is positive, negative, or zero

#include<stdio.h>

int checkNumber(int);

int main(){
    int number;
    printf("\n enter any number: ");
    scanf("%d",&number);
    checkNumber(number);
    return 0;
}

int checkNumber(int number){

    if (number > 0){
        printf("\n %d is Possitive",number);
    }
    else if (number < 0){
        printf("\n %d is Negative",number);
    }
    else {
        printf("\n %d is Zero",number);
    }

    return 0;
}