#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<stack>
#include<list>
#include<vector>
#include<set>
#include<map>
#define FOR(i,bg,ed) for(int i=bg;i<=ed;++i)
#define RFOR(i,bg,ed) for(int i=bg;i>=ed;--i)
#define FOR_S(i,bg,ed,step) for(int i=bg;i<=ed;i+=step)
#define RFOR_S(i,bg,ed,step) for(int i=bg;i>=ed;i-=step)
#define MSET(a,i) memset(a,i,sizeof(a))
#define CIa1(a,i) cin>>a[i]
#define CIa2(a,i,j) cin>>a[i][j]
#define COa1(a,i) cout<<a[i]<<' '
#define COa2(a,i,j) cout<<a[i][j]<<' '
#define SCIa1(a,i) scanf("%d",&a[i])
#define SCIa2(a,i,j) scanf("%d",&a[i][j])
#define SCOa1(a,i) printf("%d ",a[i])
#define SCOa2(a,i,j) printf("%d ",a[i][j])
#define RFF(s) freopen(s,"r",stdin)
#define WFF(s) freopen(s,"w",stdout)
#define LL long long int
#define SPACE printf(" ")
#define ENTER printf("\n")
using namespace std;
const int MOD=0x7fffffff;
inline void INC(int &a, int b){a += b; if (a >= MOD) a -= MOD;}
inline void MUL(int &a, int b){a = (LL)a * b % MOD;}
inline int sum(int a, int b){a += b; if (a >= MOD) a -= MOD; return a;}
inline int pow(int a, int b){int c=1;while (b){if (b&1) MUL(c, a);MUL(a, a), b >>= 1;}return c;}
inline int pdt(int a, int b){return (LL)a * b % MOD;}
inline int dff(int a, int b){a -= b; if (a < 0) a  += MOD; return a;}
int main()
{
    RFF("t.in");
    //WFF("t.out");
    return 0;
}
