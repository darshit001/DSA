#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_front(3);
    l.erase(l.begin());
     for(int i:l){
        cout<<i<<" ";
    }
}