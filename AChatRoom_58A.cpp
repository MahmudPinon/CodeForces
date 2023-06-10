#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define pb push_back
#define for1(n) for(int i = 0; i < n;i++)
#define for2(n) for(int i = 1; i <= n;i++)
typedef long long ll;
typedef vector<ll> vl;
typedef vector<int> vi;
void solve()
{
    int l=0,k=0;
   string input,res="hello";
   cin>>input;
   for(int i=0;i<input.length();++i)
   {
    if(input[i]==res[k])
    {
        l++;
        k++;
    }
   }
   if(l==5)
   {
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
}


int main()
{
    solve();
}