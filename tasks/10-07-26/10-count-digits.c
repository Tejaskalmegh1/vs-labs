// Take a number. Count how many digits it has. Example: 4567 → 4 digits

#include<stdio.h>

int countNumberOfDigits(int);

int main(){
    
    int number;

    printf("\n enter any number: ");
    scanf("%d",&number);
    
    countNumberOfDigits(number);
    return 0;
}

int countNumberOfDigits(int number){
    
    int temp, count = 0;
    
    while(number > 0){
        temp = number % 10;
        count++;
        number /= 10;
    }

    printf("\n there are %d number of digits",count);
    return 0;
}