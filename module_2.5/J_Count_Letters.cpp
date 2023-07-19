#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s;
    // cin>>s;
    vector<string> v(1);
    cin>>v[0];
    vector<int> cnt(26,0);
    
    // v.push_back(s);
    // for(int i=0; i<v.size(); i++){
    //     cin>>v[i];
    // }
    for(int i=0; i<v[0].size(); i++){
       int vul = v[0].at(i) - 'a';
       cnt[vul]++;
    }
    for(int i=0; i<26; i++){
        if(cnt[i] != 0){
            cout<<char(i+'a')<<" : "<<cnt[i]<<endl;
        }
        
    }
    

    return 0;
}