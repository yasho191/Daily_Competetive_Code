#include<iostream>
using namespace std;

long getMaximumProfit(long *values, int n)
{
    //Write your code here
    long int max = 0;
    for(int i = 0; i < n-1; i++){
        if(values[i] < values[i+1])
            max = max + values[i+1] - values[i];
    }
    return max;
}

int main(){
    int t, n;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n;
        long val[n];
        for(int j = 0; j < n; j++){
            cin>>val[j];
        }
        long ans = getMaximumProfit(val, n);
        cout<<ans;
    }
    return 0;
}