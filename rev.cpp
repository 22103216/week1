#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter string: " << endl;
    cin >> s;
    cout<<"Reversed string: "<<endl;
    for (int i = s.length() - 1; i >= 0; i--) {
	cout << s[i];
    }
}
