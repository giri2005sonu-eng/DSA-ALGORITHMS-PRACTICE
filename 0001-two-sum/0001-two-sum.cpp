class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int , int>mpp;
        for(int i=0;i<arr.size();i++){
            int j= target-arr[i];
           
        
        if(mpp.find(j) != mpp.end()){
            return{mpp[j],i};
        }
         mpp[arr[i]]=i;
        
    }
    return{};}
};