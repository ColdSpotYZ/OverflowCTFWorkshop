int main() {

    char target[] = {67,84,70,123,115,116,105,108,108,95,113,117,105,116,101,95,101,122,95,108,97,125};
    char input[256];

    printf("Enter flag: ");
    scanf("%255s", input);

    if (strlen(input) == sizeof(target) && memcmp(target, input, sizeof(target)) == 0) {
        puts("Correct");
    }
    else
        puts("NOOB");

    return 0;
}
