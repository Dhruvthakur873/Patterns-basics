#include<bits/stdc++.h>
using namespace std;
int main(){
    // first half
    int row = 5;
    for(int i=1;i<=row;i++){
        // for spaces 
        for(int k =1;k<=(row-i);k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<(char)(j+64);
        }
        for(int j=i;j>1;j--){
            cout<<(char)(j+63);
        }
        cout<<endl;
    }
}