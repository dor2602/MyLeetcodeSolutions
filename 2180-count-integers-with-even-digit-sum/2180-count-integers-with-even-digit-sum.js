/**
 * @param {number} num
 * @return {number}
 */
var countEven = function(num) {
    let temp = num;
    let sum = 0;
    while(temp)
        {
            sum+=temp%10;
            temp = Math.floor(temp/10);
        }
    return sum%2 == 0? Math.floor(num/2):Math.ceil(num/2-1);
};