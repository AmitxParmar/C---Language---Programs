#include<stdio.h>

int line_search(int element, int n, int list[]){
    int i,j,no,arr[10];
    printf("Enter 10 values in array");
    for(i=0; i<9; i++){
        printf("\n Enter Values");
        scanf("%d", &arr[i]);
    }
    printf("\n Enter values to be searched:");
    scanf("%d", &no);
    line_search(no, 10, arr);
}
int line_search(int element, int n, int list[]){
    int k, flag=0;
    for(k=0; k<n; k++){
        if (list[k]==element){
            printf("\n Searched is Successful:");
            printf("Element at %d location:: %d", k, element);
            flag = 1;
        }
    }
if(flag==0){
    printf("\n Searched is Unsuccessful");
}
}
