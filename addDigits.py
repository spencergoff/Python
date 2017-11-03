"""Below is my solution in Python 3 to the following prompt, which was found on codefights.com on 11/3/2017. The program passed all 5 tests applied to it. The function can be called, for example, by addDigits(12, 11, 2), and result in an output of 1210."""

"""Given positive integer numbers a, b and n return the maximum number that can be obtained by lengthening number a repeatedly no more than n times.

Lengthening number a means appending exactly one digit (in the decimal notation) to the right hand side of a such that the resulting number is divisible by number b. If it is impossible to obtain a number that is divisible by b, then the lengthening operation cannot be performed.

Example

For a = 12, b = 11 and n = 2, the output should be
addDigits(a, b, n) = "1210".

Lengthening operations can be 12->121->1210."""


def addDigits(a, b, n):
    
    count = 0
    digit = 9
    
    while(count < n and digit >= 0):
        
        temp = int(str(a) + str(digit))
        
        if temp % b == 0:
            a = temp
            count += 1
            digit = 9
        else:
            digit -= 1        
        
    return str(a)
        
