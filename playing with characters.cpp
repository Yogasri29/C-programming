/*write a c program on Playing with Characters*/
#include <stdio.h>

int main() {
    char ch;
    char str[50];
    char sentence[100];

    scanf("%c", &ch);
    getchar();

    scanf("%s", str);
    getchar();
    fgets(sentence, sizeof(sentence), stdin);

    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s", sentence);

}
