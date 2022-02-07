#include <stdio.h>
#include <stdlib.h>

int factorial (int n){
    if (n == 1)
        return 1;
    return n*factorial(n-1);
}

int main(){
    int num,result = 0;
    printf("ENTER A NUMBER: ");
    scanf("%d",&num);
    result = factorial(num);
    printf("RESULT = %d\n",result);

    return 0;
}