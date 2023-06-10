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
string input;
cin>>input;
int uppercount=0;

for(int i=1;i<=input.length();++i)
{
    if(isupper(input[i]))
    {
      uppercount++;
    }
}

if(uppercount==input.length()-1 && isupper(input[0]) )
{
   transform(input.begin(),input.end(),input.begin(),::tolower);
}
else if(uppercount==input.length()-1 && islower(input[0]))
{
transform(input.begin(),input.end(),input.begin(),::toupper);
    transform(input.begin()+1,input.end(),input.begin()+1,::tolower);
    
}
else if(input.length()==1)
{
    input[0]=toupper(input[0]);
}
cout<<input<<endl;
   
}


int main()
{
    solve();
}