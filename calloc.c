#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int *ptr, arraySize;

    printf("\n enter the array size  : ");
    scanf("%d",&arraySize);

    ptr = (int*)calloc(arraySize, arraySize * sizeof(int));
    
    printf("\n enter %d array elements : ",arraySize);
    for(int i = 1; i <= arraySize; i++){
        scanf("%d",(ptr+i));
    }

    printf("\n array elements are: ");
    for(int i = 1; i<= arraySize; i++){
        printf("%d ",*(ptr+i));
    }

    free(ptr);
    
    return 0;
}