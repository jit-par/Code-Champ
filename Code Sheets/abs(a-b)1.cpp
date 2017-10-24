#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,a[100005],sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=(2*i+1-n)*a[i];
        }
        cout<<abs(sum)<<"\n";
    }
    return 0;
}
