#include<bits/stdc++.h>
using namespace std;
void number()
{
    for(int i = 1 ; i<=5 ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 6 ; i <= 9 ; i++)
    {
        for(int j = 1 ; j <=10-i ; j++)
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