#include "../interfaces/print.h"

void kernel_main() {
    print_clear();
    print_str("starting 64-bit kernel!");
    print_str("Kernel successfully loaded");
}