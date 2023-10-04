#include <bits/stdc++.h>
using namespace std;

int main() {
    char name[100];
    cin.getline(name, 100);
    int s = 0;
    int e = strlen(name) - 1;

    while (s <= e) {
        if (name[s] != name[e]) {
            cout << "not";
            return 0;
        } else {
            s++;
            e--;
        }
    }

    cout << "Palindrome";
    return 0;
}
