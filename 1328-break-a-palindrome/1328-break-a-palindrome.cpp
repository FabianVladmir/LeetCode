class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.size();
        if(n==1)
            return "";        
       
        
        if(n%2==0){
            for(int i=0; i<n/2; i++){
                if(palindrome[i] != 'a'){
                    palindrome[i] = 'a';
                    return palindrome;
                }
            }
            for(int j=0; j<26; j++){
                for(int i=n-1; i>=n/2; i--){
                    if(palindrome[i] != 'a' + j){
                        palindrome[i] = 'a'+j;
                        return palindrome;
                    }
                }
            }
            
        }
        else{
            
            for(int i=0;i<n/2;i++){
                if(palindrome[i]!='a'){
                    palindrome[i]='a';
                    return palindrome;
                }
            }
            for(int j=0;j<26;j++){
                for(int i=n-1;i>n/2;i--){
                    if(palindrome[i]!='a'+j){
                        palindrome[i]='a'+j;
                        return palindrome;
                    }
                }
            }
        }
        
        return "";
    }
};