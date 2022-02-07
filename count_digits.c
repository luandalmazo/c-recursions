#include <stdio.h>
#include <stdlib.h>

int count_digits (int n){
    if (n<=9){
        return 1;
    }
    return 1 + count_digits(n/10);
}

int main (){
    int num,result = 0;
    printf("ENTER A NUMBER: ");
    scanf("%d",&num);
    result = count_digits(num);
    printf("RESULT = %d\n",result);
    return 0;
}