#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
  return *(int*)a-*(int*)b;
}

int main(void) {
  int n[9];
  int s[7];
  int i=0, j=0, x=0, ii=0, sum=0;
  for(i=0; i<9; i++){
    scanf("%d", &n[i]);
    sum+=n[i];
    scanf("");
  }
  for(i=0; i<9; i++){
    for(j=i+1; j<9; j++){
        if((sum-n[i]-n[j])==100){
          goto st;
        }
    }
  }
  st :
  for(x=0; x<9; x++){
    if(x==i||x==j) continue;
    s[ii]=n[x];
    ii++;
  }
  qsort(s, 7, sizeof(s[0]), compare);
  for(x=0; x<7; x++)
    printf("%d\n", s[x]);
  return 0;
}
