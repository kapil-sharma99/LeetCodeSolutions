#include<iostream>
using namespace std;

class Solution {
public:
  
    int getInt(char s) {
      switch(s) {
        case 'I': return 1; break;
        case 'V': return 5; break;
        case 'X': return 10; break;
        case 'L': return 50; break;
        case 'C': return 100; break;
        case 'D': return 500; break;
        case 'M': return 1000; break;
        default: return -1;
      }
    }
  
    int romanToInt(string s) {
      int n = s.size(), next, current, i = 0, result = 0;
      while(i < n) {
        if(i == n-1) {
          result += getInt(s[i]);
          return result;
        }
        current = getInt(s[i]);
        next = getInt(s[i+1]);
        if(current >= next) {
          result += current;
          i++;
        } else {
          result += next-current;
          i += 2;
        }
      }
      return result;
    }
};

int main() {
    Solution sol;
    string s = "III";
    int res = sol.romanToInt(s);
    cout << res << endl;
}