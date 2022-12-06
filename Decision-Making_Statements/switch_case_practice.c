#include<stdio.h>

int main()
{
    int planet;
    printf("Enter Number Of the Planet");
    scanf("%d",&planet);

    switch (planet) {
    case 1:
    printf("earth");
    break;
    case 2:
    printf("2nd");
    break;
    case 3:
    printf("Mercury");
    break;
    }
}