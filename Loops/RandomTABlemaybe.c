#include<stdio.h>
int main()
{
    int i=1,j;
    printf("Enter a number: ");
    scanf("%d",&j);
    while(i<=10)
    {
        printf("%d \n", (i*j));
        i++;
    }
    return 0;
}