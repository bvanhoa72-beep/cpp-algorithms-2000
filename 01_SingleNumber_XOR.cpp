#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
    cin.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
   
    long long n,k;
    cin>>n>>k;
    if(k==1)
    {
      cout<<n<<"\n";
    }
    else
    {
      long long p=1;
      while(p<=n)
      {
        p*=2;
      }
      cout<<p-1<<"\n";
    }

  }
  return 0;
}
