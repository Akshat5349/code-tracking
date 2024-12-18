#include <stdio.h>

int main(){
    int A,B,C;
    printf("Enter A : ");
    scanf("%d",&A);
    printf("Enter B : ");
    scanf("%d",&B);
    printf("Enter C : ");
    scanf("%d",&C);

    if (A>=B&&A>=C)
    {
        printf("A is largest");
    }
    else if (B>A&&B>=C)
    {
        printf("B is largest");
    }
    else{
        printf("C is largest");
    }
    
    
}