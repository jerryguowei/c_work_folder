#include<stdio.h>
int main(void){
    long double a,b;
    b = 2.0e5 + 1.0;
    a = b -2.0e5L;
    printf("%f,\n",a);
    return 0;
}