function twoSum(nums: number[], target: number): number[] {
    for(let i=0; i < nums.length; i++) {
        for(let x=0; x < nums.length; x++) {
            if ((nums[i] + nums[x]) == target) {
                if (i != x) {
                return [i, x];
                }
            }
        }
    }    
};
