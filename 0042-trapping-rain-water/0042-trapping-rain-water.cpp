class Solution {
public:
    int trap(vector<int>& hi) {
        int size = hi.size();
	    int answer = 0;
        
        // if(size<2) return answer;
	
        int start = 0;
        int remove = 0;
        for(int end = 1;end<size;end++){
            if(hi[end]>=hi[start]){
                answer += hi[start]*(end-start-1);
                answer -= remove;
                start = end;
                remove = 0;
            }
            else
                remove+=hi[end];
        }

        start = size-1; 
        remove = 0;
        for(int end = size-2;end>=0;end--){
            if(hi[end]>hi[start]){
                answer += hi[start]*(start-end-1);
                answer -= remove;
                start = end;
                remove = 0;
            }
            else
                remove+=hi[end];
        }
        
        return answer;
    }
};