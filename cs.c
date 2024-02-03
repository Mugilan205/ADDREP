#include<stdio.h>
#define num 100
int main(){
    printf("before redifining %d \n",num);
    #undef
    #define num 200
    printf("%d",num);
    return 0;
}