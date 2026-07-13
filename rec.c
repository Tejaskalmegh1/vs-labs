#include<stdio.h>

int n = 5;

int main(){

    if(n == 0){
        return 0;
    }

    printf("\n Pune");
    n = n - 1 ;
    return main();
}
