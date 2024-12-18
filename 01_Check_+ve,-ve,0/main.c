#include <stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    if (n<0)
    {
        printf("Negative");
    }
    else if (n>0)
    {
        printf("Positive");
    }
    else{
        printf("Zero");
    }

    return 0;
}