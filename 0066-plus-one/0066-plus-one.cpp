class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(auto itr=digits.end()-1;itr>=digits.begin();itr--){
            if(*itr==9){
                *itr =0;
            }else{
                *itr = *itr+1;;
                return digits;
            }
        }
         vector<int> vec1=digits;
         vec1.resize(digits.size()+1);
        vec1[0]=1;
        return vec1;

        
    }
};