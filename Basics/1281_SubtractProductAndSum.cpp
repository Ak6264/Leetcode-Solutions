class Solution {
public:
    int subtractProductAndSum(int n) {
        if ( n==0) {return 0;}
        vector<int> arr;
        while (n>0){
            arr.push_back(n % 10);;
           n = n/10;
           
        }
        int product = arr[0];
        int sum = arr[0];
        for(int j=1 ; j < arr.size() ; j++){
            product = product*arr[j];
            sum += arr[j];

        }
        int result = product - sum ;
        return result;
    }
};
