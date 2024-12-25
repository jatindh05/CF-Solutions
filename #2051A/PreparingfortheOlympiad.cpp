#include<iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }

        for(int i = 0 ; i < n ; i++){
            cin >> b[i];
        }
        int ans = a[n - 1];
        for(int i = n - 2; i >=0 ; i--){
            int term = a[i] - b[i + 1];
            if(term > 0){
                ans += term;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}