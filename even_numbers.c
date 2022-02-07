#include <stdio.h>
#include <stdlib.h>

int even (){
    int input;
    printf("ENTER A NUMBER PLEASE: ");
    scanf("%d", &input);
    if (input == -1)
        return 0;
    if (input % 2 ==0)
        return 1 + even();
    return even();


}

int main (){
    int result =0;
    result = even();
    printf("RESULT: %d",result);
    return 0;
}