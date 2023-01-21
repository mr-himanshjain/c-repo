#include <iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

int reve(char* str){
    vector<string> revs;
    char *p ;    
    p = strtok(str," ");
    while(p!= NULL)
    {
        revs.push_back(p);
        p = strtok(NULL," ");
    }
    // reverse(revs.begin(),revs.end());  //this will also work only this line with this line 17 for loop
    // for(int i = 0; i<revs.size();i++)  // this will work and we can use differeny for condition
    for(int i = revs.size() -1;i>=0;i--)
    {
        cout<<revs[i]<<" ";
    }
    return 0;
}
int main()
{
    char s[] = "hello mr Himanshu";
    reve(s); 
    return 0;
}