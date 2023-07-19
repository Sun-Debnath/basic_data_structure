#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<string> myList;
    string str;
    while(true){
        string str;
        cin >> str;
        if(str == "end") break;
        myList.push_back(str);
    }
    int q;
    cin>>q;
    list<string>::iterator it;
    for(int i=0; i<q; i++){
        string str;
        cin>>str;
        list<string>::iterator it2;
        if(str == "visit"){
            string str2;
            cin>>str2;
            it2 = find(myList.begin(), myList.end(), str2);
            if(it2 == myList.end()){
                cout<<"Not Available";
                cout<<endl;
            }
            else{
                cout<<*it2;
                cout<<endl;
                it = it2;
            }
        }
        else if (str == "next"){
            next(it,1);
            cout<<*it;
            // if(it == myList.end()){
            //     cout<<"Not Available";
            //     cout<<endl;
            // }
            // else{
            //     cout<<*it;
            //     cout<<endl;
            // }
        }
         else if (str == "prev"){
            next(it,-1);
            if(it == myList.end()){
                cout<<"Not Available";
                cout<<endl;
            }
            else{
                cout<<*it;
                cout<<endl;
            }
        }


    }
    return 0;
}