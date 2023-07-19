#include<bits/stdc++.h>
using namespace std;
void fun(int &a)
{
    a=20;
    cout<<&a<<endl;
    cout<<a<<endl;
}
int main()
{
    int a=10;
    fun(a);
    cout<<"from main"<<endl;
    cout<<&a<<endl;
    cout<<a;
    return 0;
}