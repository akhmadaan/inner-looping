#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
    system("color b");
    for(int k=1;k<=10;k++)
    {
        for(int j=1; j<=k; j++)
        {
            cout<<j*k<<" ";
        }
        cout<<"\n";
    }
}
