class Solution {
public:
    string removeOccurrences(string s, string part) {
        for(char i:s){
            size_t m=s.find(part);
            if(m!=std::string::npos)
                 s.erase(m,part.size());
            
        }
        return s;
        
    }
};