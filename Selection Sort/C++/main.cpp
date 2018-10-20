#include<iostream>

void Sort(int length,int tab[]){
  for(int i=0;i < length;i++){
    int index=-1;
    int smallest = tab[i];
    for (int j = i; j < length; j++) {
      if(tab[j] < smallest){
      
        smallest = tab[j];
        index=j;
      }
    }
    int temp = tab[i];
    tab[i]=smallest;
    tab[index]=temp;
  }
  for (int i = 0; i < length; i++) {
      std::cout << tab[i]<<" ";
  }
}

int main(int argc, char const *argv[]) {
  int a[8]={2,3,5,4,10,-10,1,4};
  Sort(8,a);
  return 0;
}
