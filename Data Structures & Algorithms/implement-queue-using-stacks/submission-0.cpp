class MyQueue {
public:
    stack<int> one;
    stack<int> two;
    MyQueue() {}

    void push(int x) { one.push(x); }

    int pop() {
        while (!one.empty()) {
            two.push(one.top());
            one.pop();
        }
        int x = two.top();
        two.pop();
        while (!two.empty()) {
            one.push(two.top());
            two.pop();
        }

        return x;
    }

    int peek() {
        while (!one.empty()) {
            two.push(one.top());
            one.pop();
        }
        int s = two.top();
        while (!two.empty()) {
            one.push(two.top());
            two.pop();
        }
        return s;
    }

    bool empty() { return (one.empty()); }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */