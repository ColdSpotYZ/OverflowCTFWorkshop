  
int main() {

    char target[] = {98 ,118 ,101 ,95 ,86 ,82 ,78 ,68 ,69 ,117 ,90 ,89 ,68 ,90 ,74 ,111 ,84 ,72 ,108 ,88 ,84 ,75};
    char input[256];

    printf("Enter flag: ");
    scanf("%255s", input);
    for (int i = 0; i < strlen(input); ++i) {
        input[i] ^= 33 + i;
    }

    if (strlen(input) == sizeof(target) && memcmp(target, input, sizeof(target)) == 0) {
        puts("Correct");
    }
    else
        puts("NOOB");

    return 0;
}
