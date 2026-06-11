class Solution {
public:
    string decodeString(string s) {
         stack<int>count;
         stack<string>str;
         string curr="";
         int k=0;
         for(char c:s){
            if(isdigit(c)){
              k=k*10+(c-'0');
            }
            else if(c=='['){
                count.push(k);
                str.push(curr);
                k=0;
                curr="";
            }
            else if(c==']'){
                int rep=count.top();
                count.pop();
                string temp=curr;
                curr=str.top();
                str.pop();
                while(rep--){
                    curr+=temp;
                }
            }
            else{
                curr+=c;
            }
         }
         return curr;
    }
};