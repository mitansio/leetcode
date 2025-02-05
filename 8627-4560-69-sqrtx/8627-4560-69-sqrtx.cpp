class Solution {
public:
    int mySqrt(int x) {
        if(x<0){
            cout<<"you can't calculate the squreroot of negative"<<endl;
        }
        return sqrt(x);
    }
};