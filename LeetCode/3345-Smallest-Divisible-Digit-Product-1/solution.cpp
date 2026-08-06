class Solution {
public:
    int smallestNumber(int n, int t) {
        int rem;
        int ans = 1;
        int m = n;
        while(m){
            rem = m%10;
            ans*=rem;
            m = m/10;


        }
        if(ans%t==0){
            return n;
        }
        return  smallestNumber(n+1, t);
    }
};