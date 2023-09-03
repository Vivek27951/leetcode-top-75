class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>r;
        queue<int>d;
        int n = senate.size();
        for(int i=0;i<n;i++){
            if(senate[i]=='R') r.push(i);
            else d.push(i);
        }
        while(!r.empty() && !d.empty()){
            int a = r.front(); r.pop();
            int b = d.front(); d.pop();
            if(a<b) r.push(a+n);
            else d.push(b+n);
        }
        return r.empty()?"Dire":"Radiant";
    }
};
