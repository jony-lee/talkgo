#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


void main(){
       	if (!vfork())
	       	sleep(100);
}
