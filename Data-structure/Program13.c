#include<stdio.h>
#define size 5
int stack[size];
int tos=1;
int flag=0;
 
 void push(int x);
 void display();
 void pop();
 
 void main()
 {
     int choice = 1, data;
     while (choice >=1 && choice < 4)
     {
         do{
             printf("\n \t \t Menu");
             printf("\n \t \t =================");
             printf("\n \t \t 1.push");
             printf("\n \t \t 2.pop");
             printf("\n \t \t 3.display");
             printf("\n \t \t 4.exist");
             printf("\n Enter your choice");
             scanf("%d", &choice);
         }
while(choice < 1 || choice > 4);
     switch(choice){
         case 1:
         {
             printf("\n It push operation selected");
             printf("\n \t enter value to be pushed");
             scanf("%d", &data);
             push(data);
             if(flag==0){
                 printf("\n stack is full");
             }
             else{
                 display();
                 if(tos==size-1){
                     printf("\n stack is  overflow");
                 }
             }
             break;
         }
         case 2:
         {
             printf("\n It Pop operation selected");
             pop();
             if (flag==0)
             {
                 printf("\n stack empty");
             }
             else{
                 if (tos==-1){
                     printf("\n \t stack undeflow");
                     display();
                 }
             }
         break;
         }
         case 3:
         {
            printf("\n \t Display selected");
            display();
            break;
         }
     }
 }
 printf("End of the program");
 
 void push(int x){
     if (tos==size -1)
     {
         flag=0;
     }
     else{
         ++tos;
         stack[tos]=x;
        flag=1;
     }
 }
 void pop()
 {
     if (tos==-1){
         flag=0;
     }
     else{
         printf("\n Popped elements %d", stack[tos]);
         tos--;
         flag=1;
          }
    }
void display(){
    int i;
    printf("\n stack values");
    for(i=tos; i>=0; i--){
        printf("\n \t \t %d", stack[i]);
    }
}