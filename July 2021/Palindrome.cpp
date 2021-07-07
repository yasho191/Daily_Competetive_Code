#include<iostream>
#include<string>
#include"stdc++.h"
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        
        long long int rev_x = 0;
        int i = x;
        while(i){
            rev_x = rev_x*10 + i%10;
            i = i/10;
        }
        return(x==rev_x);
    }
};

int main(){
    Solution obj;
    int n;
    cin>>n;
    cout<<obj.isPalindrome(n);
}

