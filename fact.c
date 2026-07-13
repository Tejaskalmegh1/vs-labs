#include<stdio.h>

int fact(int n){// 1

    if(n == 1){
        return 1; /// end 
    }

    return n * fact(n-1);// 4  3 , 12 , 2 1, 24, 1
}

int main(){

   int result =  fact(4); // 24

   printf("\n result: %d",result); //24

    return 0;
}