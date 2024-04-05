#include <stdio.h>
#include <stdbool.h>

bool CheckPalindrome(int x);

int main() {
    
    int x;
    bool a;

    printf("Enter integer: ");
    scanf("%d", &x);

    a = CheckPalindrome(x);
    
    if (a==true)
        printf("true \n");
    else
        printf("false \n");

    return 0;
}

bool CheckPalindrome(int x) {
    
    int q,r,d=0;
   
    q = x;

    if (x<0)
        return false;
        
    while(x!=0) {
        r=x%10;
        x=x-r;
        x=x/10;
        d = d*10 + r;
    }

    if (d==q)
        return true;
    else
        return false;
}
