class Solution {
public:
    void merge(vector<pair<int,int>> &arr , vector<int> &count , int l , int mid , int r)
    {
        int i=l ;
        int j=mid+1;
        vector<pair<int,int>> temp(r-l+1);
        int k=0;
        while(i<=mid && j<=r)
        {
            if(arr[i].first>arr[j].first)
            {
                temp[k++]=arr[i];
                count[arr[i].second]+=(r-j+1);
                i++;
            }
            else
            {
                temp[k++]=arr[j];
                j++;
            }
        }
        while(i<=mid)
        {
           temp[k++]=arr[i];
            i++;
        }
        while(j<=r)
        {
            temp[k++]=arr[j];
            j++;
        }
        
        for(int i=l;i<=r;i++)
            arr[i]=temp[i-l];
        return;
    }
    void mergesort(vector<pair<int,int>> &arr , vector<int> &count , int l , int r )
    {
        if(l>=r)
            return;
        int mid=(l+r)/2;
        mergesort(arr , count , l , mid);
        mergesort(arr , count , mid+1 , r);
        merge(arr , count , l , mid , r);
    }
     vector<int> countSmaller(vector<int>& nums) 
     {
        vector<int> count(nums.size() , 0);
        vector<pair<int,int>> arr(nums.size());
        for(int i=0;i<nums.size();i++)
            arr[i]={nums[i] , i};
       mergesort(arr , count , 0 , nums.size()-1);
        return count;
    }
};