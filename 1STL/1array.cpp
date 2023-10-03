#include<bits/stdc++.h>

using namespace std;
int main(){
    array<int,4> a={1,2,3,4};
    int s=a.size();
    for(int i=0;i<s;i++){
        cout<<a[i]<<"";
    }
    cout<<a.at(2)<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    cout<<a.empty()<<endl;

}