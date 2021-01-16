class Solution:
    def reverse(self, x: int) -> int:
        
        num_str = str(x);
        print (num_str)
        reverse_num = ''
        if (num_str[0] == '-'):
            reverse_num = num_str[::-1]
            reverse_num = '-' + reverse_num[0:-1]
        else:
            reverse_num = num_str[::-1]
        print (reverse_num)
        num = int(reverse_num)
        
        if (num > (2**31 -1) or num < (-2**31)):
            return 0
        else:
            return num
