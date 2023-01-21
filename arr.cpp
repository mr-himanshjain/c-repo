#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int arr[3];
    for(int i=0;i<=sizeof(arr);i++)
    {
        scanf("input the element of arr %d",arr[i]);
    } 
    for(int i = 0;i<=sizeof(arr);i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
