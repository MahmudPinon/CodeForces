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
int n,one,two,three,sum1=0,sum2=0,sum3=0;
cin>>n;
while(n--)
{
    cin>>one>>two>>three;
    sum1=sum1+one;
    sum2=sum2+two;
    sum3=sum3+three;
}
if(sum1==0 && sum2==0 && sum3==0)
{
    cout<<"YES";
}
else
{
    cout<<"NO";
}
   
}


int main()
{
    solve();
}