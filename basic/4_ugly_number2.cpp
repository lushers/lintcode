/***************************************************************************
 * 
 * Copyright (c) 2018 None.com, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file 4_ugly_number2.cpp
 * @author lushers
 * @date 2018/04/16 19:11:24
 * @version $Revision$ 
 * @brief 
 *  
 **/
class Solution {
public:
    /**
     * @param n: An integer
     * @return: the nth prime number as description.
     */
	// 已知丑数只有因子2、3、5
	// 那么显然想到用2 3 5 去构造丑数即可
	// 现在的问题是顺序，题目要求返回第n小的数
	// 从定义可知丑数都是235构成的，那么由前面一个丑数显然可以得到后续的丑数
    int nthUglyNumber(int n) {
        // write your code here
        int *ugly_nums = new int[n+1];
        ugly_nums[0] = -1; // 丑数都是正整数，且规定1为第一个，这里默认0为错误结果返回-1
        ugly_nums[1] = 1;
        int index2 = 1;
        int index3 = 1;
        int index5 = 1;
        for (int i=2;i<=n;i++) {
			// 根据上一个index，构造最小的丑数
            int now_num = min(min(ugly_nums[index2]*2, ugly_nums[index3]*3), ugly_nums[index5]*5);
            ugly_nums[i] = now_num; // 记录入数组
			// 判断由哪些丑数可以构成当前的数，下标++
            if (now_num == ugly_nums[index2]*2) {
                index2++;
            }
            if (now_num == ugly_nums[index3]*3) {
                index3++;
            }
            if (now_num == ugly_nums[index5]*5) {
                index5++;
            }
            
        }
        return ugly_nums[n];
        
    }
};
/* vim: set ts=4 sw=4 sts=4 tw=100 */
