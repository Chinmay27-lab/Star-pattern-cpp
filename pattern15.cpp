#include<bits/stdc++.h>
using namespace std;
void number()
{
    for(int  i = 1 ; i <= 5 ; i++)
    {
        char ch = 'A';
        for(int j = 1 ; j<=i; j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}
int main ()
{
    number();
}