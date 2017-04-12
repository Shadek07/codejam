
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

int comp(pii p1, pii p2){
    int d1 = p1.second - p1.first;
    int d2 = p2.second - p2.first;
    if(d1>d2)
        return 1;
    else if(d2>d1)
        return 0;
    else{
        if (p1.first < p2.first)
            return 1;
        else
            return 0;
    }
}

class cell
{

public:
    pii p;
	cell(pii p1)
	{
		p = p1;
	}
	void insert_value(pii p1)
	{
		p = p1;
	}
};
bool operator<(const cell &a, const cell &b)
{
    int d1 = a.p.second - a.p.first;
    int d2 = b.p.second - b.p.first;
    if(d1>d2)
        return 0;
    else if(d2>d1)
        return 1;
    else{
        if ((a.p.second-a.p.first)/2 < (b.p.second-b.p.first)/2)
            return 0;
        else
            return 1;
    }
}
int main(void)
{
    //freopen("C-small-practice-1.in", "r", stdin);
    //freopen("2.txt", "w", stdout);
    int t;
    cin >> t;
    ull N;
    ull ans;
    int i,j,k;
    int ca=1;
    int n,K;
    vpii vp;
    priority_queue<cell> pq;
    //pq.push(cell(make_pair(1,10)));
    //pq.push(cell(make_pair(11,20)));
    //cout << pq.top().p.first << endl;
    while(t--){
        cout <<"Case #" << ca++ << ": ";
        cin >> n >> K;
        //vp.pb(make_pair(1,N+2));
        pq.push(cell(make_pair(1,n+2)));
        int mn,mx;
        while(K--){
            pii p = pq.top().p;
            pq.pop();
            int d = p.second - p.first - 1;
            int mid = p.first + (d/2);
            if(d%2 == 1){
                mid++;
                pq.push(cell(make_pair(p.first,mid)));
                pq.push(cell(make_pair(mid,p.second)));
            }else{
                pq.push(cell(make_pair(p.first,mid)));
                pq.push(cell(make_pair(mid,p.second)));
            }
            //cout << p.first << " " << mid << " " << p.second << endl;
            mn = min(mid-p.first-1, p.second-mid-1);
            mx = max(mid-p.first-1, p.second-mid-1);
        }
        cout << mx << " " << mn << endl;
    }
    return 0;
}
