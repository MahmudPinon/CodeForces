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
#define for1(n) for(int i = 2; i<=n;i++)
#define for2(n) for(int j = i; j<=n;j+=i)

int main() 
{
  
    
    int t,n;
    cin>>t;
    
    while(t--)
    {
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;++i)
    {
        cin>>arr[i];
        

    }
    int max=arr[1];
    for(int i=2;i<=n;++i)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        

    }
    if(n==1)
    {
        cout<<1<<endl;
    }
    else
    {
         
        auto itr = find(arr, arr + n, max);
        cout<<distance(arr, itr)<<endl;
      
    }
    }
    
}