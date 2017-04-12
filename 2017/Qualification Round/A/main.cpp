
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
    freopen("A-large.in", "r", stdin);
    freopen("3.txt", "w", stdout);
    int t;
    cin >> t;
    char in[1005];
    int K;
    int i,j,k;
    getchar();
    int ca=1;
    while(t--){
        cin >> in >> K;
        getchar();
        //cout << in << endl;
        int ans = 0;
        int minuscount=0;
        int len=strlen(in);
        bool imp=false;
        for(i=0;i<len;i++){
            if(in[i] == '+'){

            }else{
                if(i+K-1>=len){
                    imp=true;
                    break;
                }
                int ind=-1;
                for(j=i;j<i+K;j++){
                    if(in[j] == '+'){
                        in[j] = '-';
                        if(ind==-1)
                            ind=j;
                    }
                    else
                        in[j] = '+';
                }
                ans++;
                if(ind!=-1)
                i=ind-1;
                else
                    i=i+K-1;
            }
        }
        cout <<"Case #" << ca++ << ": ";
        if(imp)
            cout << "IMPOSSIBLE\n";
        else
            cout << ans << endl;
    }
    return 0;
}
