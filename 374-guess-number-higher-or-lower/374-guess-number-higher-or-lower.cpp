/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) 
    {
        if(n == 1)
            return 1;
        if(n == 2)
            return guess(1) == 0? 1:2;
        int low = 0;
        while(n>=low)
        {
            long long int mid = low+(n-low)/2;
            if(guess(mid)== -1)
                n = mid;
            else if(guess(mid) == 1)
                low = mid+1;
            else return mid;
        }
        return -1;    
        
    }
};