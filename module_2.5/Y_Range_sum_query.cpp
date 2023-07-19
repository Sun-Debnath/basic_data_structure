#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    for(int i=0; i<q; i++){
        int l,r;
        cin>>l>>r;
        long long int sum=0;
        for(auto i=v.begin()+(l-1); i<v.begin()+r; i++){
            // cout<<*i<<" ";
            sum = sum+ *i;
        }
        cout<<sum<<endl;
    }

    return 0;
}