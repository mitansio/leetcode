class Solution {
public:
    bool judgeSquareSum(int c) {
        int a;
        
            for( a=0;a<=sqrt(c);a++){
                
                double b=sqrt(c-pow(a,2));
                if(b-int(b)==0.00){
                    return true;
                
                }
            }
        return false;
        
        
    }
};