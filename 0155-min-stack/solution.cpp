// class MinStack {
// public:
//     stack<int> s;
//     stack<int> minS;

//     MinStack() {
//         // no need
//     }
    
//     void push(int val) {

//         s.push(val);

//         if(minS.empty() || val <= minS.top())
//         {
//             minS.push(val);
//         }  
//     }
    
//     void pop() {

//         if (s.top() == minS.top()) 
//         {
//             minS.pop();
//         }
//         s.pop();
//     }
    
//     int top() {
//         return s.top();
//     }
    
//     int getMin() {
//         return minS.top();
//     }
// };

class MinStack {
private:
    stack<pair<int, int>> s;

public:
    void push(int val) {
        int currentMin;
        if (s.empty()) {
            currentMin = val;
        } else {
            currentMin = min(val, s.top().second);
        }
        s.push({val, currentMin});
    }

    void pop() {
        s.pop();
    }

    int top() {
        return s.top().first;
    }

    int getMin() {
        return s.top().second;
    }
};


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
