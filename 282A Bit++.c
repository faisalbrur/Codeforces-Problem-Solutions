#include <stdio.h>
#include <string.h>
int main(){
	
	char str[100];
	int t, n;

	scanf("%d", &t);
	n = 0;

	for(int i = 1; i<=t; i++){
        scanf("%s", str);

        if(strcmp(str, "X++") == 0){
        	n++;
        }
        if(strcmp(str, "++X") == 0){
           ++n;
        }

        if(strcmp(str, "X--") == 0){
        	n--;
        }
        if(strcmp(str, "--X") == 0){
           --n;
        }     
	}
	
   printf("%d\n", n);

  return 0;
}
