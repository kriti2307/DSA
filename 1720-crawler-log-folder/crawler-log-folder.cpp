class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack <string> st;
        int depth = 0;

        for(string log : logs){
            if(log == "../"){
                if(depth > 0) depth--;
            }
            else if(log == "./"){
                continue;
            }
            else{
                depth++;
            }
        }
        return depth;
    }
};