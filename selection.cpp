#include<iostream>
#include<conio.h>
using namespace std;
void printarray(int* arr, int n){
    for(int i=0;i<n;i++)
    {   cout<<" "; 
        cout<< arr[i],"  \n"; 
    }
    cout<<"\n";
}
void selectionsort(int *arr,int n){
int indexofmin, temp;
for(int i=0; i<n; i++)
{
    indexofmin = i;
    for(int j=i+1; j<n; j++)
    {
        if(arr[j] < arr[indexofmin]) {    
            indexofmin = j; 
        }
    }
    temp=arr[i]; 
    arr[i]=arr[indexofmin];
    arr[indexofmin]=temp;
    
}
}
int main(){
int arr[] = {9,5,3,7,1,69,87,25,41,68,34,63,99};
int n = 13;
// int lenght = sizeof(arr)/sizeof(arr[0]);
// lenght = n;
printarray(arr, n);
selectionsort(arr, n);
printarray(arr,n);

return 0;
}
