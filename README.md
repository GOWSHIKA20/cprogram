# cprogra#include <stdio.h>

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n==0)
    printf("zero");
    else if(n<0)
    printf("negative");
    else
    printf("positive");

    return 0;
}
