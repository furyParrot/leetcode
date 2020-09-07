#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;
int main(){
    return 0;
}

class Solution {
public:
    static bool cmp(pair<int, int>& m, pair<int, int>& n) {
        return m.second > n.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> occurrences;
        for (auto& v : nums) {
            occurrences[v]++;
        }
        
    }
};