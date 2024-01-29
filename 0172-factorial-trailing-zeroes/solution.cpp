// class Solution {
// public:
//     int trailingZeroes(int n) {
//         return n/5 + n/25 + n/125 + n/625 + n/3125;
//     }
// }; 

class Solution {
public:
    int trailingZeroes(int n) {
        int suma = 0;

        for (int i=1; i<=log(n)/log(5); i++){
            suma += n/pow(5,i);
        }

        return suma;
    }
}; 
