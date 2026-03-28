#include<bits/stdc++.h>
using namespace std;
void number()
{
    for(int i = 5 ; i >= 1 ; i--)
    {
        for(int space =1 ; space <=5-i ; space++)
        {
            cout<<" ";
        }
        for(int star = 1 ; star <= 2*i-1 ; star++ )
        {
            cout<<"*";
        }    
        cout<<endl;
    }
}
int main ()
{
    number();
}