// Write a function to check whether a number is a palindrome

#include<stdio.h>

int isPalindrome(int);

int main(){
    int number;
    printf("\n enter any number: ");
    scanf("%d",&number);
    isPalindrome(number);
    return 0;
}

int isPalindrome(int number){
    
    int temp, rev = 0, rem = 0;
    temp = number;
    
    while(temp != 0){
        rem = temp % 10;
        rev = (rev * 10) + rem;
        temp /= 10;
    }

    if (rev == number){
        printf("\n %d is palindrome",rev);
    }
    else{
        printf("\n %d is not a palindrome",rev);
    }
    
    return 0;
}
