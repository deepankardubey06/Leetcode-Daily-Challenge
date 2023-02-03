#include<iostream>
#include<vector>
using namespace std;
string convert(string s, int numRows)
{
    if (numRows == 1)
    {
        return s;
    }
    vector<vector<char>> res(numRows, vector<char>());
    int ptr = 0;
    int flip = 0;
    string ans = "";

    while (ptr < s.length())
    {
        if (flip == 0)
        {
            int row = 0;
            int size = ptr + numRows;
            while (ptr < size && ptr < s.length())
            {
                res[row].push_back(s[ptr]);
                ptr++;
                row++;
            }
            flip = 1;
        }
        else if (flip == 1)
        {
            int curr_row = numRows - 2;
            while (curr_row > 0 && ptr < s.length())
            {
                res[curr_row].push_back(s[ptr]);
                ptr++;
                curr_row--;
            }
            flip = 0;
        }
    }

    string s1 = "";
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            s1 += res[i][j];
        }
    }

    return s1;
}
int main(){
    return 0;
}