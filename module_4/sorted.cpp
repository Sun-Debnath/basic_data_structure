#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0; j<n; j++){
            cin>>arr[j];
        }
        int temp = 1;
        for(int j=0,k=j+1; j<n-1; j++,k++){
            if( arr[j] > arr[k]){
                temp =0;
                break;
            }
        }
        // for(int j=0; j<n-1; i++){
        //     for(int j=i+1; j<n; j++){
        //         if( arr[j] > arr[
        //     }
        // }
        if(temp == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}