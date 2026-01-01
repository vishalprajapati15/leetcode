class Solution {
public:
    vector<double> sampleStats(vector<int>& count) {
        int maxVal = INT_MIN;
        int minVal = INT_MAX;
        int n = count.size();
        long long totalCount =0;
        long long sum =0;
        int maxFreq =0;
        int mode = 0;
        for(int i=0;i<n;i++){
            if(count[i]>0){
                minVal = min(minVal, i);
                maxVal = max(maxVal, i);
                sum += 1LL*count[i]*i;
                totalCount += count[i];
                if(count[i]>maxFreq){
                    maxFreq = count[i];
                    mode = i;
                }
            }
        }
        double mean = (double)sum / totalCount;
        double median =0.0;
        long long curr =0;
        long long mid_1 =(totalCount+1)/2;
        long long mid_2 = (totalCount%2==0)?mid_1+1 : mid_1;
        int m1 = -1;
        int m2 = -1;

        for(int i=0;i<n;i++){
            if(count[i]>0){
                curr += count[i];
                if(m1 == -1 && curr >= mid_1) m1=i;
                if(m2==-1 && curr>=mid_2){
                    m2=i;
                    break;
                }
            }
        }
        median = (m1 +m2)/2.0;
        return {(double)minVal, (double)maxVal, mean, median, (double)mode};
    }
};