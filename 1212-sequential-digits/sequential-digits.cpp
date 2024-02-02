// class Solution {
// public:
//     void each_digit(int x,vector<int>& digits){
//         if(x >= 10){
//             each_digit(x / 10,digits);
//         }
//         int digit = x % 10;
//         digit.push_back(digit);
//     }
    
//     vector<int> sequentialDigits(int low, int high) {
//         vector<int> result;
//         for (int i = low; i <= high; i++) {
//             vector<int> digits;
//             each_digit(i, digits);
//             bool sequential = true;
//             for (size_t j = 1; j < digits.size(); j++) {
//                 if (digits[j] != digits[j - 1] + 1) {
//                     sequential = false;
//                     break;
//                 }
//             }
//             if (sequential) {
//                 result.push_back(i);
//             }
//         }

//     vector<int> sequentialDigits(int low, int high) {
//        vector<int> result = sol.sequentialDigits(low, high);
//         for (int num : result) {
//             cout << num << " ";
//         }
//     cout << endl;          

//         }
//     }
// };
class Solution {
public:

  vector<int> sequentialDigits(int low, int high) {
    int a[] = {12, 23, 34, 45, 56, 67, 78, 89, 123, 234, 345, 456, 567, 678, 789,
               1234, 2345, 3456, 4567, 5678, 6789, 12345, 23456, 34567,
               45678, 56789, 123456, 234567, 345678, 456789,
               1234567, 2345678, 3456789, 12345678, 23456789, 123456789};

    vector<int> res;
    for (int i = 0; i <= 35; i++) {
      if (a[i] < low) {
        continue;
      }
      if (a[i] > high) {
        continue;
      }
      res.push_back(a[i]);
    }
    return res;
  }
};
