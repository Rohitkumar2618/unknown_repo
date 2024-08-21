class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        
        if(str == "Character" ){
            return 1;
            
        }
        if(str == "Integer" || str == "Float"){
            return 4;
        }
        if(str == "Long" || str == "Double"){
            return 8;
        }
        else{
            return -1;
        }
    }
};
