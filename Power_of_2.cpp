class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<=30;i++){    // rangr ko traverse kradiya
            int ans=pow(2,i);      // if hmara n equal haiii 2 ki power something ke 
            if(ans==n){
                return true;
            }
        }
        return false;
        
    }
};