#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    vector<int> remainder(k, 0);
    for (const auto& num : numbers) {
        remainder[num % k]++;
    }
    int count = (remainder[0] != 0);
    if (k % 2 == 0) {
        remainder[k / 2] = remainder[k / 2] ? 1 : 0;
    }
    for (int i = 1; i <= k / 2; i++) {
        count+= max(remainder[i], remainder[k - i]);
    }
    printf("%d", count);
    return 0;
}