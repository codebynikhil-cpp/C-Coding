#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define ld long double

ld dp_r[105][105][105]; // For rock winning
ld dp_s[105][105][105]; // For scissors winning
ld dp_p[105][105][105]; // For paper winning

// Probability of rock winning
ld fr(int r, int s, int p) {
    if (r == 0 || s == 0) return 0.0; // Rock or scissors eliminated
    if (p == 0) return 1.0;          // Paper eliminated
    if (dp_r[r][s][p] != -1.0) return dp_r[r][s][p];

    ld total = r * s + s * p + p * r;
    ld result = 0.0;
    result += (r * p) / total * fr(r - 1, s, p); // Rock beats paper
    result += (r * s) / total * fr(r, s - 1, p); // Scissors beat rock
    result += (s * p) / total * fr(r, s, p - 1); // Paper beats scissors
    return dp_r[r][s][p] = result;
}

// Probability of scissors winning
ld fs(int r, int s, int p) {
    if (r == 0 || p == 0) return 0.0; // Rock or paper eliminated
    if (s == 0) return 1.0;          // Scissors eliminated
    if (dp_s[r][s][p] != -1.0) return dp_s[r][s][p];

    ld total = r * s + s * p + p * r;
    ld result = 0.0;
    result += (r * p) / total * fs(r - 1, s, p); // Rock beats paper
    result += (r * s) / total * fs(r, s - 1, p); // Scissors beat rock
    result += (s * p) / total * fs(r, s, p - 1); // Paper beats scissors
    return dp_s[r][s][p] = result;
}

// Probability of paper winning
ld fp(int r, int s, int p) {
    if (s == 0 || r == 0) return 0.0; // Scissors or rock eliminated
    if (p == 0) return 1.0;          // Paper eliminated
    if (dp_p[r][s][p] != -1.0) return dp_p[r][s][p];

    ld total = r * s + s * p + p * r;
    ld result = 0.0;
    result += (r * p) / total * fp(r - 1, s, p); // Rock beats paper
    result += (r * s) / total * fp(r, s - 1, p); // Scissors beat rock
    result += (s * p) / total * fp(r, s, p - 1); // Paper beats scissors
    return dp_p[r][s][p] = result;
}

int main() {
    int r, s, p;
    cin >> r >> s >> p;

    // Initialize dp arrays
    for (int i = 0; i <= 104; i++) {
        for (int j = 0; j <= 104; j++) {
            for (int k = 0; k <= 104; k++) {
                dp_r[i][j][k] = -1.0;
                dp_s[i][j][k] = -1.0;
                dp_p[i][j][k] = -1.0;
            }
        }
    }

    cout << fixed << setprecision(9);
    cout <<fr(r, s, p) << "\n";
    cout <<fs(r, s, p) << "\n";
    cout <<2 1fp(r, s, p) << "\n";

    return 0;
}