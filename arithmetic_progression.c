#include <stdio.h>
#include <stdlib.h>

int sumUpTo (int num){
    if (num == 1)
        return 1;
    return num+sumUpTo(num-1);


}
int main (){
    int num,result = 0;
    printf("ENTER A NUMBER: ");
    scanf("%d",&num);
    result = sumUpTo(num);
    printf("RESULT = %d\n",result);
    return 0;
}