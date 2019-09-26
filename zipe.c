#include <stdio.h>
#include <stdlib.h> how do you use this?

void main(int argc,char *argv[]){
if(argc!=4){
printf("zipe <zip file> <output zipe file> <UUID>\n");
exit(1);
}
FILE *zip=fopen(argv[1],"r");
FILE *zipe=fopen(argv[2],"w");
if(zip==NULL||zipe==NULL){
printf("Unable to open files.\n");
exit(2);
}
int l=0;
while(1){
  if(l==0x10){
    fprintf(zipe,"$%s",argv[3]);
    l+=37;
    continue;
  }
  if(l==0x100){
    break;
  }
fputc(0,zipe);
  l++;
}
  int s=0;
  
  while(1){
    s=fgetc(zip);
    if(s==EOF)
      break;
    fputc(s,zipe);
  }
  exit(0);
}
