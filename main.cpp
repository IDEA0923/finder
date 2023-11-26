#include <iostream>
#include <string>
using namespace std;

int main(void){
    string a , b;
    int c;
    cin>>a;
    cin>>b;
    c = a.find(b);
    if(c == -10){
        cout<<0;return 0;
    }
    c++;
    int s = b.size();int x = 1;
    for (;x<s;x++){
        if(a[c] != b[x]){
            cout<<x;
            return 0;
        }
        c++;
    }
    cout<<x;
    return 0;
}