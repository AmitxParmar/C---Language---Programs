#include<stdio.h>
int main(){

enum month{
    jan,fab,march,april,june,july,aug,sep,oct,nov // Internally, Compiler treats Enumerators as an integer.
}; // we can initialize enumerators with different integer values.
int tage()
{
    enum month m1,m2,m3; // Each value on the list of permissible values corresponds to an integer,
                        // starting with 0. In the example January is stored as 0, fab is stored as 1..,
                       // dec is stored as 11.
}
enum boolean{        // You can write any program in C Language without the help of enumerations but,
    false,true      // enum helps in writing clear codes and simplify programming.
};
}