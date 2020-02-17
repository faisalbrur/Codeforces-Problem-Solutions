#include <stdio.h>
int main(){
	
	int t, n, a, b, c, cnt = 0;

	scanf("%d", &t);
     for(int i = 1; i <= t; i++){
               scanf("%d %d %d", &a, &b, &c);
               if((a==1 && b== 1) || (b== 1 && c == 1) || (c== 1 && a == 1)){
                 cnt++;
               }
     }
     printf("%d\n", cnt);
  return 0;
}
