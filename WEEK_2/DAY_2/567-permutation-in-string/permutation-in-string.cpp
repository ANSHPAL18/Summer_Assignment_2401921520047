class Solution {
public:
bool isfreqsame(vector<int>&freq1,vector<int>&windfreq){
    for(int i=0;i<26;i++){
    if(freq1[i]!=windfreq[i]){
        return false;
    }
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return 0;
        vector<int>freq1(26,0);
        for(int i=0;i<s1.size();i++){
            freq1[s1[i]-'a']++;
        }
        int windowsize=s1.length();
        for(int i=0;i<s2.length();i++){
            int winidx=0,idx=i;
            vector<int>windfreq(26,0);
            while(winidx<windowsize&&idx<s2.length()){
                windfreq[s2[idx]-'a']++;
                winidx++,idx++;
            }
            if(isfreqsame(freq1,windfreq)) return true;
        }
        return false;
    }
};