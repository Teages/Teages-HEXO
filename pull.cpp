#include <cstdio>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
  system("sudo hexo clean && sudo hexo g");
  system("echo 按Y/y继续？");
  char a = ' ';
  while(a != 'Y' && a != 'y')cin >> a;
  system("sudo hexo d");
  system("echo Done!");
  return 0;
}