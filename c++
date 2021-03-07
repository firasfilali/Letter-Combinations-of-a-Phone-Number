class Solution {
public:
vector<string> combinations;

string kb[10] = { 	"abc", 
						"def",
                		  "ghi",
                		  "jkl",
                  		"mno",
                  		"qprs",
                  		"tuv",
                  		"wxyz" };


    void rec(int i, string buf, string digits) {
   		if(i == digits.length()){
            
     	  combinations.push_back(buf);
        return;
      }
    
      int idx = digits[i] - '2';
      // (auto c : {"a", "b", "c"})
        //for(int j=0;j<kb[idx].length();j++){
    //  char c = kb[idx][j];
        for(auto c: kb[idx]){
         
        rec(i + 1, buf + c, digits);
      }
    }

    vector<string> letterCombinations(string digits) {
    
    	if(digits == "") 
      	return {}; // char st[10] = {"a", "b"};
      rec(0,"", digits);
      return combinations;
        
    }
};
