#include<stdio.h>
struct amit_parmar
{
    int x,y;
};

int main()
{
    // create an array of structure 
    struct amit_parmar NameOfTheArray[10];

    // Accessing Array Members
    NameOfTheArray[0].x=10;
    NameOfTheArray[0].y=20;
    printf("%d %d", NameOfTheArray[0].x, NameOfTheArray[0].y);
    return 0;
}