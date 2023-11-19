#include<iostream>
#include<vector>
#include<map>
#include <unordered_map>

using namespace std;

class Solution{
    public:
        vector<int> twoSum(vector<int>& nums, int target)
        {
            //nums=[2,7,11,15],target=9,nums.size()=4
            unordered_map<int,int>mp;
            for(int i=0;i<nums.size();i++)//nums.size()=4
            {
                int t= target-nums[i];//t=7,2
                if(mp.find(t)!=mp.end())
                {
                    return {mp[t],i};
                }
                mp[nums[i]]=i;//mp={2:0;}
            }
            return {};
        }

};

int main()
{
    Solution solution;

    cout<<"enter the number of elements in the array";
    int n;
    cin>>n;

    vector<int> nums(n);

    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"element"<<i+1<<":";
        cin>>nums[i];
    }
    cout<<"enter the target sum:";
    int target;
    cin>>target;

    vector<int> result = solution.twoSum(nums,target);

    if(!result.empty())
    {
        cout<<"indices "<<result[0]<<" and "<<result[1]<<endl;
    }
    else{
        cout<<"none found";
    }

    return 0;
}