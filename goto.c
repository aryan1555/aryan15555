#include<stdio.h>
int main (){
    for (int i=0; i<10; i++){
        if (i==5){
            goto next;
        }
        printf("%d\t",i);
    }
    next : for (int j=0; j<5; j++){
        printf("%d\t",j);
    }
    return 0;
}