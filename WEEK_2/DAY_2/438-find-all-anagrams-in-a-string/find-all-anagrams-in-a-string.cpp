class Solution {
public:
    bool frqsame(vector<int>&scount,vector<int>&pcount){
        for(int i=0;i<26;i++){
            if(scount[i]!=pcount[i]) return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int>pcount(26,0);
        vector<int>scount(26,0);
        vector<int>ans;
        for(int i=0;i<p.size();i++){
            pcount[p[i]-'a']++;
        }
        int pl=p.size();
        for(int i=0;i<s.size();i++){
            scount[s[i]-'a']++;
            if(i>pl-1){
                scount[s[i-pl]-'a']--;
            }
            if(frqsame(scount,pcount)) ans.push_back(i-pl+1);
        }
        return ans;
    }
};