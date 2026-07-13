// check the number is Armstrong or not 

#include<stdio.h>

int isArmstrong(int);

int main(){
    
    int number;
    printf("\n enter any number: ");
    scanf("%d",&number);

    isArmstrong(number);

    return 0;
}

int isArmstrong(int number){
    
    int temp = number, rem = 0, sum = 0;
    
    while(temp > 0){
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp /= 10;
    }

    if(sum == number){
        printf("\n %d is armstrong",number);
    }
    else{
        printf("\n %d is not armstrong",number);
    }

    return 0;
}