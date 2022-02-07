#include <stdio.h>
#include <stdlib.h>

int sum_digits(int n){

    if (n<=9)
        return n;
    return n%10 + sum_digits(n/10);

}

int main (){
    int num,result = 0;
    printf("ENTER A NUMBER: ");
    scanf("%d",&num);
    result = sum_digits(num);
    printf("RESULT = %d\n",result);
    return 0;
}