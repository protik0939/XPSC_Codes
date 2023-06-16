#include <bits/stdc++.h>

using namespace std;


class Solution{
public:
	int search(string pat, string txt) {
	int i = 0, j = 0, count = 0;
    int txt_fr[26]={0};
    int pat_fr[26]={0};
    for(char temp:pat)
    {
        pat_fr[temp - 'a']++; 
    }

        while (j < txt.size())
        {
            txt_fr[txt[j]-'a']++;
            if (j < pat.size()-1)
            {
                j++;
            }
            else
            {
                bool check = true;
                for(int x=0; x<26; x++)
                {
                    if(txt_fr[x]!=pat_fr[x])
                    {
                        check = false;
                        break;
                    }
                }
                if(check)
                {
                    count++;
                }
                txt_fr[txt[i]-'a']--;
                i++;
                j++;
            }
        }
        return count;
	}

};


int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}