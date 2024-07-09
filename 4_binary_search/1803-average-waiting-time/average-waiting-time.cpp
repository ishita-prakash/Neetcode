class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        vector<long long> wait_t(customers.size(), 0);

        //waiting time of 1st customer
        wait_t[0] = (long long)customers[0][1];
        long long start_t = (long long)customers[0][0];
        long long finish_t = (long long)(customers[0][0] + customers[0][1]);

        for(int i=1; i<customers.size(); i++){
            start_t = max((long long)customers[i][0], finish_t);
            finish_t = start_t + customers[i][1];
            wait_t[i] = finish_t - customers[i][0];
        }

        long long sum = 0;

        for(int i=0; i<customers.size(); i++){
            sum = sum + wait_t[i];
        }
        double avg = (double)sum / customers.size();
        return avg;
    }
};