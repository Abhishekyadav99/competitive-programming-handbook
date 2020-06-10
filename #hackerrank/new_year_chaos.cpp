#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void minimumBribes(vector<int> q) {
    int totalBribes = 0;
    
    int expectedFirst = 1;
    int expectedSecond = 2;
    int expectedThird = 3;
    
    for (unsigned int i = 0; i < q.size(); ++i) {
        if (q[i] == expectedFirst) {
            expectedFirst = expectedSecond;
            expectedSecond = expectedThird;
            ++expectedThird;
        } else if (q[i] == expectedSecond) {
            ++totalBribes;
            expectedSecond = expectedThird;
            ++expectedThird;
        } else if (q[i] == expectedThird) {
            totalBribes += 2;
            ++expectedThird;
        } else {
            cout << "Too chaotic" << endl;
            return;
        }
    }
    
    cout << totalBribes << endl;
}

