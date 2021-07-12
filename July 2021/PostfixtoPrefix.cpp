#include<iostream>
#include<stack>
#include "stdc++.h"
using namespace std;

string postfixToPrefix(string &s)
{
    // Write your code here.
    stack<string> st;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
            string a = st.top();
            st.pop();
            //cout<<a<<endl;
            string b = st.top();
            st.pop();
            //cout<<b<<endl;
            string c = (s[i] + b + a);
            st.push(c);
            //cout<<c<<endl;
        }
        else{
            st.push(string(1, s[i]));
        }
    }
    string final = st.top();
    //cout<<final;
    return final;
}

int main(){
    int t;
    string s;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>s;
        string ans = postfixToPrefix(s);
        cout<<ans<<endl;
    }
}