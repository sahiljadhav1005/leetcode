class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // while (stones.size() > 1) 
        // {
        //     sort(stones.begin(), stones.end());
        //     int n = stones.size();
        //     int temp = stones[n - 1] - stones[n - 2];

        //     stones.pop_back();
        //     stones.pop_back();

        //     if (temp > 0) 
        //     {
        //         stones.push_back(temp);
        //     }
        // }

        // return stones.empty() ? 0 : stones[0];

        priority_queue<int> pq(stones.begin(), stones.end());

        while (pq.size() > 1)
        {
            int y = pq.top(); 
            pq.pop(); 
            int x = pq.top(); 
            pq.pop(); 

            if (y != x) 
            {
                pq.push(y - x);
            }
        }

        return pq.empty() ? 0 : pq.top();
    }
};
