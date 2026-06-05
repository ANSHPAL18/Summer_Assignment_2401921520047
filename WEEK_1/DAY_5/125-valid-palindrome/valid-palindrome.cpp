class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int end=s.size()-1;
         while(l<end){
           while(l<end&&!isalnum(s[l])) l++;
           while(l<end&&!isalnum(s[end])) end--;
           if (tolower(s[l])!=tolower(s[end])) return false;
           l++;
           end--;
        }
        return true;
    }
};