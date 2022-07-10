/**
 * @param {string} word
 * @param {character} ch
 * @return {string}
 */
var reversePrefix = function(word, ch) 
{ 
   // if(!word.indexOf(ch))
       // return word;
   return word.split("").slice(0,word.indexOf(ch)+1).reverse().join("")+word.slice(word.indexOf(ch)+1);
    
    
};