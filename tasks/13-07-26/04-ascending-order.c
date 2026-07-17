
#include <stdio.h>

int main() {

    int temp, currentIndex, nextIndex, size, number[size];
   
    printf("\n enter size of array : ");
    scanf("%d", &size);

    for( currentIndex = 0; currentIndex < size; currentIndex++ ) {
        printf("\n enter element [%d] : ", currentIndex);
        scanf("%d", &number[currentIndex]);
    }

    printf("\n elements :  ");

    for( currentIndex = 0; currentIndex < size; currentIndex++ ) {
        printf("  %d", number[currentIndex]);
    }

    for( currentIndex = 0; currentIndex < size; currentIndex++ ) {
        
        for( nextIndex = 0; nextIndex < size - currentIndex - 1; nextIndex++ ) {
            
            if( number[nextIndex] > number[nextIndex+1] ) {

                temp = number[nextIndex];
                number[nextIndex] = number[nextIndex+1];
                number[nextIndex+1] = temp;
            }
        }
    }

    printf("\n elements in ascending order : ");

    for( currentIndex = 0; currentIndex < size; currentIndex++ ) {
        printf("  %d", number[currentIndex]);
    }

    return 0;
}