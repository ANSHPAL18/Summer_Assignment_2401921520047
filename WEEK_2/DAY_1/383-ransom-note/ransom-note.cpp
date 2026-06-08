class Solution {
public:
    bool canConstruct(string ransomnote, string magzine) {
        if(ransomnote.size()>magzine.size()) return 0;
        unordered_map<char,int>mp;
        for(int i=0;i<ransomnote.size();i++){
            mp[ransomnote[i]]++;
        }
        for(int i=0;i<magzine.size();i++){
            if(mp.find(magzine[i])!=mp.end()){
                mp[magzine[i]]--;
                if(mp[magzine[i]]==0) mp.erase(magzine[i]);
            }
        }
        return mp.empty();
    }
};