class Solution {
private:
    void dfs(int i,vector<int> isConnectedlist[],int visarr[]){
            visarr[i]=1;
            for(auto it: isConnectedlist[i]){
                if(!visarr[it]){
                    dfs(it, isConnectedlist, visarr);
                }
            }
        }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        

        int n = isConnected.size();
        vector<int> isConnectedlist[n];
        for(int i=0; i<n ; i++){
            for(int j=0; j<n; j++){
                if(isConnected[i][j]==1&&i!=j){
                    isConnectedlist[i].push_back(j);
                    isConnectedlist[j].push_back(i);
                }
            }
        }

        int visarr[1000000]={0};
        int cnt=0;
        for(int i=0; i<n;i++){
            if(visarr[i]==0){
                dfs(i,isConnectedlist, visarr);
                cnt++;
            }
        }
        return cnt;
    }
};