#include <stdio.h>

int main() {

    int max, currentIndex, size, number[size];

    printf("\n enter the size : ");
    scanf("%d", &size);

    for(currentIndex = 0; currentIndex < size; currentIndex++) {

        printf("\n enter element [%d] : ", currentIndex);
        scanf("%d", &number[currentIndex]);
    }

    max = number[0];

    for(currentIndex = 1; currentIndex < size; currentIndex++) {

        if(number[currentIndex] > max) {
            max = number[currentIndex];
        }
    }

    printf("\n largest element is : %d",max);

    return 0;
}