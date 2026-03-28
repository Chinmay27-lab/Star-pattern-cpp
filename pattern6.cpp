#include<bits/stdc++.h>
using namespace std;
void number()
{
    for(int i = 1 ; i <= 5 ; i++)
    {
        for(int j = 5 ; j >= i ; j--)
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