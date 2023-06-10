#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=0;
    int arr[14]={4,7,44,47,74,77,444,447,474,777,774,747,777,477};
    
    for(int i=0;i<=13;++i)
    {
        if(n%arr[i]==0)
        {
            x=1;
        }
        
    }
    if(x==1)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
}