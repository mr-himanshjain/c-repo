#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int main(){
    vector<int> vector1{1,2,3,4,5,6};
    vector<int> vector2{11,22,33,44,55,67};
    vector<int> vector3{13,24,63,54,51,62};
    cout<<"\n vector 1 ";
    for(int i: vector1)
    {
        cout<<i <<" ";
    }
    cout<<"\n vector 2 ";
    for(int i: vector2)
    {
        cout<<i <<" ";
    }
    cout<<"\n vector 3 ";
    for(int i: vector3)
    {
        cout<<i <<" ";
    }
}