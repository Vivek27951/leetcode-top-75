class Solution {
    static bool comp(const vector<int>& a,const vector<int>& b){
        return a[1]<b[1];
    }
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        int end = INT_MIN;
        int count = 0;
        for(int i=0;i<intervals.size();i++){
            if(intervals[i][0]>=end)
                end = intervals[i][1];
            else
                count++;
        }
        return count;
    }
};