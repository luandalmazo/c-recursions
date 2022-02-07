#include <stdio.h>
#include <stdlib.h>

void count_down_up (int n){
    if (n==1)
    {
        printf("\n");
        printf("%d - ",n);    
    }
    else
    {
        printf("%d - ",n);
        count_down_up(n-1);
        printf("%d - ",n);
    }
}

int main (){
    count_down_up(10);
}