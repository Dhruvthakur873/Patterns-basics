#include<bits/stdc++.h>
using namespace std;
int main(){
    // first half
    int row = 5;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<(char)(j+64);
        }cout<<endl;
    }
}