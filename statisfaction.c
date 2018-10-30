#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
  struct stat * buf = malloc(sizeof(struct stat));
  printf("\n%d\n",stat("./statisfaction.c", buf));
  printf("size: %ld\n", buf->st_size);
  printf("Permissions: %d\n", buf->st_mode);
  time_t *tiem = &(buf->st_atime);
  printf("Time last accessed: %s",ctime(tiem));

  
}
