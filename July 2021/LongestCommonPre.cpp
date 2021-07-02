#include<queue>
#include<iostream>

using namespace std;

int minimumRequiredShifts(string a, string b){
	// Write your code here.
    vector<char> q;
    int max = -1;
    int index = -1;
    
    for (int i = 0; i < b.length(); i++){
        q.push_back(b[i]);
    }
    
    for (int i = 0; i < b.length(); i++){
        int pre_len = 0;
        int x, y;
        x = y = 0;
        while(a[x] == q[y] && x < a.length() && y < q.size()){
            pre_len++;
            x++;
            y++;
        }
        if (max < pre_len){
            max = pre_len;
            index = i;
        }

        char s = q[0];
        q.erase(q.begin());
        q.push_back(s);
    }
    return index;
}

int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        string a, b;
        int rotations = minimumRequiredShifts(a, b);
        cout<<rotations<<endl;
    }
}