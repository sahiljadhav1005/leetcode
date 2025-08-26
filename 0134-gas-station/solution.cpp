class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas = 0, totalCost = 0;
        int balance = 0, start = 0;

        for (int i = 0; i < gas.size(); i++) 
        {
            totalGas += gas[i];
            totalCost += cost[i];
            balance += gas[i] - cost[i];

            // If balance drops, reset start
            if (balance < 0) 
            {
                start = i + 1;
                balance = 0;
            }
        }

        return (totalGas < totalCost) ? -1 : start;
    }
};
