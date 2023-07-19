#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        stack<char> s;
        string str;
        cin>>str;
        for(char c : str){
            if(s.empty()){
                s.push(c);
            }
            else{
                if(c == 'A' && s.top()=='B'){
                    s.pop();
                }
                else if(c == 'B' && s.top()=='A'){
                    s.pop();
                }
                else{
                    s.push(c);
                }

            }
        }
        if(s.empty()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}