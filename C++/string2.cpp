#include<iostream>
#include<string>
using namespace std;

int check(string st) {
    int tong=0;    
    for (int i = 0; i < st.size(); i++) {
       
        if (st[i] == '0' || st[i] == '1' || st[i] == '2' || st[i] == '3' || st[i] == '4' || st[i] == '5' || st[i] == '6' || st[i] == '7' || st[i] == '8' || st[i] == '9') {
                tong += (st[i] - '0');
        }
    }
    return tong;
}
int main () {
    string st;
    getline(cin, st);
    cout << check(st) << endl;
    return 0;
}