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
#define for2(n) for(int j = 2*i; j<=n;j+=i)
const int N=1001;
vector<int>Prime;
bool prime[N];
int main() 
{
prime[0]=prime[1]=true;

     for1(N)
     {
        if(!prime[i])
        {
            for2(N)
            {
                prime[j]=true;
            }
            Prime.pb(i);
        }
     }
    //vector <int> noldbach_number(1000 + 1, false);
    int result[N]={0};
    for(int i = 0; (Prime[i] + Prime[i + 1]+1)<= 1000 ; i++)
    {
        result[Prime[i] + Prime[i + 1] + 1] = 1;
    }

    int n,k;
    cin>>n>>k;
    int count = 0;
    for(int i = 0; Prime[i] <= n; i++)
    {
        if(result[Prime[i]]==1)
        {
          //  cout<<Prime[i]<<" ";
            count++;
        }
            
    }

    
    if(count>=k)
    {
        cout<<"YES"<<endl;
        
    }
    else
    {
    cout<<"NO"<<endl;
     
    }
}