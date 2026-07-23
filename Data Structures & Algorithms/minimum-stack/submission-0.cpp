class MinStack {
    vector<int> values;
    vector<int> minimums;

public:
    MinStack() = default;

    void push(int val) {
        values.push_back(val);

        if (minimums.empty()) {
            minimums.push_back(val);
        } else {
            minimums.push_back(std::min(val, minimums.back()));
        }
    }

    void pop() {
        values.pop_back();
        minimums.pop_back();
    }

    int top() {
        return values.back();
    }

    int getMin() {
        return minimums.back();
    }
};