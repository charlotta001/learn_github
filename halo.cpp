#include "halo.h"

#include<iostream>

int hitung(){
  
  int a, b;
  std::cout<<"Masukkan angka yang akan dijumlah: ";
  std::cin>>a;
  std::cout<<"Masukkan angka yang akan dijumlahkan: ";
  std::cin>>b;
  a += b;
  std::cout<<std::endl<<a;

  return a;
}
