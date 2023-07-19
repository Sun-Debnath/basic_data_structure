#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x==0){
            string name;
            cin>>name;
            q.push(name);
        }
        else{
            if(!q.empty()){
                cout<<q.front()<<endl;
               q.pop();
            }
            else{
                cout<<"Invalid"<<endl;
            }
            
        }
    }
    return 0;
}