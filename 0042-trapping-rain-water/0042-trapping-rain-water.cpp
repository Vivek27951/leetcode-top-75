class Solution {
public:
    int trap(vector<int>& hi) {
        int size = hi.size();
	vector<int> prefix(size);
	vector<int> suffix(size);
	
	// prefix & suffix
	prefix[0] = hi[0];
	suffix[size-1] = hi[size-1];
	for(int i=1;i<size;i++){
		prefix[i] = max(prefix[i-1],hi[i]);
		suffix[size-1-i] = max(suffix[size-i],hi[size-i-1]);
	}
	
	int answer = 0;
	for(int i=0;i<size;i++){
		answer += min(prefix[i],suffix[i]) - hi[i];
	}
	return answer;
    }
};