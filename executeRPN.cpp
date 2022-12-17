//iterative solution
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int>myStack;
        long long a, b, ans=0;
        for(int i = 0;i<tokens.size();i++){
            
            if( isOperators(tokens[i])) {  //if symbol, pop from stack and do math
                 a = myStack.top(); myStack.pop();
                 b = myStack.top();myStack.pop();
                 ans = applyMath(tokens[i][0],b, a);
                 myStack.push(ans);
            } else {
                ans = stoi(tokens[i]);
                myStack.push(ans);
            }
        }
        return ans;
    }
    int applyMath( char symbol, long long a1, long long a2){
        long long a3 = 0;
        switch (symbol){
            case '+': a3 = a1+a2; break;
            case '*': a3 =  a1*a2; break;
            case '/': if(a2 != 0) a3 =  a1/a2; else a3 = INT_MAX; break;
            case '-' : a3 =  a1-a2; break;
            default: break;
        }
        return a3;
    }
    bool isOperators(string ch) {
        if((ch.length() <= 1) && (ch[0] == '+' || ch[0] == '*' || ch[0] == '/' || ch[0] == '-')){
           return true;
        }
           else {
           return false;
        }
    }
};

//recursive solutin 

/*class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        string t = tokens.back();
        tokens.pop_back();
        if(t != "+" && t != "-" && t != "*" && t != "/") return stoi(t);
        else{
            long long b = evalRPN(tokens);
            long long a = evalRPN(tokens);
            if(t == "+") return a + b;
            else if(t == "-") return a - b;
            else if(t == "*") return a * b;
            else return a / b;
        }
    }
};*/
