# 面试题50. 第一个只出现一次的字符
这道题应该有一次遍历，时间复杂度为O(N)的方法，暂时还没想到。

# 面试题52. 两个链表的第一个公共节点
用一个set记录A链表的所有节点，在遍历一遍B链表，找到相交点。

# 面试题52. 两个链表的第一个公共节点 双指针
链表找交点、找环这些题应该想到用双指针，A的长度为L1+L,B的长度为L2+L，当两个指针都走过L1+L1+L的时候要么相交，要么同时为nullptr。
