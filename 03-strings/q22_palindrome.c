// Check if String is Pallindrome or not
/* 
A palindrome is a word, number, phrase, or sequence that reads the same forwards and backwards. */

#include<stdio.h>
#include<string.h>

int isPalindrome(char *str, int n){
    int k=n-1;
    for(int i=0;i<n/2;i++, k--){
        if(str[i]!=str[k]){
            return 0;
        }
    }
    return 1;
}

int main(){
    char str1[] = "acbbca";
    printf("%d\n", isPalindrome(str1, strlen(str1)));
    return 0;
}
