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
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for1(s.length())
    {
       if((s[i]!= 'a') && (s[i]!= 'o')&&(s[i]!='y')&&(s[i]!='e')&&(s[i]!='u')&&(s[i]!='i'))
       {
          cout<<"."<<s[i];
       }
    }
    cout<<endl;
}