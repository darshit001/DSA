#include<bits/stdc++.h>
using namespace std;

int main(){
    char name[100];
    cin.getline(name,50);
    int i=0;
    int p=strlen(name);
    for(int i=0;i<p;i++){
        if(name[i]== ' '){
            name[i]='@';
        }
    }
    cout<<name<<endl;

}