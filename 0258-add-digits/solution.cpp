class Solution {
public:
    int addDigits(int num) {

        // method 1 : recursive 

        // string newDig = to_string(num);
        // int sum = 0;

        // for(auto i : newDig)
        // {
        //     sum += i - '0';
        // }

        // if(sum > 9)
        // {
        //     return addDigits(sum);
        // }

        // return sum;

        // method 2 : maths 

        // if (num == 0) 
        // {
        //     return 0;
        // }

        // return 1 + (num - 1) % 9;

        // method 3 : 

        while(num > 9)
        {
            int sum = 0;
            while(num > 0)
            {
                sum += num % 10;
                num = num / 10;
            }
            num = sum;
        }

        return num;
    }
};
