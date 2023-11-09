#include<bits/stdc++.h>
using namespace std;
int main(){
    // first half
    int row = 5;
    for(int i=1;i<=row;i++){
        // for spaces 
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"2";
            }
        }
        cout<<endl;
    }
}