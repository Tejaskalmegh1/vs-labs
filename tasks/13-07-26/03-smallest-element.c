
#include <stdio.h>

int main() {

    int currentIndex, arraySize, arr[arraySize], min_element;

    printf("\n enter size of an array : ");
    scanf("%d",&arraySize);

    for(currentIndex = 0; currentIndex < arraySize; currentIndex++) {   
        printf("\n enter array elements arr[%d]: ",currentIndex);
        scanf("%d",&arr[currentIndex]);
    }

    min_element = arr[0];

    for(currentIndex = 0; currentIndex < arraySize; currentIndex++) {
        if( arr[currentIndex] < min_element ) {
            min_element = arr[currentIndex];
        }
    }

    printf("\n smallest element is : %d",min_element);
    
    return 0;
}