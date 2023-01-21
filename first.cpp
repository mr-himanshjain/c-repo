#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<string>
using namespace std;

void countocc(string s)
{
    unordered_map<char, int> count;
    
    for(char i : s)
    {
        count[i]++;
    }
        
    for(char i : s)
    {
        if(count[i] != 0)
        {
            cout<< i << count[i] << " ";
            count[i] = 0;
        }
    }
}
int main()
{
    string s[] = {"geeksforgeeks","arya","himanshu","garvit"};
    int l = sizeof(s);
    for(int i = 0; i<l; i++){
        if(i == 4)
        {
            break;            
        }
        cout<<"the character of occereance in this: ";
        cout<<s[i]<<"       ";
        countocc(s[i]);
        cout<<endl;
    }
    return 0;
}