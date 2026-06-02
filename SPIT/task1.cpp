#include <bits/stdc++.h>
using namespace std;
int main()
{
    string X,Y;
    cin>>X>>Y;
    if(Y.length()!=X.length())cout<<"Wrong!";
    else{
        int dem[256] = {0};
        for(char c : X)dem[c]++;
        for(char c : Y)dem[c]--;
        for(int i=0;i<256;i++){
            if(dem[i]!=0)cout<<"Wrong!";
            return 0
        }
    }
    else cout<<"Correct!";
    return 0;
}