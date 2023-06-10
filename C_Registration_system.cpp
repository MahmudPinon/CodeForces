#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define pb push_back
#define for1(n) for(int i = 0; i < n;i++)
#define for2(n) for(int i = 1; i <= n;i++)
typedef map<string,int>res;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<int> vi;
void solve()
{

   res res1;
   int n;
   string input;
   cin>>n;
   while(n--)
   {
    cin>>input;
    if(res1[input]==0)
    {
        res1[input]++;
        cout<<"OK"<<endl;
    }
    else{
        cout<<input<<res1[input]<<endl;
        res1[input]++;
    }
   }

}


int main()
{
    solve();
}