/**
 * @param {string} s
 * @param {string} goal
 * @return {boolean}
 */
var rotateString = function(s, goal) 
{
    if(s.length != goal.length)
        return false;
    for(let i in s)
        {
            if(s.slice(i) == goal)
                return true;
            s+=s[i];
           // s=s.substr(1);
        }
    return false;
};