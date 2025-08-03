#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> mpp;

    // Inserting elements
    mpp[1] = 2;        // {1, 2}
    mpp.emplace(3, 4);  // {3, 4}
    mpp.insert({2, 3}); // {2, 3}

    // Printing map contents
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;

    }

    cout << mpp[1];
    cout<< mpp[3];

    auto it=mpp.find(3);
    cout<< it->second;


    return 0;
}
