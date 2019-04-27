#include <cstdio>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
  system("hexo clean && hexo g");
  system("echo 按Y/y继续？");
  char a = ' ';
  while(a != 'Y' && a != 'y')cin >> a;
  system("hexo d");
  system("echo Done! && echo Now Doing Clean!");
  system("hexo clean");
  system("echo Cleaned!See you next time!");
  return 0;
}