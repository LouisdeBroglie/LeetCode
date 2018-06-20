package test123;

class Solution {
    public int f(int i,int n){
        if(i>n) return 0;
        if(i==n) return 1;
        return f(i+1,n)+f(i+2,n);
    }
    public int climbStairs(int n) {
       return  f(0,n);
    }
}