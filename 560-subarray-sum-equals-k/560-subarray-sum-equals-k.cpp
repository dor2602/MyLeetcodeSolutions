class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        unordered_map<int,int>myMap;
        myMap[0] = 1;
        int sum=0;
        int count=0;
        for(int i=0; i<arr.size(); i++)
        {
            sum+=arr[i];
            int search = sum - k;
            if(myMap.find(search) != myMap.end())
                count+=myMap[search];
             myMap[sum]++;
        }
        return count;
    }
};