#include <unordered_map>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
int main(){
    vector<int> nums;
}

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mymap;
        vector<int> res;
        for(int i =0;i<nums.size();i++){
            if(mymap.find(target-nums[i])!=mymap.end()){
                res.push_back(i);
                res.push_back(mymap[target-nums[i]]);
                return res;
            }
            mymap.insert({nums[i],i});
        }
        return res;
    }
};