#include<stdio.h>
int main(){
    int a=40,b=45;
    printf("before swapping a=%d b=%d",a,b);
    a=a+b;
    b=b-a;
    printf("\nafter swapping a=%d b=%d",a,b);
    return 0;
}