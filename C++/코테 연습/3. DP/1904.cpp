#include <iostream>

using namespace std;

int dp[1000001]={1, 1};

int main() {
    int n;
    scanf("%d", &n);

    for(int i=2; i<=n; i++)
        dp[i]=(dp[i-1]+dp[i-2])%15746;

    printf("%d", dp[n]);

	return 0;
}