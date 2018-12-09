#include <stdio.h>

int main(void){
    int zippo[4][2];

    printf("%p \n",zippo);
    printf("%p \n",&zippo[0]);
    printf("%p \n", &zippo[0][0]);
    return 0;
}