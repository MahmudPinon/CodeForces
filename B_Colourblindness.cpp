#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
double pi = acos(-1.0); 
#define allZero(a) memset(a,0,sizeof(a));
#define allnegOne(a) memset(a,-1,sizeof(a));
#define endl "\n"
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define reverseS string(curr.rbegin(),curr.rend()); //reverse string assignment
#define Read freopen("input.txt","r",stdin);
#define Write freopen("output.txt","w",stdout);
#define pb(x) push_back(x);
#define for1(n) for(int i = 0; i<=n;i++)
int main()
{
   
   string s1,s2;
   int t,n;
   cin>>t;
   bool flag=false;
   while(t--)
   {
   cin>>n>>s1>>s2;
   for1(n)
   {
    if(s1[i]=='G' && s2[i]!='G')
    {
        s1[i]='B';
    }
    else if(s2[i]=='G' && s1[i]!='G')
    {
        s2[i]='B';
    }
   }
   if(s1==s2)
   cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
   }

}