
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
    freopen("B-small-attempt2.in", "r", stdin);
    freopen("2.txt", "w", stdout);
    int t;
    int d,i,j,k;
    int ca=1;
    cin >> t;
    vector<int> v;
    int a,b;
    while(t--)
    {
        cin >> d;
        v.clear();
        forl(i,0,d)
        {
            cin >> a;
            v.push_back(a);
        }
        sort(v.rbegin(),v.rend());
        //cout << v[0] << endl;
        //v.clear();
        int ans = 0;
        while(v.size() > 0)
        {
           vector<int> tmp;
           int sz = v.size();
           int cnt=1;
           for(i=1;i<sz;i++)
           {
               if(v[i] != v[i-1])
                break;
               cnt++;
           }
           int best_time = cnt + ((v[0]+1)/2);
           int cut = (v[0]+1)/2;
           if(best_time < v[0])
           {
               tmp.clear(); 
               for(i=0;i<cnt;i++)
               {
                   tmp.push_back(cut);
                   tmp.push_back(v[0]-cut);
               }
               for(i=cnt;i<sz;i++)
               {
                   tmp.push_back(v[i]);
               }
               v = tmp;
               sort(v.rbegin(),v.rend());
               ans += cnt;
           }
           else
           {
               tmp.clear();
               forl(j,0,sz)
               {
                   if(v[j] > 1)
                   {
                       tmp.push_back(v[j]-1);
                   }
               }
               v = tmp;
               sort(v.rbegin(),v.rend());
               ans++;
           }         
           
        }
        cout << "Case #" << ca++ << ": " << ans << endl;
    }
    return 0;
}
