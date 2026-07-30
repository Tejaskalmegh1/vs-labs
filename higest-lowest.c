#include <stdio.h>

int highest(int marks[], int n) {

    int i, max = marks[0];

    for(int i = 0; i < n; i++) {
        if (marks[i] > max)
        max = marks[i];
    }
    return max;
}

int lowest(int marks[], int n) {

    int i, min = marks[0];

    for(int i = 0; i < n; i++) {
        if (marks[i] < min)
        min = marks[i];
    }
    return min;
}

int main() {

    int marks[10],i;

    printf("Enter 10 student marks :\n");

    for(int i =0; i < 10; i++) {
        scanf("%d", &marks[i]);
    }

    printf("Highest marks = %d\n",highest(marks,10));

    printf("lowest marks = %d\n", lowest(marks,10));
    
    return 0;
}