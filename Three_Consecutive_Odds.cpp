#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr){
        int count = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==1){
                count++;
            }
            else{
                count=0;
            }
            if(count==3){
                return true;
            }
        }
        return false;
    }
};

int main(){
    Solution s;
    vector<int> arr = {2,6,4,1};
    cout<<s.threeConsecutiveOdds(arr)<<endl;
    return 0;
}