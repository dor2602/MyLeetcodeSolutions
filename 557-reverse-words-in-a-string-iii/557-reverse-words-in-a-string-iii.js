/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) 
{
    let word =""; 
    s=s.split(" ");
    for(let i in s)
        word += s[i].split("").reverse().join("") + " ";
    return word.trim();
};