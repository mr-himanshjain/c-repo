#include<cstring>
#include<iostream>
using namespace std;
int main(){
    // strtok break the string when it encounter empty space.  like this char* word = strtok(quate," "); 
    // the strtok is use for give next token in cstring 
    // delim delimiting char.. the charcter which is saparate by tokens
    char quate[] = "hello my name is himanshu jain and i think i understand strtok";
    char delim[] = " ";
    char* token = strtok(quate,delim);
    while(token)
    {
        cout<< token <<endl;
        token = strtok(NULL,delim);
    }
}