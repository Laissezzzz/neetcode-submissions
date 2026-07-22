class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max=arr.size()-1;

        for(int i=arr.size()-1;i>=1;i--){
            if(arr[i]>arr[i-1]){
                arr[i-1]=arr[i];
            }
        }

        arr.erase(arr.begin());
        arr.push_back(-1);

        return arr;
    }
};