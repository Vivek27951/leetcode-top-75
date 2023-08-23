class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0) return true;
        int l = flowerbed.size();
        for(int i=0;i<l;i++){
            if(flowerbed[i]==0 && (i-1>=0 && flowerbed[i-1]==0) && (i+1<l && flowerbed[i+1]==0)){
                n--;
                i++;
            }
            else if(i==0 && flowerbed[i]==0 && i+1<l && flowerbed[i+1]==0){
                n--;
                i++;
            }
            else if (i==l-1 && flowerbed[i]==0 && (i-1>=0 && flowerbed[i-1]==0)){
                n--;
                i++;
            }
            else if(l==1 && flowerbed[i]==0){
                n--;
                i++;
            }
            if(n==0) break;
        }
        return n==0;
    }
};