#include<iostream>
using namespace std;
int main()
{
	int ans = 0;
	for(int i=1;i<=100000;i++)
	{
		string s = to_string(i);
		bool down =0, up = 0;
		int j;
		for(j=1;j<s.size();j++)
		{
			if(s[j-1]>s[j])
			{
				down =1;
			}else{
				break;
			}
		}
		for(; j < s.size(); j++)
		{
			if(s[j-1]<s[j])
			{
				if(j==s.size()-1)
				{
					up=1;
				}
			}else{
					break;
				}
		}
		if(down&&up)
		{
			ans++;
     	}
	}

	cout<<ans<<endl;
}