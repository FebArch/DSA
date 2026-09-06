#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {11, 5, 7, 4, 9, 11, 16, 34, 21, 9};

    // Removing 7 from vector v
    v.erase(find(v.begin(), v.end(), 11));

    for (int i : v)
        cout << i << " ";
    return 0;
}