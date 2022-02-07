#include <stdio.h>
#include <stdlib.h>

int findMax (int n){
    int input,max;
    printf("ENTER A NUMBER PLEASE: ");
    scanf("%d", &input);


    if (input >1)
    {
        max = findMax(n-1);
        if (input > max)
            return input;
        else  
            return max;
    }

    return input;
}



int main (){
    int result = findMax(0);
    printf("RESULTADO: %d",result);



    return 0;
}