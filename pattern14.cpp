#include<bits/stdc++.h>
using namespace std;
void number(int n)
{
    for(int i = 1 ; i <= 5 ; i++)
    {
        for(int j = 1 ; j <=i ; j++)
        {
            cout<<n++<<" ";
        }
        cout<<endl;
    }
}
int main ()
{
    int n = 1 ;
    number(n);
}