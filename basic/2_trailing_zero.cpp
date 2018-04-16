/***************************************************************************
 * 
 * Copyright (c) 2018 None.com, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file 2_trailing_zero.cpp
 * @author lushers(lushers@None.com)
 * @date 2018/04/16 18:54:40
 * @version $Revision$ 
 * @brief 
 *  
 **/
class Solution {
public:
    /*
     * @param n: A long integer
     * @return: An integer, denote the number of trailing zeros in n!
     */
	// 目的是为求取n的阶乘的末尾有几个零
	// 这个都知道2*5=10 也都知道看5的数量，因为2比5多，多以有几个5就有几个零
    long long trailingZeros(long long n) {
        // write your code here, try to do it without arithmetic operators.
        long long count = 0;
        while (n / 5) {//当前n是否>=5 
            count += n/5; // 当前n有几个5 这里像25这样含有多个5的除完5后还有剩余会继续除
            n /= 5;
        }
        return count;
    }
};

/* vim: set ts=4 sw=4 sts=4 tw=100 */
