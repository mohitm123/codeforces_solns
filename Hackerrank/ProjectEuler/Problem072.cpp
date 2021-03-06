//By mOhit Maroliya


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;


int euler(int x){
    int ans = x;

    for(int i=2;i*i<=x;i++){
        if(x%i == 0){
            while(x%i == 0) x/=i;
            ans = ans - ans/i;
        }
    }
    if(x > 1){
        ans = ans - ans/x;
    }
    return ans;

}

int main(){
    int N = 1e6 + 10;
    vector<ll> v(N, 0);
    v[0] = 2;
    ll ans = 1;
    for(int i=1;i<N;i++){
        ans += euler(i);
        v[i] = ans;
    }

    int t; cin >> t;
    while(t--){
        int d; cin >> d;
        cout << (v[d]-2) << endl;
    }
}
