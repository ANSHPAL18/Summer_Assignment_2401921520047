class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int m=s.size();
       for(int i=m/2;i>=1;i--){
          if(m%i==0){
            string substring=s.substr(0,i);
            string newsubstr="";
            for(int j=1;j<=m/i;j++){
                newsubstr+=substring;
            }
            if(s==newsubstr) return true;
          }
       }
       return false;      
    }
};