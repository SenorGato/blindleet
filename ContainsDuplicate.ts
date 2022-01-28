function containsDuplicate(nums: number[]): boolean {
    let uniqueItems = [...new Set(nums)];
    if (uniqueItems.length == nums.length) {
        return false;
    }
    return true;
};
