int main() {
    printf("Enter flag: ");
    char input[256];
    scanf("%256s", input);
    if (strcmp(input, "CTF{th15_15_345y?}") == 0) {
        printf("%s is the flag\n", input);
    }
    else {
        puts("SO NOOB");
    }
    return 0;
}
