class Solution {
public:
    bool isPalindrome(string s) {
        if(s==" ") return true;
        for(int i=0;i<s.size();i++){
            if(s[i]>=65 && s[i]<=90) s[i]=s[i];
            else if(s[i]>=48 && s[i]<=57) s[i]=s[i];
            else if(s[i]>=97 && s[i]<=122) s[i]=s[i]-32;
            else{
                s.erase(i,1);
                i--;
            }
        }
        if(s=="") return true;
        if(s.size()==1) return true;
        else{
            for(int j=0;j<s.size()/2;j++){
                if(s[j]!=s[s.size()-j-1]) return false;
            }
            return true;
        }
    }
};
