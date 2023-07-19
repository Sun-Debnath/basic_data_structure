#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        stack<char> s;
        stack<char> s1;
        for(int j=0; j<n; j++){
            char x;
            cin>>x;
            if(s.empty()){
                s.push(x);
            }
            else{
                if((x == 'R' && s.top()=='B') || (x == 'B' && s.top()=='R')){
                    s.pop();
                    if(!s.empty()){
                        if(s.top()=='P'){
                            s.pop();
                        }
                        else{
                            s.push('P');
                        }
                    
                    }
                    else{
                        s.push('P');
                    }
                }
                else if((x == 'R' && s.top()=='G') || (x == 'G' && s.top()=='R')){
                    s.pop();
                    if(!s.empty()){
                        if(s.top()=='Y'){
                            s.pop();
                        }
                        else{
                            s.push('Y');
                        }
                    
                    }
                    else{
                        s.push('Y');
                    }
                }
                else if((x == 'B' && s.top()=='G') || (x == 'G' && s.top()=='B')){
                    s.pop();
                    if(!s.empty()){
                        if(s.top()=='C'){
                            s.pop();
                        }
                        else{
                            s.push('C');
                        }
                    
                    }
                    else{
                        s.push('C');
                    }
                }
                else if(x == 'R' && s.top()=='R'){
                    s.pop();
                }
                else if(x == 'B' && s.top()=='B'){
                    s.pop();
                }
                else if(x == 'G' && s.top()=='G'){
                    s.pop();
                }
                else{
                    s.push(x);
                }
            }
            
        
        
        
        }
        while(!s.empty()){
            s1.push(s.top());
                s.pop();
            }
            while(!s1.empty()){
                cout<<s1.top();
                s1.pop();
            }
        cout<<endl;
    }
    
    return 0;
}