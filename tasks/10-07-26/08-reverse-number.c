//  Reverse a given integer

#include<stdio.h>

int numberReverse(int);

int main(){
    int number;
    printf("\n enter any number: ");
    scanf("%d",&number);
    numberReverse(number);
    return 0;
}

int numberReverse(int number){
    int temp = number,rev = 0,rem;

    while(temp > 0){
        rem = temp % 10;
        rev = (rev * 10) + rem;
        temp /= 10;
    }
    printf("\n Reverse: %d",rev);
    return 0;
}