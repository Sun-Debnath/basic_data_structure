#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    queue<int> q;
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    int flag = 1;
    if(n!=m){
        flag = 0;
    }
    else{
        while(!s.empty()){
            if(s.top() != q.front()){
                flag = 0;
                break;
            }
            s.pop();
            q.pop();
        }
    }
    (flag == 1)?cout<<"YES":cout<<"NO";
    return 0;
}