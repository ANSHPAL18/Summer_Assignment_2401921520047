class Solution {
public:
    string reverseWords(string s) {
         int i=0,n=s.size();
         while(i<n){
            while(i<n&&s[i]==' '){
                i++;
            }
            int st=i;
            while(i<n&&s[i]!=' '){
                i++;
            }
            int end=i-1;
            while(st<end){
                swap(s[st],s[end]);
                st++,end--;
            }
         }
         return s;
    }
};