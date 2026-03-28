#include<bits/stdc++.h>
using namespace std;
void number()
{
    for(int  i = 1 ; i <= 4 ; i++)
    {
        for(int j = 1 ; j<=i; j++)
        {
            cout<<j;
        }
        for(int space = 1 ; space <= 2*(4-i) ; space++)
        {
            cout<<" ";
        }
        for(int j = i ; j>=1 ; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
int main ()
{
    number();
}