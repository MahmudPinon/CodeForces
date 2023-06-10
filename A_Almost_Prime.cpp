#include<bits/stdc++.h>
using namespace std;
#define for1(n) for(int i=2;i<=n;++i)
#define for2(n) for(int j=2*i;j<=n;j+=i)
#define pb(x) push_back(x);

#define  endl    "\n" ;
const int N=3001;
vector<int>NumberCheck[N];
bool prime[N];
vector<int>Prime_Numbers;
int main()
{
    prime[0]=prime[1]=true;
   int count[3001]={0};
   
   int res=0;
    for1(N)
    {
        if(!prime[i])
        {
            for2(N)
            {
                prime[j]=true;
                 NumberCheck[j].pb(i);
            }
        }
        
    }
    int n;
    cin>>n;
    
   for(int i=0;i<=n;++i)
    {
        if(NumberCheck[i].size()==2)
        {
            res++;
        }
        
    }
    cout<<res<<endl;
    
}