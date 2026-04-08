class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1) return 0;
        vector<bool> v(n, true);
        v[0] = false;
        v[1] = false;

        for(int i=2;i*i<n;i++){
            if(v[i]){
                for(int j=i*i;j<n;j+=i){
                    v[j]= false;
                }
            }
        }
        int res =0;
        for(auto i : v)
        {
            if(i) res++;
        }
        
        return res;
    }
};
