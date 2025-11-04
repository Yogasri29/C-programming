/*write a c program to read int,float,char and string*/

int main() {
    int integer;
    float floatingPoint;
    char character;
    char string[100]; 

    printf("Enter an integer:");
    scanf("%d", &integer);

    printf("Enter a float:");
    scanf("%f", &floatingPoint);

    printf("Enter a character:");
    scanf(" %c", &character); 

    printf("Enter a string:");
    scanf("%s", &string);

    printf("Integer: %d\n", integer);
    printf("Float: %.2f\n", floatingPoint);
    printf("Character: %c\n", character);
    printf("String: %s\n", string);
return 0;}
