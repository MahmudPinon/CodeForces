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

#define for1(n) for(int i = 0; i <=n;i++)
int main()
{
    int n,x=0,y=0,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        y=max(x,y);
        x=x+b-a;
            }
    cout<<y<<endl;
}