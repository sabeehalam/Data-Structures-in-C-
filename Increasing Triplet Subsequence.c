bool increasingTriplet(vector<int>& nums) {
        int vec_len = nums.size(); 
        int min1=nums[0], min2=nums[1];
        if(vec_len<3) {return false;}
        for(int i=2; i<vec_len;i++){
            if(min1>=min2){
                min1=min2;
                min2=nums[i];
            }
            else if(min1>=nums[i]){
                min1=nums[i];
            }
            else if(min2>=nums[i]){
                min2=nums[i];
            }
            else if(min1<min2 && min2<nums[i]){
                return true;
            }
        }
        return false;
    }