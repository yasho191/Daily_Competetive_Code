// Time Complexity O(n)
#include<iostream>
#include<vector>
#include<stack>

using namespace std;

vector<int> bracketNumber(string &S)
{
    //Stack.
    vector <int> v;
    stack <int> st1;
    int counter = 0;
    
    for (int i = 0; i < S.length(); i++){
        if (S[i] == '('){
            counter++;
            st1.push(counter);
            v.push_back(counter);
        }
        else if(S[i] == ')'){
            int t = st1.top();
            st1.pop();
            v.push_back(t);
        }
    }
    return v;
}

int main(){
    int t;
    string S;
    cin>>t;
    for (int i = 0; i < t; i++){
        cin>>S;
        vector <int> ans = bracketNumber(S);
        for (int j = 0; j < ans.size(); j++){
            cout<<ans[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}