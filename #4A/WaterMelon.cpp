#include<iostream>
using namespace std;

int main(){
    int i_ ;
    cin >>i_ ;

    if(i_ == 2){
        cout<< "NO";
    }else{
        cout << (i_ % 2 == 0 ? "YES" : "NO");
    }
    
    return 0;
}