
#include <stdio.h>

int scanElement(int *,int);

int findLargestElement(int *, int);

int main () {

    int size;

    printf("\n enete size : ");
    scanf("%d", &size);

    int number[size];

    scanElement(number,size);
    findLargestElement(number, size);

    return 0;
}

int scanElement(int * ptr, int size) {

    printf("\n enter elements : ");

    for(int i = 0; i < size; i++) {
        scanf("%d", ptr + i);
    }

    return 0;
}

int findLargestElement(int * ptr, int size) {

    int max = ptr[0];

    for( int i = 0; i < size; i++) {
        if(max < ptr[i]) {
            max = ptr[i];
        }
    }

    printf("\n largest element : %d",max);

    return 0;
}