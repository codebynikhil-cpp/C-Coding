#include<bits/stdc++.h>
using namespace std;
#define ll long long int

// Fix vector declarations to use ll consistently
vector<ll> dp((1 << 16), INT_MAX);
vector<ll> sums((1<<16), 0);

ll calc(vector<vector<ll>> &compat, ll mask){  // Changed int to ll
    ll ans = 0;
    for(ll i=0; i<16; i++){
        for(ll j=i+1; j<16; j++){
            if((mask & (1LL<<i)) != 0 && (mask & (1LL<<j)) != 0){  // Changed 1 to 1LL
                ans += compat[i][j];
            }
        }
    }
    return ans;
}

void precompute(vector<vector<ll>> &compat, ll n){  // Changed int to ll
    for(ll mask=1; mask <= ((1LL<<n) - 1); mask++){  // Changed 1 to 1LL
        sums[mask] = calc(compat, mask);
    }
}
 
ll f(vector<vector<ll>> &compat, ll mask){  // Changed int to ll
    if(mask == 0) return 0;
    if(dp[mask]!=INT_MAX) return dp[mask];
    
    ll ans = 0;
    for(ll g = mask; g!=0; g = ((g-1) & mask)){
        ans = max(ans, sums[g] + f(compat, mask ^ g));
    }
    return dp[mask] = ans;
}

int main(){
    ll n;  // Changed int to ll
    cin>>n;
    vector<vector<ll>> compat(n, vector<ll>(n));  // Changed vector<int> to vector<ll>
    for(ll i=0; i<n; i++){  // Changed int to ll
        for(ll j=0; j<n; j++){  // Changed int to ll
            cin>>compat[i][j];
        }
    }
    precompute(compat, n);
    cout << f(compat, ((1LL<<n)-1)) << endl;  // Changed 1 to 1LL
    return 0;
}