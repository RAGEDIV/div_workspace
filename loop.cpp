#include<iostream>
using namespace std;
int main(){
    int i;
    int j;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            cout<<j<<' ';
        }
        cout<<endl;
    }
    return 0;
}