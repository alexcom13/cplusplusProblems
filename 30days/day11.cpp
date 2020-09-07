//Day 11: 2D Arrays

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int max(vector<int> nums){
    int max1 = nums.at(0);
    for(int i = 0; i<nums.size(); i++){
        if(max1 < nums.at(i)){
            max1 = nums.at(i);
        }
    }
    return max1;
}

int hg(vector<vector<int>> arr, int i, int j){
    int a; 
    a = arr[j][i] + arr[j][i+1] + arr[j][i+2] + arr[j+1][i+1] + arr[j+2][i] + arr[j+2][i+1] + arr[j+2][i+2];
    return a;
}

int check(vector<vector<int>> arr){
    vector<int> nums;
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            nums.push_back(hg(arr, i, j));
        }
    }
    return max(nums);
}
    
int main(){
    int maxhg;
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    maxhg = check(arr);
    cout<<maxhg;
    return 0;
}