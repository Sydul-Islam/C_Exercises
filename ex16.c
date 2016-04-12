#include <stdio.h>
main()
{
    char ch;
    printf("Please input a letter : ");
    scanf("%c", &ch);
    if(ch >= 'a' && ch <= 'z') {
        printf("%c is the small letter\n", ch);
    }
    else{
        printf("%c is the capital letter\n", ch);
    }
    return 0;
}
