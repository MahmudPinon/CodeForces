#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[4];
    while(t--)
    {
        cin>>arr[0];
        int x=arr[0];
        cin>>arr[1];
        cin>>arr[2];
        cin>>arr[3];
        if(arr[0]!=0 && arr[x]!=0 && arr[arr[x]]!=0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}