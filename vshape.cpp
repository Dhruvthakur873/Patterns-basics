#include<bits/stdc++.h>
using namespace std;
int main(){
    // first half
    int row = 4;
    for(int i=1;i<=row;i++){
        // for first half stars 
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        // for spaces
        for(int k=1;k<=((2*row)-(2*i));k++){
            cout<<" ";
        }
        // for next stars
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}