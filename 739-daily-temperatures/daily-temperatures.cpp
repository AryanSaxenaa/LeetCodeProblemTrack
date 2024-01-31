// class Solution {
// public:
//     vector<int> dailyTemperatures(vector<int>& temperatures) {
//         vector<int> array;
//         int gap=0;
//         temperatures.push_back(101);
//         for(int i=0;i<(temperatures.size()-1);i++){
//             if(i==temperatures.size()-1){
//                 array.push_back(0);
//             }
//             else if( (temperatures[i]>temperatures[i+1]) && (temperatures[i+1]!=101)){
//                 array.push_back(0);
//                 gap++;
//             }
//             else{
//                 array.push_back(gap);
//                 gap=0;
//             }
//         }
//         return array;
//     }
// };
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size(), 0);
        
        for (int i = temperatures.size() - 2; i >= 0; i--) {
            int j = i + 1;
            while (temperatures[i] >= temperatures[j] && result[j] != 0) {
                j = j + result[j];
            }
            if (temperatures[i] < temperatures[j]) {
                result[i] = j - i;
            }
        }
        
        return result;
    }
};
