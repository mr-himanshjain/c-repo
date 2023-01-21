#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
// in simple in this program the string is converted into array using vector and then travers the array to find the given element
// strtok is use to saprate the string when it encountered empty space 
int countword(char* str,string words)
{
    char* p;
    vector<string> a;
    p = strtok(str," ");
    while(p!= NULL)
    {
        a.push_back(p);
        p = strtok(NULL," ");
    }
    std::vector<string>::iterator itr = std::find(a.begin(), a.end(), words );
    int c = 0;
    // for(string i: a)
    // cout<<" "<<i<<" "<<endl;
    if(itr != a.cend())
        cout<<"\nfirst given Element present at index "<< std::distance(a.begin(),itr)<<" \n";
    else
    cout<<"element not found";
    for(int i = 0; i<a.size(); i++)
    {
        cout<<i<<" "<<a[i]<<endl;
        if(words == a[i])
        c++;
    }
    cout<<"number of given element present are: ";
    return c;
}

int main()
{
    char str[] = "remember me when you look at the sky at ";
    string words = "at";
    cout<<countword(str,words);
    return 0;
}