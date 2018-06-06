'''
Given a string s, find and return the first instance of a non-repeating character in it.
If there is no such character, return '_'.
Note: Write a solution that only iterates over the string once and uses O(1) additional memory,
since this is what you would be asked to do during a real interview.
'''

def firstNotRepeatingCharacter(s):
    letterCount = {'a':0, 'b':0, 'c':0, 'd':0,'e':0, 'f':0,'g':0, 'h':0,'i':0, 'j':0,'k':0, 'l':0,'m':0, 'n':0,\
    'o':0, 'p':0,'q':0, 'r':0,'s':0, 't':0,'u':0, 'v':0,'w':0, 'x':0,'y':0, 'z':0}
    nonRepeatedCharacters = []
    for i in range(len(s)):
        testChar = s[i]
        letterCount[testChar] += 1
        if letterCount[testChar] == 1:
            nonRepeatedCharacters.append(testChar)
        elif letterCount[testChar] == 2:
            nonRepeatedCharacters.remove(testChar)
    if len(nonRepeatedCharacters) == 0:
        nonRepeatedCharacters.append('_')
    return nonRepeatedCharacters[0]

s = 'abacabad'
print(str(firstNotRepeatingCharacter(s)))
