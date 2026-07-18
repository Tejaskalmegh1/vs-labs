#include <stdio.h>

int main () {

    int max, second_max, third_max, currentIndex, size;

    printf(" enter size of elements : ");
    scanf("%d", &size);

    int  number[size];
    
    printf("\n enter array elements : ");

    for( currentIndex = 0; currentIndex < size; currentIndex++ ) {
        scanf("%d", &number[currentIndex]);
    }

    for( currentIndex = 0; currentIndex < size; currentIndex++ ) {
        printf("\n element [%d] : %d",currentIndex,number[currentIndex]);
    }

    if(number[0] > number[1] && number[0] > number[2]) {
        
        max = number[0];

        if(number[1] > number[2]) {
            second_max = number[1];
            third_max = number[2];
        }
        else {
            second_max = number[2];
            third_max = number[1];
        }
    }

    else if( number[1] > number[2] && number[1] > number[0]) {
       
        max = number[1];

        if(number[0] > number[2]) {
            second_max = number[0];
            third_max = number[2];
        }
        else {
            second_max = number[2];
            third_max = number[0];
        }
    }

    else {
       
        max = number[2];

        if(number[2] > number[1]) {
            second_max = number[2];
            third_max = number[1];
        }
        else {
            second_max = number[1];
            third_max = number[2];
        }
    }

    for( currentIndex = 0; currentIndex < size; currentIndex++ ) {

        if( number[currentIndex] > max ) {
            third_max = second_max;
            second_max = max;
            max = number[currentIndex];
        }

        if( number[currentIndex] < max && number[currentIndex] > second_max ) {
            third_max = second_max ;
            second_max = number[currentIndex];
        }

        if( number[currentIndex] < second_max && number[currentIndex] > third_max ) {
            third_max = number[currentIndex];
        }
    }
    
    printf("\n max : %d", max);
    printf("\n second max : %d", second_max);
    printf("\n third max : %d", third_max);

    return 0;
}