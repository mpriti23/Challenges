// You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.

// Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.

// Return true if a and b are alike. Otherwise, return false.

class Solution {
public:
    bool halvesAreAlike(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int n=s.length(),c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(i<n/2 && (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')){
                c1++;
            }
            if(i>=n/2 && (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')){
                c2++;
            }
            
        }
        if(c1==c2) return true;
        return false;
    }
};
