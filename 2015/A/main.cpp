

#pragma comment(linker,"/STACK:16777216")
#pragma  warning ( disable: 4786)
#include<iostream>
#include<cstring>
#include<cstdio>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<cmath>
#include<cstdlib>
#include<cctype>
#include<algorithm>
#include<queue>
#include<sstream>
#include<stack>
#include<list>
#include <bitset>
#include<iomanip>
#include <fstream>
#include<ctime>

using namespace std;

#define max(x,y) ((x)>(y)?(x):(y))
#define min(x,y) ((x)<(y)?(x):(y))

#define MX 1000000

#define forl(i,a,b) for ( i = a; i < b; i++)
#define fore(i,a,b) for ( i = a; i <= b; i++)
#define forrev(i,a,b) for ( i = a; i >= b; i--)
#define pb push_back
typedef long long  LL;
#define in(a,b,c) ((a) <= (b) && (b) <= (c))
#define ms(a,b) memset((a),(b),sizeof(a))

#define all(v) (v).begin(),(v).end()
#define pb push_back
#define ull unsigned long long int
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

string to_string(long long x) { stringstream ss; ss << x; return ss.str(); }
long long to_int(const string &s) { stringstream ss; ss << s; long long x; ss >> x; return x; }

#define MAX 100005

int main(void)
{
    freopen("1.txt", "r", stdin);
    freopen("2.txt", "w", stdout);
    int t,i,j,k;
    int ca=1;
    int s;
    int sum=0;
    cin >> t;
    getchar();
    char in[1002];
    while(t--)
    {
        cin >> s >> in;
        //cout << s << " " << in << endl;
        sum = in[0] - '0';
        int ans=0;
        forl(i,1,s+1)
        {
            if(sum < i && in[i] > '0')
            {
                ans += (i-sum);
                sum += (i-sum);
            }
            sum += (in[i]-'0');
        }
        cout << "Case #" << ca++ << ": " << ans << endl;
        
    }
    return 0;
}
