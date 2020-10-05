class Solution {
public:
    int bitwiseComplement(int N) {
      if(N==0)
          return 1;
      if(N==1)
          return 0;
        int n =  0 ;
        int temp = N;
        while(N>0){
            n++;
            N = N/2;
        }
         n  =  (int)pow(2,n)-1;
        
        return n-temp;
    }
};
