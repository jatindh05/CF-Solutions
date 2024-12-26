#include<iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n,a,b,c;
        cin>>n>>a>>b>>c;

        long long res = 3 * (n / (a + b + c));
        n %= (a + b + c);

        if(n > 0){
            n -= a;
            res++;
        }
        if(n > 0){
            n -=b;
            res++;
        }
        if(n > 0){
            n -= c;
            res++;
        }

        cout<<res<<endl;
    }
    return 0;
}