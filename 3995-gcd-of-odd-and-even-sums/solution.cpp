class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumEven = 0;
        int sumOdd = 0;

        for(int i = 1 ; i <= n * 2 ; i++)
        {
            if(i % 2 == 0)
            {
                sumEven = sumEven + i;            
            }
            else
            {
                sumOdd = sumOdd + i;
            }
        }

        return gcd(sumEven , sumOdd);
    }
};
