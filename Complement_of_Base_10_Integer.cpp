class Solution {
public:
    int bitwiseComplement(int n) {

        int m=n;   // store 
        int mask=0;
        if(n==0){
            return 1;    // edge case agr n=0 return 1
        }
        while(m!=0){
            mask=(mask << 1) | 1;      // left shift
            m=m>>1;     // right shift

        }
      int ans=(~n)&mask;      // not of n  which makes 0 as 1 and 1 as 0
      return ans;        
        
    }
};