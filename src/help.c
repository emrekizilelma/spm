#include <stdio.h>
#include "help.h"

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