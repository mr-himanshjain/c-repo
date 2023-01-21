// count the word in the  given string and ignore all of the \n and space and \t etc
#include<iostream>
#define OUT 0 
#define IN 1
using namespace std;
unsigned countwords(char *str)
{
    int state = OUT;
    unsigned wc = 0;
    while(*str)
    {
        if(*str == ' ' || *str == '\n' || *str == '\t')
        {
            state = OUT;
        }
        else if(state == OUT)
        {
            state = IN;
            ++wc;
        }
        ++str;
    }
    return wc;
}

int main(){
    char str[] = " hello my name is     himanshu \n jain and \t i am learning cpp with string and \n etc";
    cout<<"no. of words are: "<<countwords(str);
    
    return 0;  
}