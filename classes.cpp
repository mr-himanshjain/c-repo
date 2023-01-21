#include<iostream>
using namespace std;
class parent
{
    private: 
       int c;
       void show()
       {
           cout<<"\n i am a private data";
       }
    public:
        int a;
        int b;
        void useit()
        {
            c=0+6;
            cout<<"\nvalue of c is := "<<c;
            show();
        }
    
};          

int main()
{
    parent myp;
    myp.a=33;
    myp.b=45;
    cout<<"value of a is:= "<<myp.a;
    cout<<"\nvalue of b is:= "<<myp.b;
    myp.useit();
    
    
    return 0;
}