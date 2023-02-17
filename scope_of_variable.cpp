#include<iostream>
using namespace std;
int glo = 6; //definition of global variable
void sum(){
    cout<<glo<<endl;
}
int main(){
    int glo = 9; //definition of local variable
    glo = 89;    //updatation of local variable
    sum();       //will print global variable
    cout<<glo;   //will print local variable
    return 0;
}