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

int main()
{
   
   string s;
   int t,y;
   cin>>t;
   while(t--)
   {
   cin>>y>>s;
   if(y==5)
   {
    sort(s.begin(),s.end());
    if(s=="Timru")
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
       
   }
   else
    cout<<"NO"<<endl;
   }
   
   
    

}