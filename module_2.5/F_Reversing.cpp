#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0,j=n-1; i<n/2; i++,j--){
        swap(v[i],v[j]);
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}