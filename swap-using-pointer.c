
#include <stdio.h>

int main() {

    void swap(int *, int *);
    
    int numberOne, numberTwo;

    printf("\n enter first number : ");
    scanf("%d", &numberOne);
    printf("\n enter second number : ");
    scanf("%d", &numberTwo);

    printf("\n before swap");
    printf("\n first number : %d second number : %d",numberOne,numberTwo);
    
    swap(&numberOne, &numberTwo);

    printf("\n after swap");
    printf("\n first number : %d second number : %d",numberOne,numberTwo);

    return 0;
}

void swap(int * numberOne, int * numberTwo) {
    int temp = * numberOne;
    *numberOne = *numberTwo;
    *numberTwo = temp;
}