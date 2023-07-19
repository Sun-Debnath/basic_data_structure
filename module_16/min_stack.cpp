#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s1,s2;
    int n;
    cin>>n;
    int mn= INT_MAX;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s1.push(x);
    }
    while(!s1.empty()){
        s2.push(s1.top());
        if(s1.top() <= mn){
            mn = s1.top();
        }
        s1.pop();
    }
    while(!s2.empty()){
        s1.push(s2.top());
        s2.pop();
    }
    cout<<mn;
    return 0;
}