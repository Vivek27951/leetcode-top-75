class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int res = 0;
        vector<char> temp;
        for(int i=0;i<n;i++){
            int j = i;
            while(j<n && chars[j]==chars[i])j++;
            temp.push_back(chars[i]);
            res++;
            if(j-i>1){
                string l = to_string(j-i);
                res+=l.size();
                for(int k=0;k<l.size();k++)
                    temp.push_back(l[k]);
            }   
            i=j-1;
        }
        chars = temp;
        return res;
    }
};