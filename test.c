#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <emscripten.h>

extern void bof(char *p1, char *p2){
 char bof1[16];
 char bof2[16];
 strcpy(bof1,p1);
 strcpy(bof2,p2);
 EM_ASM({
 document.getElementById("XXS").innerHTML =(Pointer_stringify($0,$1));
 }, bof1,strlen(bof1));

 }

int main(){
	return 1;
}
