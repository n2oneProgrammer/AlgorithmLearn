#include<iostream>

void Sort(int length,int tab[]){
  bool swapped;
  do
  {
    swapped=false;
    for (int j = 0; j < length-1; j++) {
      if(tab[j] > tab[j+1]){
        int temp = tab[j];
        tab[j]=tab[j+1];
        tab[j+1]=temp;
        swapped=true;
      }
    }
  }
  while (swapped);


  for (int i = 0; i < length; i++) {
      std::cout << tab[i]<<" ";
  }
}

int main(int argc, char const *argv[]) {
  int a[8]={2,3,5,4,10,-10,1,4};
  Sort(8,a);
  return 0;
}
