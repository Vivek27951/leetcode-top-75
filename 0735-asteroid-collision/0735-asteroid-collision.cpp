class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        vector<int> res;
        for(auto& num : asteroids){
            bool flag = false;
            if(num<0 && !res.empty()){
                while(!res.empty() && res.back()>0 && res.back()<=abs(num)){
                    if(res.back()==abs(num)){
                        flag = true;
                        res.pop_back();
                        break;
                    }
                    res.pop_back();
                } 
                if(!res.empty() && res.back()<0 && !flag) res.push_back(num);
                if(res.empty() && !flag) res.push_back(num);
            }else
                res.push_back(num);
        }
        return res;
    }
};

