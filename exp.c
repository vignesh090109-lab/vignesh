#include <stdio.h>
int main(){
    int a=10,b=5;
    int *p=&a;int *q=&b;
    printf("%d",*p+*q);
}