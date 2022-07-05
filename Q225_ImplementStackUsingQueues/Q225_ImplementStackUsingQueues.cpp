#include <iostream>
#include <queue>

using namespace std;

class MyStack {
public:
    MyStack() {

    }

    void push(int x) {
        q1.push(x);

        for (int i = 0; i < q1.size() - 1; i++) {
            q1.push(q1.front());
            q1.pop();
        }
    }

    int pop() {
        int top = q1.front();
        q1.pop();

        return top;
    }

    int top() {
        return q1.front();
    }

    bool empty() {
        return q1.empty();
    }

    queue<int> q1;
};

int main()
{
    int x = 5;

    MyStack* obj = new MyStack();
    obj->push(x);
    obj->push(4);
    int param_2 = obj->pop();
    int param_3 = obj->top();
    bool param_4 = obj->empty();

    return 0;
}