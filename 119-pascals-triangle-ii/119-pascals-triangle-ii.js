/**
 * @param {number} rowIndex
 * @return {number[]}
 */
var getRow = function(rowIndex) {
    let array = [1];
    for(let i =0; i<rowIndex; i++)
        {
            let tmp = [];
            for(let j=0;j<=array.length;j++)
                {
                    
                    tmp[j] = array[j] + array[j-1];
                    if(j == array.length || j == 0)
                        tmp[j] = 1;
                }
            array = tmp;
        }
    return array;
};