#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>
#include "setup.h"
#define SCRIPT_VERSION "1.0 [ Kernel Setup Settings Profile ]"

void Usage() {
    printf("Encore Setup %s - System Performance Optimization Utility\n", SCRIPT_VERSION);
    printf("Usage: Neslet Setup [OPTION]\n\n");
    printf("Options:\n");
    printf("  -O           Apply Kernel setup for Mobile Legends\n");
    printf("  -B           Apply Kernel setup for PUBG Mobile\n");
    printf("  -P           Apply Kernel setup for Genshin Impact\n");
    printf("  -L           Apply Kernel setup for Unifersal\n");
    printf("  -C           Clear app caches (free storage & improve responsiveness)\n");   
    printf("  -h, --help   Show this help message and exit\n\n");
    printf("Description:\n");
    printf("  Encore Setup is a lightweight utility to dynamically improve\n");
    printf("  system performance on Android devices based on the selected game.\n");
    printf("  This utility sets specific system properties and clears app caches\n");
    printf("  for maximum performance.\n\n");
    printf("Examples:\n");
    printf("  Kernel setup profile for Mobile Legends:\n");
    printf("      Encore Setup -O\n\n");
    printf("  Kernel setup profile for PUBG:\n");
    printf("      Encore Setup -B\n\n");
    printf("  Kernel setup profile for Genshin Impact:\n");
    printf("      Encore Setup -P\n\n");
    printf("  Kernel setup profile Unifersal:\n");
    printf("      Encore Setup -L\n\n");
    printf("  Clear app caches:\n");
    printf("      Encore Setup -C\n\n");
    printf("System Requirements:\n");
    printf("  - Root access may be required to set system properties.\n");
    printf("  - Compatible with Android devices that support ADB and shell tools.\n\n");
    printf("Additional Information:\n");
    printf("  Developer Docs: https://developer.android.com/studio/command-line/adb\n");
    printf("  Discussion Forum: https://forum.xda-developers.com\n");
    printf("  Q&A: https://stackoverflow.com/questions/tagged/android\n\n");
}


int main(int argc, char *argv[]) {
    if (argc < 2) {
        Usage();
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-O") == 0) {
            sleep(1);
            printf("- Applying Kernel setup for Mobile Legends Profile\n");
            Mobile_Legends();
        } else if (strcmp(argv[i], "-B") == 0) {
            sleep(1);
            printf("- Applying Kernel setup for PUBG Mobile Profile\n");
            PUBG_Mobile();
        } else if (strcmp(argv[i], "-P") == 0) {
            sleep(1);
            printf("- Applying Kernel setup for Genshin Impact Profile\n");
            Genshin_Impact();
        } else if (strcmp(argv[i], "-L") == 0) {
            sleep(1);
            printf("- Applying Kernel setup for Unifersal Profile\n");
            Unifersal();
        } else if (strcmp(argv[i], "-C") == 0) {
            sleep(1);
            printf("- Clearing Application Caches\n");
            clearCache();
        } else if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
            Usage();
        } else {
            printf("Unknown option: %s\n", argv[i]);
            Usage();
            return 1;
        }
    }

    sleep(1);
    printf("\n");
    printf(" ⚠️ This module is protected by copyright and is\n");
    printf(" intended for use by regular users only. Any use of\n");
    printf(" this module, including its code, design, or features,\n");
    printf(" by other developers without written permission from\n");
    printf(" the copyright owner is strictly prohibited.\n");
    printf("______________________________________________(+)\n\n");
    
    
    return 0;
}