class Solution {
private:
   bool valid(char ch){
       if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
           return 1;
       }
       return 0;
   }
   //convert to lower case
   char tolowercase(char ch){
       if((ch>='a' && ch<='z') || (ch>='0'&& ch<='9')){
           return ch;
       }
       else{
           char temp= ch-'A'+'a';   //convert to lowetr case 
           return temp;
       }
   }

   bool palindrome(string s){
       int st=0;
       int e=s.length()-1;

       while(st<=e){
           if(s[st]!=s[e]){
               return 0;
           }
           else{
               st++;
               e--;
           }
       }
       return 1;
   }

public:
    bool isPalindrome(string s) {
        // remove non-alphanumeric character
        string temp="";
        for(int i=0;i<s.length();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }

        // to lower case
         for(int i=0;i<temp.length();i++){

             temp[i]=tolowercase(temp[i]);

         }
         return palindrome(temp);  
    }
};