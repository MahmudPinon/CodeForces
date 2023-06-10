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
   int x;
   int t;
   cin>>t;
   while(t--)
   {
      ll a,b,c;
      cin>>a>>b>>c;
      if(c>b)
      {
         x=(c-1)+(c-b);
      }
      else
          x=(c-1)+(b-c);

      if(x==(a-1))
      {
        cout<<3<<endl;
      }    
      else if(x<(a-1))
      {
           cout<<2<<endl;
      }
      else if(x>(a-1))
      cout<<1<<endl;

   }
    
    
}