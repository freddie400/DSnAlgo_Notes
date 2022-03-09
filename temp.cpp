void coms(vector<int> v, vector<vector<int>> &ans, vector<int> s, int i, int sum){
    if(sum==0){
        ans.push_back(s);
        return;
    }
    if(sum<0) return;
    if(i==v.size()) return;
    
    s.push_back(v[i]);
    coms(v,ans,s,i,sum-v[i]);
    s.pop_back();
    coms(v,ans,s,i+1,sum);
    return;
}

vector<vector<int>> Solution::combinationSum(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    vector<vector<int>> ans;
    vector<int> s;
    coms(A,ans,s,0,B);
    set<vector<int>> p(ans.begin(), ans.end());
    ans.clear();
    for(auto it:p){
        ans.push_back(it);
    }
    return ans;
}
