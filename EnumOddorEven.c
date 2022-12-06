#include<stdio.h>
enum boolean
{
    true,false
};

enum boolean isEven(int x)
{
    if(x%2==0)
    return(true);
    else
    (false);
}
void main()
{
    long n;
    enum boolean result;
    printf("Enter a number: ");
    scanf("%d",&n);
    result=isEven(n);
    if (result==true) {
    printf("%d is Even number",n);}
    else {
    printf("%d is Odd number",n);
    }
}
