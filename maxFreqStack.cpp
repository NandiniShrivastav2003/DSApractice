class FreqStack {
public:
    unordered_map<int,int>freq;
    unordered_map<int,stack<int>>grpFreq;
    int maxFreq=0;
    FreqStack() {
        freq.clear();
        grpFreq.clear();
        maxFreq=0;
    }
    
    void push(int val) {
        freq[val]++;
        grpFreq[freq[val]].push(val);
        maxFreq=max(maxFreq,freq[val]);
    }
    
    int pop() {
        int ans=grpFreq[maxFreq].top();
        grpFreq[maxFreq].pop();
        freq[ans]--;
        if(grpFreq[maxFreq].size() == 0){
            maxFreq--;
        }
        return ans;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */