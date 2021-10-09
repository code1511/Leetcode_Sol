// Create an unordered_map to store the key value pair of long url and short url
// Random string generator considering current time as seed to generate random string for URL

class Solution {
public:
     string generateRandomString()
     {
          std::string tmp_s;
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    int len = 6;
    srand( (unsigned) time(NULL));

    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) 
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    
    
    return tmp_s;
     }
    // Encodes a URL to a shortened URL.
    unordered_map<string, string> m;
    string encode(string longUrl) {
         if(m[longUrl] != "")
         {
             return m[longUrl];
             
         }
        string temp = generateRandomString();
        m[longUrl] = temp;
        return temp;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        for(auto i: m)
        {
            if(i.second==shortUrl)
            {
                return i.first;
            }
        }
        return "Gulu";
    }
};