/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDisappearedNumbers = function(nums) 
{
    let x = [];
    let y = [];
    for(let i in nums)
        x.push(nums[i]);
    for(let i=0;i<nums.length;i++)
        {
            if(x.indexOf(i+1) == -1) 
                y.push(i+1);
        }
        return y;
            
    
};