//Exo 3 du TD
#include <stdlib.h>
#include <stdio.h>


void permute(int* V1, int* V2){
    int stock;
    stock=*V1;
    *V1=*V2;
    *V2=stock;
}

int main(){
    int V1;
    int V2;
    scanf("%d%d",&V1,&V2);
    printf("Hello world V1: %d V2: %d\n",V1,V2);
    permute(&V1,&V2);
    printf("Hello world V1: %d V2: %d\n",V1,V2);
}