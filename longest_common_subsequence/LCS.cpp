#include <string>
#include <cstring>
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int LCS(string s1, string s2)
{
    if (s1.size() == 0 or s2.size() == 0)
        return 0;
    if (s1[0] == s2[0])
        return 1 + LCS(s1.substr(1), s2.substr(1));
    else
        return max(LCS(s1.substr(1), s2), LCS(s1, s2.substr(1)));
}
void printMatrix( vector<vector<int>> mat){
    for(size_t i = 0; i < mat.size(); i++)
    {
       std::copy(mat[i].begin(), mat[i].end(),std::ostream_iterator<int>(std::cout," "));
       cout<<endl;
    }

}
int LCS2(string s1, string s2)
{
    auto n = s1.size()+1;
    auto m = s2.size()+1;
    vector<vector<int>> dp{n, vector<int>(m)};

    for(size_t i = 0; i <n; i++)
    {
        for(size_t j = 0; j <m; j++)
        {
            if(i==0||j==0)
                dp[i][j]=0;
            else if(s1[i-1]==s2[j-1])
                dp[i][j]= 1+ dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
printMatrix( dp );
}
int main()
{
    string s1 = "ABCBDABABCBDABABCBCABCBD";
    string s2 = "BDCABABDCABABDCABABD";

    cout << LCS2(s1, s2);
}