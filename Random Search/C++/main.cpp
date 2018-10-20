#include<iostream>
#include <stdlib.h>
int Search(int length,int tab[],int searchNum){

  for (int i = 0; i < 100; i++) {
    int j = rand() % length;
    if (tab[j]==searchNum) {
      return j+1;
    }
  }
  return -1;
}

int main(int argc, char const *argv[]) {
  int a[8]={2,3,5,4,10,-10,1,4};
  std::cout << Search(8,a,10);
  return 0;
}
