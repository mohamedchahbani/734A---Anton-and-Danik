#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=0,a=0,d=0,n;
    string ch;
    cin>>n>>ch;
    for ( i = 0; i <n ; i++)
    {
        if (ch[i]=='D')
        {
            d++;
        }else
        {
            a++;
        }
    }

    if (a>d)
    {
        cout<<"Anton";
    }
    else if (a<d)
    {
        cout<<"Danik";
    }else
    {
        cout<<"Friendship";
    }
    
    
    return 0;
}