#include<stdio.h>
#include<stdlib.h> 

void bubbleSort(int*, int);

int main(){
    
    int *ptr, arraySize;

    printf("\n enter array size : ");
    scanf("%d",&arraySize);

    ptr = (int*)malloc(arraySize * sizeof(int));
    
    printf("\n enyter array elements : ");
    for (int i = 0; i < arraySize; i++) {
        scanf("%d",(ptr+i));
    }

    bubbleSort(ptr, arraySize);
    
    return 0;
 }

 void bubbleSort(int *ptr, int arraySize) {
    
    int temp = 0;

    for(int i = 0; i < arraySize; i++) {
        for(int j = 0; j < arraySize - i - 1; j++) {
            if(*(ptr + j) > *(ptr + j + 1)){
                temp = *(ptr+j);
                *(ptr+j) = *(ptr+j+1);
                *(ptr+j+1) = temp;
            }
        }
    }

    printf("\n Sorted Array: ");
    for(int i = 0; i < arraySize; i++){
        printf("%d ", ptr+i);
    }
 }