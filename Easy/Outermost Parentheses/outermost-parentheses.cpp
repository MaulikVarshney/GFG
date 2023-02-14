//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        string m;
        int cnt=0;
        for(auto i:s){
            if(i == '(' && cnt++>0){
                m+=i;
            }
            if(i == ')' && cnt-->1){
                m+=i;
            }
        }
        return m;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends