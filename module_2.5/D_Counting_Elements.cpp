#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<int>:: iterator it;
    int cnt=0;
    for(int i=0; i<n; i++){
        it = find(v.begin(), v.end(), (v[i]+1));
        if(it != v.end()){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}