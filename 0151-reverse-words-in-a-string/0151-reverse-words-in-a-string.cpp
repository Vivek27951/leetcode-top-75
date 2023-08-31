class Solution {
    
private:
    void reverse(string& s,int start,int end){
        while(start<end){
            swap(s[start],s[end]);
            start++;end--;
        }
    }
    
public:
    string reverseWords(string s) {
        int start = 0;
        int n = s.size();
        reverse(s,0,n-1);
        for(int end=0;end<n;end++){
            if(s[end]==' '){
                reverse(s,start,end-1);
                start = end+1;
            }
        }
        
        reverse(s, start, n - 1);
        string res = "";
        bool flag = false;
        for(int i=0;i<s.size();i++){
            int j = i;
            while(j<s.size() && s[j]!=' ')j++;
            if(i!=j){
                if(flag) res+=" ";
                res+=s.substr(i,j-i);
                flag = true;
            } 
            i=j;
        }
        return res;
    }
};