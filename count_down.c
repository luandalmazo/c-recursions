#include <stdio.h>
#include <stdlib.h>

void count_down (int n){
    if (n==1)
        printf("%d - ",n);    
    else
    {
        printf("%d - ",n);
        count_down(n-1);
    }
}

int main(){
    count_down(10);
    return 0;
}