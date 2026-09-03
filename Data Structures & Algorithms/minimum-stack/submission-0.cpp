class MinStack {
public:
    stack<int> stk;
    int min = INT_MAX;
    bool min_popped = false;
    MinStack() {}

    void push(int value) {
        if (value < min) {
            min = value;
        }
        stk.push(value);
    }

    void pop() {
        if (stk.top() == min) {
            min_popped = true;
        }
        stk.pop();
    }

    int top() { return stk.top(); }

    int getMin() {
        if (min_popped) {
            min = INT_MAX;
            stack<int> temp = stk;
            while (!(temp.empty())) {
                if (temp.top() < min) {
                    min = temp.top();
                }
                temp.pop();
            }
            min_popped = false;
        }

            return min;
        }
    };

    /**
     * Your MinStack object will be instantiated and called as such:
     * MinStack* obj = new MinStack();
     * obj->push(value);
     * obj->pop();
     * int param_3 = obj->top();
     * int param_4 = obj->getMin();
     */