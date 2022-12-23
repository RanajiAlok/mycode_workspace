class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='M')
            ans+=1000;
            else if(s[i]=='C'&& s[i+1]=='M'){
            ans+=900;
            i++;
            }
            else if(s[i]=='C'&& (s[i+1]!='M' && s[i+1]!='D'))
            ans+=100;
            else if(s[i]=='C'&& s[i+1]=='D'){
            ans+=400;i++;}
            else if(s[i]=='D')
            ans+=500;
            else if(s[i]=='X'&& (s[i+1]!='L' && s[i+1]!='C'))
            ans+=10;
            else if(s[i]=='L')
            ans+=50;
            else if(s[i]=='X'&& s[i+1]=='L'){
            ans+=40;i++;}
            else if(s[i]=='X'&& s[i+1]=='C'){
            ans+=90;i++;}
            else if(s[i]=='I'&& s[i+1]=='V'){
            ans+=4;i++;}
            else if(s[i]=='I'&& s[i+1]=='X'){
            ans+=9;i++;}
            else if(s[i]=='V')
            ans+=5;
            else{
                ans+=1;
            }

        }
        return ans;
    }
};

//Another solution

int romanToInt(string s) {
        unordered_map<char,int>m({{'I',1}, {'X',10}, {'C',100}, {'M',1000}, {'V',5}, {'L',50}, {'D',500}});
        if(s.size() == 0) return 0;
        int sum = m[s[s.size() - 1]];
        for(int i = s.size() - 2; i >= 0; i--){
            if(m[s[i]] >= m[s[i + 1]]) sum += m[s[i]];
            else sum -= m[s[i]];
        }
        return sum;
    }
