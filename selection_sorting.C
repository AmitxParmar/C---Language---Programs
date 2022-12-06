#include<stdio.h>
int selection_sort (int array[], int size){
    int temp, current, j;
    for (current=0; current<size; current++){
        if(array[current]>array [j]){
            temp=array[current];
            array[current]= array[j];
            array[j]=temp;
        }
    }
}
int main (void){
    int values[5], i;
    printf("Enter 5 Elements: \n");
    for(i=0; i<5; i++){
        scanf("\n %d", &values[i]);
    }

    selection_sort(values,5);
    printf("\n sorted list is as follows: \n");
    for(i=0; i<5; i++){
        printf("\n %d",values[i]);
    }

}