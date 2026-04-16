class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int,int>>v;
        for(int i=0;i<score.size();i++){
            v.push_back({score[i],i});
        }
        sort(v.begin(),v.end(),greater<>());
        vector<string>ans(score.size());
        for(int i=0;i<score.size();i++){
            int j=v[i].second;
            if(i==0) ans[j]="Gold Medal";
            else if(i==1)ans[j]="Silver Medal";
            else if(i==2)ans[j]="Bronze Medal";
            else
            ans[j]=to_string(i+1);
        }
        return ans;
    }
};
