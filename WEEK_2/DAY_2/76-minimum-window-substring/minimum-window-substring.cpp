class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        int total=t.size();
        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }
        int st=0,end=0,ans=INT_MAX,idx=-1;
        while(end<s.size()){
            mp[s[end]]--;
            if(mp[s[end]]>=0)
            total--;
            while(!total&&st<=end){
                if(ans>end-st+1){
                    ans=end-st+1;
                    idx=st;
                }
                mp[s[st]]++;
                if(mp[s[st]]>0) total++;
                st++;
            }
            end++;
        }
        if(idx==-1) return "";
        string str="";
        for(int i=idx;i<idx+ans;i++){
            str+=s[i];
        }
        return str;
    }
};