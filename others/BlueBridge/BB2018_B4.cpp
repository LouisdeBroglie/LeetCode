#include<iostream>
using namespace std;
int f[11]={0,1,2,3,4,5,6,7,8,9,10};
int a_b(int a, char c, int b){
	if(c == '+'){
		return a+b;
	}
	return a-b;
}
int dfs(int a, char c, int b, int cnt){
	if(cnt==11){
		return a_b(a,c,b)==0;
	}
	int ans = 0;
	ans += dfs(a_b(a,c,b), '+', f[cnt], cnt+1);
	ans += dfs(a_b(a,c,b), '-', f[cnt], cnt+1);
	ans += dfs(a, c, b*f[cnt], cnt+1);
	return ans;
}
int main(){
	cout<<dfs(0,'+',1,2)<<endl;
	return 0;
}