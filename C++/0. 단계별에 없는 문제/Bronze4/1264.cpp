#include <iostream>

using namespace std;

int main() {
	while(1){
        string s;
        int sum=0;
        getline(cin, s);

        if(s=="#") break;

        for(int i=0; i<s.size(); i++)
            if(s[i]==65 || s[i]==97 || s[i]==69 || s[i]==101 || s[i]==73 || s[i]==105 || s[i]==79 || s[i]==111 || s[i]==85 || s[i]==117)
                sum++;

        printf("%d\n", sum);
    }

    return 0;
}