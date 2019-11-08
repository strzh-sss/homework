#include <iostream>

using namespace std;

long long strange_multiply(long long mama, long long papa)
{
    int res = 0;
    for (int i = 0; i < papa; i++)
        res += mama;
    return res;
}

int main() {
    int mama, papa;
    cin >> mama >> papa;
    cout << strange_multiply(mama, papa);
}
