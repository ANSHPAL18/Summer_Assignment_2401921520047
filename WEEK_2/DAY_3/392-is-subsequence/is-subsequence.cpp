class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.length();
        int n=t.length();
        int i=0,j=0;
        while(i<m&&j<n){
            if(t[j]==s[i]){
                i++;
            }
            j++;
        }
        if(i==s.length()) return true;
        return false;
    }
};