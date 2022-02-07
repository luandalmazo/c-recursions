#include <stdio.h>
#include <stdlib.h>


int sum_even (){   
    int input;
    printf("ENTER A NUMBER PLEASE: ");
    scanf("%d",&input);

    if (input == -1)
        return 0;
    if (input % 2 ==0)
        return input+sum_even();
    return sum_even();
}

int main (){
    int result = sum_even();
    printf("RESULTADO: %d", result);


    return 0;
}