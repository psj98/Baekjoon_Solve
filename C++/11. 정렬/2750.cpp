#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, arr[1001];
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    sort(arr, arr+n);

    for(int i=0; i<n; i++)
        printf("%d\n", arr[i]);
    
    return 0;
}   