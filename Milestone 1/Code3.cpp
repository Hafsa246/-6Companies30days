// 3. Count the subarrays having product less than k

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long product = 1;
        int ans = 0, j = 0;
        for(int i = 0; i < n; i++){
            product *= a[i];
            if(product < k){
                ans += (i-j+1);
                continue;
            }
            
            while(j < n && product >= k){
                product /= a[j++];
            }
            if(product < k){
                ans += (i-j+1);
            }
        }
        return ans;
    
    }
};