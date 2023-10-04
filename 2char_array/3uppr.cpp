#include <bits/stdc++.h>
using namespace std;

int main() {
    char name[100];
    cin.getline(name, 100);
    int p=strlen(name);
    for(int i=0;i<p;i++){
        // if(name[i]>='a' && name[i]<='z'){
        //   name[i]=name[i];
        // }
        // else{ 
        //     name[i]=name[i]-'A'+'a'; //for lower 
        // }
        if(name[i]>='A' && name[i]<='Z'){
            name[i]=name[i];
        }
        else{
        name[i]=name[i]-'a'+'A'; //for uppr
        }
    }
    cout<<name;
    return 0;
}
