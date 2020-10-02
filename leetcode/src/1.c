
/**
 * @file
 * @brief Leetcode problem #1
 * @details
 * This is a working solution for the "Two Sum" problem
 * Runtime: 80ms, memory: N/A, outperforms 82.00% of C submissions.
 * @author [Gabriele Bruno Franco](https://github.com/gbrunofranco)
 */

#include "assert.h"
#include "stdlib.h"
/**
 * Function documentation
 * @param nums array of integers, we iterate on it to find two integers a1, a2
 * @param numsSize length of nums
 * @param target we want the result of a1 + a2 to be this integer
 * @returns 'r' array of the indexes of a1 and a2 in nums
 * @returns -1 if there's no solution, it is assumed that there's always exactly
 * one solution
 */
int* twoSum(int* nums, int numsSize, int target)
{
    int* r = malloc(sizeof(int) * 2);
    for (int i = 0; i < numsSize - 1; ++i)
        for (int j = i + 1; j < numsSize; ++j)
            if (nums[i] + nums[j] == target)
            {
                r[0] = i;
                r[1] = j;
                return r;
            }
    return -1;
}

/**
 * @brief Test function
 * @returns void
 */
static void test()
{
    /* First leetcode example */
    assert(twoSum([ 2, 7, 11, 15 ], 4, 9), [ 0, 1 ]);
    /* Second leetcode example */
    assert(twoSum([ 3, 2, 4 ], 3, 6), [ 1, 2 ]);
    /* Third leetcode example */
    assert(twoSum([ 3, 3 ], 2, 6), [ 0, 1 ]);
}

/**
 * @brief Main function
 * @returns 0 on exit
 */
int main()
{
    test();
    return 0;
}
