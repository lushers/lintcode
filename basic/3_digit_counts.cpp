/***************************************************************************
 * 
 * Copyright (c) 2018 None.com, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file 3_digit_counts.cpp
 * @author lushers
 * @date 2018/04/16 19:07:32
 * @version $Revision$ 
 * @brief 
 *  
 **/
class Solution {
public:
    /*
     * @param : An integer
     * @param : An integer
     * @return: An integer denote the count of digit k in 1..n
     */
	// 这道题直接去想的话就是遍历每一个数，然后每个数在遍历每个数字
    int digitCounts(int k, int n) {
        // write your code here
        //先来个最蠢的，遍历，然后计算
        int count = 0;
        if (k>n) return count;
        if(k==n) return 1;
        if (k==0) count += 1; // 因为下面的算法会漏掉0，所以这里补上
        for (int i=0;i<=n; i++) {
            int temp = i;
            while(temp) {
                int tail = temp % 10;
                if (tail == k) count++;
                temp /= 10;
            }
        }
        return count;
    }
};

/* vim: set ts=4 sw=4 sts=4 tw=100 */
