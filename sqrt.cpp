class Solution {
public:
    int mySqrt(int x) {
        int s=0, e=x;
        while(s<=e){
        long long m = (s+e)/2;
         
            if(m*m==x){
                return m;
            }
            else if(m*m<x){
                s=m+1;
            }else{
                e=m-1;
            }
        }
        return e; 
    }
};