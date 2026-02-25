class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        
        if(source == target)
            return 0;

        int n = routes.size();

        // stop -> buses mapping
        unordered_map<int, vector<int>> stopToBus;
        for(int i = 0; i < n; i++){
            for(int stop : routes[i]){
                stopToBus[stop].push_back(i);
            }
        }

        queue<int> q;
        unordered_set<int> visitedStop;
        vector<bool> visitedBus(n, false);

        q.push(source);
        visitedStop.insert(source);

        int busCount = 0;

        while(!q.empty()){
            int size = q.size();
            busCount++;   // each level = one bus

            while(size--){
                int currStop = q.front();
                q.pop();

                for(int bus : stopToBus[currStop]){

                    if(visitedBus[bus])
                        continue;

                    visitedBus[bus] = true;

                    for(int nextStop : routes[bus]){

                        if(nextStop == target)
                            return busCount;

                        if(!visitedStop.count(nextStop)){
                            visitedStop.insert(nextStop);
                            q.push(nextStop);
                        }
                    }
                }
            }
        }

        return -1;
    }
};
