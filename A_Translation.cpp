#include <bits/stdc++.h>
using namespace std;
 
 
typedef long long ll;
 
//double pi = acos(-1.0);
 
#define allZero(a) memset(a,0,sizeof(a));
#define allnegOne(a) memset(a,-1,sizeof(a));
#define endl "\n"
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define reverseS string(curr.rbegin(),curr.rend()); //reverse string assignment
#define Read freopen("input.txt","r",stdin);
#define Write freopen("output.txt","w",stdout);
#define pb(x) push_back(x);
#define for1(n) for(int i = 0; i < n;i++)
int main()
{
    string s,s1;
    cin>>s>>s1;
    reverse(s.begin(),s.end());
  
    if(s==s1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}