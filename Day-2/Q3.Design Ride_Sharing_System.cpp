class RideSharingSystem {
public:
    queue<int>q1;
    queue<int>q2;
    unordered_map<int,bool>m1;
     unordered_map<int,bool>m2;
    RideSharingSystem() {
        
    }
    
    void addRider(int riderId) {
        q1.push(riderId);
        m1[riderId] = 1;
        
    }
    
    void addDriver(int driverId) {
        q2.push(driverId);
        m2[driverId] = 2;
    }
    
    vector<int> matchDriverWithRider() {
        vector<int>ans(2,-1);
           while(!m1.count(q1.front())&&q1.size()>0){
                q1.pop();
        }
        if(q1.size()>0&&q2.size()>0){
         
            ans[0] = q2.front();
            ans[1] = q1.front();
            m1.erase(q1.front());
            m2.erase(q2.front());
            q1.pop();
            q2.pop();
            
            return ans;
        }
       else  if((q1.size()==0&&q2.size()==0)|| (q1.size()>0&&q2.size()==0)||(q1.size()==0&&q2.size()>0)){
            return ans;
        }
        return ans;
    }
    
    void cancelRider(int riderId) {
       m1.erase(riderId);
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */
