#include <stdio.h>
#include <stdlib.h>

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
fputc(// WORK IN PROGRESS
}
}
