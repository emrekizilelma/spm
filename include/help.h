#ifndef HELP_H
#define HELP_H

struct SPM {
    const char* name;
    const char* version;
};
extern struct SPM spm;

void help_menu(void);

#endif