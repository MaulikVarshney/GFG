//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:

    string solve(string s) {
        int n = s.length(), i = 0;
        if(n == 0 || n == 1) return s;
        while(i < n-1) {
            char temp = s[i];
            int j = i;
            while(temp == s[j+1] && j < n-1) {
                s[j++] = '*';
                s[j] = '*';
            }
            i = j+1;
        }
        string res = "";
        for(int i=0; i<n; i++) {
            if(s[i] != '*') res += s[i];
        }
        if(res == s) return res;
        else return solve(res);
    }
    
    string rremove(string s){
        // code here
        string ans = solve(s);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}
// } Driver Code Ends