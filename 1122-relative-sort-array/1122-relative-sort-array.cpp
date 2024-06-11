class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp;
        vector<int>answer;
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<arr1.size();j++){
                if(arr2[i]==arr1[j]){
                    mp[arr2[i]]++;
                    arr1[j]=-1;
                }
            }
        }
        // sort(arr1.begin(),arr1.end());
        for(int i=0;i< arr2.size();i++){
            if(mp[arr2[i]]){
                for(int j=0;j<mp[arr2[i]];j++){
                    answer.push_back(arr2[i]);
                }
            }
        }
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<arr1.size();i++){
            if(arr1[i]!=-1){
                answer.push_back(arr1[i]);
            }
        }
        return answer;
        
        

        
        
    }
};