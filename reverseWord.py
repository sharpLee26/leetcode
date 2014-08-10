class Solution:
    # @param s, a string
    # @return a string
    def reverseWords(self, s):
        wordList = s.split()
        wordList = wordList[::-1]
        return ' '.join(wordList)
