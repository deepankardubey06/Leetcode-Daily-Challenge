#include<iostream>
#include<map>
using namespace std;

bool checkInclusion(string s1, string s2)
{
    if (s1.length() > s2.length())
    {
        return false;
    }
    map<char, int> mp1;
    map<char, int> mp2;

    for (int i = 0; i < s1.length(); i++)
    {
        mp1[s1[i]] += 1;
        mp2[s2[i]] += 1;
    }

    if (mp1 == mp2)
    {
        return true;
    }

    for (int i = s1.length(); i < s2.length(); i++)
    {
        mp2[s2[i]] += 1;
        int index = i - s1.length();
        mp2[s2[index]] -= 1;
        if (mp2[s2[index]] == 0)
        {
            mp2.erase(s2[index]);
        }
        if (mp2 == mp1)
        {
            return true;
        }
    }
    return false;
}

int main(){
    return 0;
}