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
    int n,q,m,count=0;
    cin>>n;
    int arr[n];
    for1(n)
    cin>>arr[i];

    sort(arr,arr+n);
    cin>>q;
    while(q--)
    {
        cin>>m;
        if(arr[n-1]<=m)
        {
            cout<<n<<endl;
        }
        else if(arr[0]>m)
        cout<<0<<endl;
        else
        {
            cout<<upper_bound(arr,arr+n,m)-arr<<endl;
        }
        
    }
}