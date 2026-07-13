#include <stdio.h>

int swap(int, int);

int main() {

    int numberOne, numberTwo;

    printf("\n enter first number: ");
    scanf("%d",&numberOne);
    printf("\n enter second number: ");
    scanf("%d",&numberTwo);

    swap(numberOne, numberTwo);
    
    printf("\n First number : %d",numberOne);
    printf("\n second number : %d",numberTwo);
    
    return 0;
}

int swap(int numberOne, int numberTwo) {

    int temp;

    temp = numberOne;
    numberOne = numberTwo;
    numberTwo = temp;

    return 0;
}