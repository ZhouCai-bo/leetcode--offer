class CQueue {
public:
    stack<int> st;
    stack<int> helper;
    int size = 0;

    CQueue() {
        
    }
    
    void appendTail(int value) {
        st.push(value);
        size++;
    }
    
    int deleteHead() {
        if(size == 0)
            return -1;
        if(helper.empty())
        {
            while(!st.empty())
            {
                helper.push(st.top());
                st.pop();
            }
        }
        int temp = helper.top();
        helper.pop();
        size--;
        return temp;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
