​Since Unordered sets do not allow duplicates , in every iteration of the for loop we check if we "succeed" to enter the nums[i] element to the set:

1)If we were able to insert the nums[i] element to the set, so nums[i] has not appeared before and the set size is equel to i+1(since nums is 0-indexed). In that case we will continue to examine the other nums values.

2)If we did not succeed to insert the nums[i] element , so nums[i] element already entered to the set and the size of the set is smaller from i+1. In that case we return true - there is a value that appears at least two times.

3)If we finished the for loop so each element in nums appears exactly once - We will return false.
