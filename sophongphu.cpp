#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>

using namespace std;

bool sum(int n){
    int tong = 0;
    int can = (int)sqrt(n);

    for(int i = 2; i <= can; i++){
        if(n % i == 0){
            tong += i;

            if(i != n/i){
                tong += n/i;
            }
        }
    }

    return tong + 1> n;
}

int main(){
    int L, R, cnt = 0;
    cin >> L >> R;

    for(int i = L; i <= R; i++){
        if(sum(i) == true){
            cnt++;
        }
    }

    cout << cnt;
}
