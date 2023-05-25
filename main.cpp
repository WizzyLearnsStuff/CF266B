#include<iostream>
#include<string>

using namespace std;

string nextstate(string &old, string state) {
    for (unsigned int i = 0; i < old.size() - 1; i++) {
        if (old[i] == 'B' && old[i+1] == 'G') {
            state[i] = 'G';
            state[i+1] = 'B';
        }
    }
    return state;
}

int main() {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for (int i = 0; i < t; i++) {
        s = nextstate(s, s);
    }
    cout << s;
    return 0;
}