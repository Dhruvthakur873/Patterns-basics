#include<bits/stdc++.h>
using namespace std;
int main(){
    // first half
    int row = 5;
    for(int i=1;i<=row;i++){
        // for spaces 
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=row-1;i>=1;i--){ 
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}