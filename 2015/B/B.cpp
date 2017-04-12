#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <bits/stdc++.h>

using namespace std;
using namespace __gnu_pbds;

typedef long long LL;

typedef tree<
    int,
    null_type,
    less<int>,
    rb_tree_tag,
    tree_order_statistics_node_update>
ordered_set;
//find_by_order
//order_of_key

#define PB push_back
#define FRO freopen("in.txt","r",stdin);

#define CLR(arr) memset( (arr),0,sizeof(arr) );
#define NEG(arr) memset( (arr),-1,sizeof(arr) );
#define ALL(v) v.begin(),v.end()

#define X first
#define Y second
#define MP make_pair

typedef pair<int,int> pint;
typedef map<int,int> mint;

void show() {cout<<'\n';}
template<typename T,typename... Args>
void show(T a, Args... args) { cout<<a<<" "; show(args...); }
template<typename T>
void show_c(T& a) { for ( auto &x:a ){ cout<<x<<" ";}cout<<endl;  }

#define SIZE 1010


int arr[SIZE];

int main(){

    freopen("B-small-attempt0.in","r",stdin);
    freopen("out.out","w",stdout);

    int kase;
    scanf("%d",&kase);

    for (int kk=1;kase--;++kk){
        int n;
        scanf("%d",&n);

        int ans = 0;
        for (int i=0;i<n;++i){
            scanf("%d",&arr[i]);
            ans += arr[i];
        }

        for (int i=1;i<SIZE;++i){
            int sum = 0;
            for (int j=0;j<n;++j){
                if ( arr[j] <= i ){

                }else{
                    sum += arr[j]/i - ( arr[j]%i == 0 );
                }
            }
            sum += i;
            //show( i, sum );
            ans = min( ans , sum );
        }
        printf("Case #%d: %d\n",kk,ans);

    }


    return 0;
}
