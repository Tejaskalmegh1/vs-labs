#include <stdio.h>

int main() {

    int arr[] = {10, 17, 7 , 20, 7};
    int max = arr[0];

    for(int i = 1; i <= 4; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("\n Max element is %d",max);

    return 0;
}