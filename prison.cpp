/*

Author: Abhinav Thakur
Email:  compilepeace@gmail.com

prison.cpp design description (abstract)
A simple container implementation having basic challenges -

> mount a new /procfs inside PRISON_FS
= mount(2)

> Any process running inside container using pathname starting with '/' should resolve to prison's custom FS.
= chroot() + chdir(NEW_ROOT) (needs CAP_SYS_CHROOT capabilities(7))

> Restrict what a process inside container can see! 
= create a new user namespaces(7)

> Deploy resource limits for container & its children/exec'd processes !  
= control groups - cgroups(7)

> Restrict what syscalls can be performed by container processes !
= seccomp(2), bpf(2) 

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <errno.h>
#include <stdint.h>


/* MACROS */

/* function prototypes */

/* global & external variables */
extern char **environ;


/* DRIVER */
int main (int argc, char *argv[])
{

}
