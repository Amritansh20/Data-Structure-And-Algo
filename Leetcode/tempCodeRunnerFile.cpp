  for(int i=nums.size()-2;i>=0;i--){
        suffix.push_back(max(nums[i],suffix[i+1]));
    }