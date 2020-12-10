#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> nums;
    Solution(vector<int>& nums) {
        this->nums = nums;
    }

    int pick(int target) {

        int index = 0;
        int n = 0;
        for (int i = 0;i< nums.size();i++){
            if(nums[i]==target){
                n++;
                if(rand()%n==0) index=i;
            }
        }
        return index;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */


int main() {
    vector<int> nums = {1,2,3,3,3};
    Solution s = Solution(nums);
    int count[3] = {0};
    int index = 0;
    for (int i = 0; i < 1000; i++) {
        index = s.pick(3);
        switch (index){
            case 2: count[0]++;break;
            case 3: count[1]++;break;
            case 4: count[2]++;break;
        }
    }
    std::cout <<"2: "<<count[0] << std::endl;
    std::cout <<"3: "<<count[1] << std::endl;
    std::cout <<"4: "<<count[2] << std::endl;
    return 0;
}
