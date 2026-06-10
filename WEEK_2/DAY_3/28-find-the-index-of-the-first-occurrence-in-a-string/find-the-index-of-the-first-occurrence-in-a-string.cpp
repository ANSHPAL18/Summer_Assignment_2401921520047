class Solution {
public:
  void getLPSLength(vector<int> &lps,string &s) {
        int pre=0,suf=1;
        while(suf<s.size()){
            if(s[pre]==s[suf]){
                lps[suf]=pre+1;
                pre++,suf++;
            }
            else{
                if(pre==0){
                    lps[suf]=0;
                    suf++;
                }
                else{
                    pre=lps[pre-1];
                }
            }
        }      
    }
    
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        if(m==0) return 0;
        if(n<m) return -1;
        for(int i=0;i<n;i++){
            if(haystack[i]==needle[0]){
                if(haystack.substr(i,m)==needle){
                    return i;
                }
            }
        }
        return -1;
    }
};