class Solution {
public:
    bool isPalindrome(string s) {
    //string s;
    string t ;
    //getline(cin, s);

    for(int i=0; i<s.size(); i++)
    {
        if ((s[i]>='0' && s[i]<= '9' )|| (s[i] >= 'a' &&s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') )
        {
            t += tolower(s[i]);
        }
    }

    s = t;

    reverse(t.begin(), t.end());
    if (t == s) return 1;
    else return 0;
    }
};
