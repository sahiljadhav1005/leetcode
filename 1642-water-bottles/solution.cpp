class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        // int rem = numBottles / numExchange;
        // while(rem < numExchange)
        // {
        //     if(rem >= numExchange)
        //     {
        //         numBottles  = numBottles + rem;
        //         rem = rem / numExchange;
        //     }
        // }
        // return numBottles+rem;

        int totalDrunk = numBottles;
        
        while(numBottles >= numExchange) {
            int newBottles = numBottles / numExchange;
            totalDrunk += newBottles;
            numBottles = newBottles + (numBottles % numExchange);
        }
        
        return totalDrunk;
        
    }
};
