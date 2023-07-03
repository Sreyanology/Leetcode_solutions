class RecentCounter {
    queue<int>tasks;
public:
    RecentCounter() {
        //tasks = NULL;
    }
    
    int ping(int t) {
        if(tasks.empty())
        { 
            tasks.push(t);
            return tasks.size();
        }
        else
        {
          while(t-3000 > tasks.front() && !tasks.empty())
           tasks.pop();
          
          tasks.push(t);
          return tasks.size();
        }
        
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */