#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b){
  if(((int *)a)[1] == ((int *)b)[1]){
    return ((int * )a)[0] - ((int *)b)[0];
  }
  return ((int *)a)[1] - ((int *)b)[1];
}
int main(){
  int n;
  int cnt = 0;
  int end = 0;
  scanf("%d", &n);
  int arr[n][2];
  for(int i = 0; i < n; i++){
    scanf("%d %d", &arr[i][0], &arr[i][1]);
  }
  qsort(arr, n, sizeof(arr[0]), cmp);
  for(int i = 0; i < n; i++){
    if(arr[i][0] >= end){
      end = arr[i][1];
      cnt++;
    }
  }
  printf("%d", cnt);
}