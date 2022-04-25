#include <bits/stdc++.h>
#include <stdlib.h> 

using namespace std;

class Solution {
public:

    /*
    unordered_map<string, string>mp;
    int length = 6;
    
    string hashing(string longUrl){
        string hashCode = "";
        
        for(int i=0; i<length; i++){
            int random = rand() % 3;
            
            if(random == 0)
                hashCode += ('0' + rand() % 10);
            else if(random == 1)
                hashCode += ('a' + rand() % 26);
            else
                hashCode += ('A' + rand() % 26);
        }
        
        if(mp.find(hashCode) !=mp.end())
            return hashing(longUrl);
        else{
            mp[hashCode] = longUrl;
            return hashCode;
        }
    }
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string tinyUrl = "http://tinyurl.com/";
        string hashCode = hashing(longUrl);
        return tinyUrl + hashCode;
    }
    
    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string hashCode = shortUrl.substr(shortUrl.size() - length, length);
        return mp[hashCode];
    }
    */

    map<int, string> m;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        m[m.size()] = longUrl;
        return "http://tinyurl.com/" + to_string(m.size() - 1);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int idx = shortUrl.rfind('/');
        return m[stoi(shortUrl.substr(idx + 1))];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));

int main()
{
    string url = "https://leetcode.com/problems/design-tinyurl";
    cout << "url: " << url <<endl;

    Solution sol;
    string encode = sol.encode(url);
    cout << "encode: " << encode <<endl;
    string decode = sol.decode(encode);
    cout << "decode: " << decode <<endl;
    
    cout<<endl;
    return 0;
}