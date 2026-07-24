class MinStack {
public:
    stack<long long> st;
    long long min;
    MinStack() {
        min=INT_MIN;
    }
    
    void push(int value)
    {
        if(st.size()==0){
            min=value;
            st.push(value);
        }
        else{
            if(min>value){
                long long dum=value+(value-min);
                min=value;
                st.push(dum);
            }
            else{
                st.push(value);
            }
        }
    }
    void pop() {
        if(st.top()>=min) st.pop();
        else{
            min=2*min-st.top();
            st.pop();        
        }
    }
    
    int top() {
        if(st.top()>=min) return st.top();
        else return int(min);
    }
    
    int getMin() {
        return int(min);
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