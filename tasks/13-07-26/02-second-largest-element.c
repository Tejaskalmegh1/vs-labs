#include <stdio.h>

int main() {

    int max, second_max, currentIndex, size, number[size];

    printf("\n enter size : ");
    scanf("%d", &size);

    for( currentIndex = 0; currentIndex < size; currentIndex++ ) {

        printf("\n enter element[%d] : ", currentIndex);
        scanf("%d", &number[currentIndex]);
    }
    
    if(number[0] > number[1]){
        max = number[0];
        second_max = number[1];
    } 
    else {
        max = number[1];
        second_max = number[0];
    }

    for( currentIndex = 2; currentIndex < size; currentIndex++ ) {
        
        if(max < number[currentIndex]) {
            second_max = max;
            max = number[currentIndex];
        }
        
        if( second_max < number[currentIndex] && max > number[currentIndex]) {
            second_max = number[currentIndex];
        }
    }

    printf("\n array elements : ");

    for( currentIndex = 0; currentIndex < size; currentIndex++ ) {
        printf(" %d",number[currentIndex]);
    }

    printf("\n largest element : %d",max);
    printf("\n second largest element : %d",second_max);

    return 0;
}