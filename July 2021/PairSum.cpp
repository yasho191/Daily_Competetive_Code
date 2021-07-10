#include"stdc++.h"
#include<vector>
#include<iostream>

using namespace std;

vector<vector<int> > pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector<int> > ans;
   
    for (int i = 0; i < arr.size(); i++){
        int x = s - arr[i];
        vector<int>::iterator it;
        it = find(arr.begin()+i+1, arr.end(), x);
        if(it != arr.end()){
            int counter = 0;
            for(int j = it - arr.begin(); j < arr.size(); j++){
                if(arr[j] == x)
                    counter++;
            }
            for(int j = 0; j < counter; j++){
                vector<int> pair;
                if(arr[i] > x){
                    pair.push_back(x);
                    pair.push_back(arr[i]);
                }
                else{
                    pair.push_back(arr[i]);
                	pair.push_back(x);
                }
                ans.push_back(pair);
            } 
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    int n, s, input;
    vector<int> v;
    cin>>n>>s;
    for (int i = 0; i < n; i++){
        cin>>input;
        v.push_back(input);
    }

    vector<vector<int> > ans = pairSum(v, s);
    cout<<ans.size()<<endl;
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i][0]<<", "<<ans[i][1]<<endl;
    }
    return 0;
}