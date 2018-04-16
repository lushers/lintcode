/***************************************************************************
 * 
 * Copyright (c) 2018 None.com, Inc. All Rights Reserved
 * $Id$ 
 * 
 **************************************************************************/
 
 /**
 * @file 1_AplusB.cpp
 * @author lushers(lushers@none.com)
 * @date 2018/04/16 18:45:36
 * @version $Revision$ 
 * @brief 
 **/
// explanation
/**
 *  需求不要用+等数学运算符求和其实除了加我还不知道用啥符号...
 *  这道题可以明确得知是要用位运算的，毕竟^ 是不完全加法，&可以处理进位(二进制一样则进一)
 *  因此解法如下
 **/
class Solution {
public:
    /**
     * @param a: An integer
     * @param b: An integer
     * @return: The sum of a and b
     */
    int aplusb(int a, int b) {
        // write your code here
        // 递归
        /*
        if(b == 0) return a;
        int val = a^b;
        int carry = a&b;
        return aplusb(val,carry<<1);
        */
        //循环
        while(b!=0) { //以b作为进位的保存变量, a为加和
            int sum = a ^ b; // 得到不完全加和
            int carry = (a & b) << 1; // 得到进位
            a = sum;
            b = carry;
        }
        return a;
    }
};

/* vim: set ts=4 sw=4 sts=4 tw=100 */
