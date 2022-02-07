#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    if (n<=1)
        return n;
    return fibonacci(n-1)+fibonacci(n-2);
}

int main (){
    int num,result = 0;
    printf("ENTER A NUMBER: ");
    scanf("%d",&num);
    result = fibonacci(num);
    printf("RESULT = %d\n",result);
    return 0;
}