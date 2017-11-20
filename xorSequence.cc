#include <sstream>
#include <iostream>


using namespace std;

unsigned long long compute(long a) {
    int a1 = a % 8;
    if(a1 == 0 || a1 == 1) return a;
    else if(a1 == 2 || a1 == 3) return 2;
    else if(a1 == 4 || a1 == 5) return a+2;
    return 0;
}

int main(){
    int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        long L;
        long R;
        cin >> L >> R;  
        unsigned long long ans = compute(L-1) ^ compute(R);
        cout << ans << endl;
    }
    return 0;
}