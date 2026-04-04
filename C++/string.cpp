#include<iostream>
#include<string>
#include<cctype>
using namespace std;
 
int main() {
    string st;
    getline(cin, st);
    for (char &c : st) {
         c = toupper(c);
    }
   cout << st << endl;
    return 0;
}