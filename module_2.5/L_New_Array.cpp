#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> a(n);
    vector <int> b(n);
    vector <int> c;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    c = b;
    // for(int i=0; i<n; i++){
    //     c.push_back(a[i]);
    // }
    c.insert(c.end(), a.begin(), a.end());
    for(int i=0; i<2*n; i++){
        if(i == (2*n)-1){
            cout<<c[i];
        }
        else{
            cout<<c[i]<<" ";
        }
        
    }
    return 0;
}