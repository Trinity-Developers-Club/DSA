  #include <bits/stdc++.h>
using namespace std;

  vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();

        int count=0;
        int total=row*col;
        
        int startrow=0;
        int endrow=row-1;
        int startcol=0;
        int endcol=col-1;

        vector<int>ans;
        while(count<total){
            for(int i=startcol;i<=endcol && count<total;i++){
                ans.push_back(matrix[startrow][i]);
                count++;
            }
            startrow++;
            for(int i=startrow;i<=endrow && count<total;i++){
                ans.push_back(matrix[i][endcol]);
                count++;
            }
            endcol--;
            for(int i=endcol;i>=startcol && count<total;i--){
                ans.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;
            for(int i=endrow;i>=startrow && count<total;i--){
                ans.push_back(matrix[i][startcol]);
                count++;
            }
            startcol++;
        }
        return ans;
    }