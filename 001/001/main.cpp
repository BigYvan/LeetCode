//
//  main.cpp
//  001
//
//  Created by Bigyvan on 2018/4/24.
//  Copyright © 2018年 Bigyvan. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v(2);
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    v[0] = i;
                    v[1] = j;
                    return v;
                }
            }
        }
    }
};
