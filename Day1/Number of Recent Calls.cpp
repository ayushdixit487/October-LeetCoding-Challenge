class RecentCounter {
public:
    deque<int> dq;
    RecentCounter() {
        dq.clear();
    }
    
    int ping(int t) {
        dq.push_front(t);
        int startTime = t - 3000;
        while(dq.back() < startTime)
			dq.pop_back();
       
        return dq.size();
    }
};
