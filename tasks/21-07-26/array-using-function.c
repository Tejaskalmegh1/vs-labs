#include <stdio.h>

int scanElement(int *, int);

int printElement(int *, int);

int main() {

    int size;
    
    printf("\n enter size of an elements : ");
    scanf("%d", &size);

    int number[size];

    scanElement(number,size);
    printElement(number,size);

    return 0;
}

int scanElement(int * ptr, int size) {
    
    printf("\n enter elements : ");

    for(int i = 0; i < size; i++) {
        scanf("%d", (ptr + i));
    }

    return 0;
}

int printElement(int * ptr, int size) {

    printf("\n elements : ");

    for(int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}