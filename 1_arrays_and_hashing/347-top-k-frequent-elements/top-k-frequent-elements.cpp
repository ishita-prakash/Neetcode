class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //my solution
        typedef pair<int, int> p;

        vector<int> res; //answer vector

        //checking for edge cases
        if(nums.size() == 1){
            res.push_back(nums[0]);
            return res;
        }
        if(nums.empty()){
            return res;
        }

        unordered_map<int, int> umap; //key->element of array, value->count of that element

        int n = nums.size();
        for(int i=0; i<n; i++){
            umap[nums[i]]++; //increase count of element in umap
        }

        // priority queue as min heap
        //priority_queue<type of elements stored in pq, underlying container for pq, functor that defines the comparison function used to determine order of elements in pq> pq;
        priority_queue<p, vector<p>, greater<p>> pq; //p -> pair<int, int>

        //in pair, comparison done on the basis of first element

        for(auto x: umap){
            pq.push({x.second, x.first});
            if (pq.size() > k){
                pq.pop(); //removes min element from min heap
            }
        }

        p temp;

        while(!pq.empty()){
            temp = pq.top();
            res.push_back(temp.second);
            pq.pop();
        }
        
        return res;
    }
};