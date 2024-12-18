#include<iostream>
#include<unordered_set> 
using namespace std;

int main(){
    string s;
    cin>> s;

    unordered_set<char> st;

    for(int i = 0; i < s.length(); i++){
        st.insert(s[i]);
    }

    cout << (st.size() % 2 != 0 ? "IGNORE HIM!" : "CHAT WITH HER!");
    return 0;
}