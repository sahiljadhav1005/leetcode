class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        while(n >= 5)
        {
            count = count + n/5;
            n = n / 5;
        }
        return count;

        // int suma = 0;

        // for (int i=1; i<=log(n)/log(5); i++){
        //     suma += n/pow(5,i);
        // }

        // return suma;
    }
};
