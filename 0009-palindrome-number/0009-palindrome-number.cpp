class Solution {
public:
    bool isPalindrome(int  x) {
       unsigned int rev=0;
       int j=x;
        while( j>0){
            
            
            int last=j%10;
            j=j/10;
            rev=(rev*10)+last;
       
             
        }
             
        if(rev==x){
            return true;
        }
        return false;
     

    }
};