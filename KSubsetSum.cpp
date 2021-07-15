#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <set>
using namespace std;
int K;
set<set<int>> res;

void allSubsets(vector<int> &arr, vector<vector<bool>> &subsets, int i, int sum, vector<int> &c)
{
    if (i == 0 && sum != 0 && subsets[0][sum])
    {
        c.push_back(arr[i]);
        if (c.size() == K)
        {
            set<int> p(c.begin(), c.end());
            res.insert(p);
        }
        return;
    }
    if (i == 0 && sum == 0 && c.size()== K)
    {
        set<int> p(c.begin(), c.end());
        res.insert(p);
        return;
    }
    if (subsets[i - 1][sum])
    {
        vector<int> d = c;
        allSubsets(arr, subsets, i - 1, sum, d);
    }

    if (sum >= arr[i] && subsets[i - 1][sum - arr[i]])
    {
        c.push_back(arr[i]);
        allSubsets(arr, subsets, i - 1, sum - arr[i], c);
    }
}
int main()
{
    int N, S;
    cin >> N >> S >> K;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    vector<vector<bool>> subset(N, vector<bool>(S + 1));
    for (int i = 0; i < N; i++)
        subset[i][0] = true;
    for (int i = 1; i <= S; i++)
        subset[0][i] = false;

    if (arr[0] <= S)
        subset[0][arr[0]] = true;
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j <= S; j++)
        {
            if (j < arr[i])
                subset[i][j] = subset[i - 1][j];
            if (j >= arr[i])
                subset[i][j] = subset[i - 1][j] || subset[i - 1][j - arr[i]];
        }
    }
    vector<int> c;
    allSubsets(arr, subset, N, S, c);
    auto result = *(res.begin());
    copy(result.begin(), result.end(), ostream_iterator<int>(cout, " "));
}