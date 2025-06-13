class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    string reverseVowels(string s) {
        int left = 0 , right = s.size() - 1;
        // int temp;
        while(left < right)
        {
            while (left < right && !isVowel(s[left])) left++;
            while (left < right && !isVowel(s[right])) right--;

            // temp = s[left];
            // s[left] = s[right];
            // s[right] = temp;
            swap(s[left], s[right]);

            left++;
            right--;
        }
        return s;

    }
};
