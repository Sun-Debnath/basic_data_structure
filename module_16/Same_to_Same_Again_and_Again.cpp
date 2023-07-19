#include<bits/stdc++.h>
using namespace std;
int main()
{
     list<int> l1,l2;
    queue<int> q;
    stack<int> s;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    while(!s.empty()){
        l1.push_back(s.top());
        s.pop();
    }
     while(!q.empty()){
        l2.push_back(q.front());
        q.pop();
    }
    (l1 == l2)?cout<<"YES":cout<<"NO";
    return 0;
}