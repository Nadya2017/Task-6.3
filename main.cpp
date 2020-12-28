#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map <string, string> s;
    map <string, string> ::iterator it;
    int n;
    cin >> n;
    string s_1, s_2;
    for (int i = 0; i < n; i++)
     {
       cin >> s_1 >> s_2;
        s.insert(pair<string, string>(s_1, s_2));
        s.insert(pair<string, string>(s_2, s_1));
   }
   cin >> s_1;
   it = s.find(s_1);
   if (it != s.end())
    cout << it->second << endl;
   return 0;
}
