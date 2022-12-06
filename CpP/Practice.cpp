#include<iostream>
using namespace std;

int main(){
    int a[]={2,6,4,8,4,5,8,22,6,33,56,2648,11,12,25}, search, c,temp;
    cout<<"Enter value to search in the array";
    cin>>search;
    for(c=0; c<=a[15]; c++){
        if(a[c]==search){
            a[c] = temp;
            return temp;
        }
        else {
            cout<<"value not found"<<endl;
        }
        
    }
   
}