// Write a function to reverse a given integer

#include<stdio.h>

int reverseNumber(int);

int main(){
    int number;
    printf("\n enter any number: ");
    scanf("%d",&number);

    int rev = reverseNumber(number);
    printf("\n reverse of %d is %d",number,rev);

    return 0;
}

int reverseNumber(int number){
    int reverseNumber = 0, temp = 0;

    while(number > 0){
        temp = number % 10;
        reverseNumber = (reverseNumber * 10) + temp;
        number /= 10;
    }

    return reverseNumber;
}