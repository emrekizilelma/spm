#include <stdio.h>
#include <string.h>

struct SPM {
    const char* name;
    const char* version;
};

struct SPM spm = {
    .name = "The Stupid Package Manager",
    .version = "v-0.0.1-alpha",
};

void help_menu(void) {
    printf("--*--*-- %s %s --*--*--\n\n", spm.name, spm.version);
    printf("DESCRIPTION\n\n\tSource based package manager system.\n\n");
    printf("COMMANDS\n\t\n");
    printf("  --help\t\tShow the help menu\n\n");
    printf("  --version\t\tShow the version of program\n\n");
    printf("  --update\t\tCheck the update\n\n");
    printf("  --install <package>\tInstall the package\n\n");
    printf("  --remove  <package>\tRemove the package\n\n");
}
int main(int argc, char* argv[]) {
    if(argc == 1) { printf("[ERROR] No arguments passed! Please see by typing spm help.\n\n"); }

    else if(strcmp(argv[1], "help") == 0) { help_menu(); }
    else if(strcmp(argv[1], "update") == 0) { printf("Checking the update...\n"); }
    else if(strcmp(argv[1], "version") == 0) { printf("%s\n", spm.version); }
    else if(strcmp(argv[1], "install") == 0) {
        if(argc < 3) {
            printf("missing <package> line\n");
        }
        else { printf("Installing package... '%s'\n", argv[2]);}
    }
    else if(strcmp(argv[1], "remove") == 0) {
        if(argc < 3){
            printf("Missing <package> line\n");
        }
        else { printf("Removing package...'%s'\n", argv[2]); } }

    else { printf("Unknown command '%s' See spm help\n", argv[1]); }

    return 0;
}