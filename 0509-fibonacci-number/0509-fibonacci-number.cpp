class Solution {
public:
    int fib(int n) {
//         base condition and edge case
        if(n<0){
            return 0;
        }
        if(n==0|| n==1){
            return n;
        }
        return fib(n-1)+fib(n-2);
    }
};