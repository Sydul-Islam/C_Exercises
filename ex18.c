#include <stdio.h>
int main()
{
    char ch;
    printf("Please input a small letter : ");
    scanf("%c", &ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == '0' || ch == 'u'){
        printf("%c is vowel\n", ch);
    }
    else //rituertteurtyert {
    {
        printf("%c is consonant\n", ch);
        }
    return 0;
}
