#include <stdio.h>

int main(){
    int num,fact=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    for (int i = 2; i < num; i++)
    {
        fact*=i;
    }
    return 0;
}