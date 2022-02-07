#include <stdio.h>
#include <stdlib.h>

int small (int n){
    int input;
    printf("ENTER A NUMBER PLEASE: ");
    scanf("%d", &input);
    if (input == -1)
        return 0;
    if (input < n)
        return 1+small(n);
    return small(n);
}

int main (){
    int total;
    total = small(10);
    printf("TOTAL: %d\n", total);

    return 0;
}