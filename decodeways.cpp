class Solution {
public:
    bool valid(string s){
        if (s.size()==0){return false;}
        if (s[0]=='0'){return false;}
        if (s.size()==2){
            if (s[0]>'2' || (s[0]=='2'&& s[1]>'6')){return false;}
        }
        return true;
    }
    
    int numDecodings(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if (s.empty()){return 0;}
        vector<int> res(s.size(),0);
        if (s[0]!='0'){res[0]=1;} // set res[0]
        if (s.size()==1){return res[0];}
        if (valid(s.substr(0,2))){res[1]++;} //set res[1]
        if (s[0]!='0' && s[1]!='0'){res[1]++;} //set res[1]
        
        //DP
        for (int i=2;i<s.size();i++){
            if (s[i]!='0'){res[i]+=res[i-1];}
            if (valid(s.substr(i-1,2))){
                res[i]+=res[i-2];
            }
        }
        
        return res[s.size()-1];
    }
    
};
