#include <iostream>

using namespace std;

int main() {
    int n, sum=0;
    while(~scanf("%d", &n)){
        sum+=n;
    }

    printf("%d", sum);

    return 0;
}