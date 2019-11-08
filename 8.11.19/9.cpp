#include <iostream>

using namespace std;

int strange_sum(int za, int chto, int* Array)
{
    if (za == chto)
        return Array[za];
    return strange_sum(za, (za + chto)/2, Array) + strange_sum((za + chto)/2 + za, chto, Array);
}

int main() {
    int dom;
    cin >> dom;
    int* Array = new int[dom];
    for (int i = 0; i < dom; i++)
        cin >> Array[i];
    cout << strange_sum(0, dom - 1, Array);
    delete [] Array;
    return 0;
}
