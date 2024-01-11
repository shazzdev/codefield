#include <stdio.h>

int main(){
    int cha;
    for (cha=0;cha<=255;cha++) {
        printf("The ASCII number of %c is %d",cha,cha);
    }
    return 0;
};