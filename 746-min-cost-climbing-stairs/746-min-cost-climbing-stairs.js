/**
 * @param {number[]} cost
 * @return {number}
 */
var minCostClimbingStairs = function(cost) 
{
    let array = cost.slice(0,2);
    for(let i=2; i<cost.length; i++)
        {
            [array[0],array[1]] = [array[1],array[0]];
            array[1] = Math.min(array[0],array[1])+cost[i];
        }
    return array[0]>array[1]? array[1]:array[0];
};