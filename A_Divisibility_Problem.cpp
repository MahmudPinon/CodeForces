
#include <iostream>
using namespace std;
int main() {
    int t,num1,num2;
    cin>>t;
    while(t--)
    {
        cin>>num1>>num2;
        if(num2>num1)
        {
            cout<<num2-num1<<"\n";
        }
        else
        {
            if(num1%num2==0)
            cout<<0<<"\n";
            else
            {
             int x=(num1/num2);
            int y=num2*(x+1);
            cout<<y-num1<<"\n";
            }
            
        }
    }
}