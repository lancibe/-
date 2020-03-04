
#include <iostream>
 
using namespace std;
 
int main()
{
    int n, digitroot;
    string s;
 
    cin >> n;
    while(n--) {
        cin >> s;
 
        digitroot = 0;
        int i =0;
        while(s[i]) {
            digitroot += s[i] - '0';
            digitroot = digitroot % 9;
            i++;
        }
 
        cout << ((digitroot == 0) ? 9 : digitroot) << endl;
    }
 
    return 0;
}


