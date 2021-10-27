#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;
#define int long long

inline int read(){
	int ret=0,f=1; char ch=getchar();
	while (ch<'0'||ch>'9') {if (ch=='-') f=-1;ch=getchar();}
	while (ch>='0'&&ch<='9') ret=ret*10+ch-'0',ch=getchar();
	return ret*f;
}

const int maxn=1e4+5;

int n,tar;
int a[maxn];

signed main(){
	n=read();
	for (int i=1;i<=n;i++) a[i]=read();
	tar=read();
	for (int i=1;i<=n;i++)
		for (int j=i+1;j<=n;j++) if (a[i]+a[j]==tar){
			printf("%lld %lld\n",i-1,j-1);
			return 0;
		}
	return 0;
}