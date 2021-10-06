#include<iostream>
#include<vector>
#include"stdc++.h"
#define MOD 1000000007
using namespace std;

/*
10 10 30 20 
22 33 22 33 110 
105 105 
205 
1090 8050 168 
112 112 
240 

1 2 3 1 2 3 1 2 3 1 2 3 1 2 3 1 2 3
case 1
a==b -> a%n = ans
case 2 
a-b < n 
case 2a
Both a and b are in same array
case 2b
Both a and b are in different array
case 3
a-b >= n
case 3a
a-b = n and make an array
case 3b
a is partial array b is partial array range between are complete arrays
case 3c
a-b = n and do not for a complete array
*/


vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long> > &queries, int q) {
    // Write your code here
    vector <int> ans;
    long int arr_sum = accumulate(arr.begin(), arr.end(), 0);
    for (int i = 0; i < queries.size(); i++){
        long long l, r;
        l = queries[i][0]-1;
        r = queries[i][1];
        int sum = 0;

        long long itr = l;

        while (itr < r){
            if(itr+n < r){
                sum = (sum + arr_sum)%MOD;
                itr = itr + n;
            }
            else{
                sum = (sum + arr[itr%n])%MOD;
                itr++;
            }
            
        }
        ans.push_back(sum);
    }
    return ans; 
}

int main(){
    int t;
    cin>>t;

    vector <int> arr;
    vector <vector <long long> > queries;
    for(int i = 0; i <t; i++){
        int n;
        cin>>n;
        for(int j = 0; j < n; j++){
            int num;
            cin>>num;
            arr.push_back(num);
        }

        int q;
        cin>>q;
        for (int k = 0; k < q; k++){
            vector <long long> temp;
            long long num1, num2;
            cin>>num1>>num2;
            temp.push_back(num1);
            temp.push_back(num2);
            queries.push_back(temp);
        }
        vector <int> ans = sumInRanges(arr, n, queries, q);
        for (int l=0; l < ans.size(); l++){
            cout<<ans[l]<<" ";
        }
        cout<<endl;
    }
}

/*
12 14 53 12 14 53 12 14 53 12
*/