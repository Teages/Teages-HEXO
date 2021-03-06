---
title: 【题解】 洛谷P1603 斯诺登的密码
date: 2019-01-28 10:48:42
reward: true
tags:
  - Codes
  - Luogu
  - Daily
---

洛谷：[题目](https://www.luogu.org/problemnew/show/P1603)   
<!-- more -->

这道题其实非常地水  
  
这道题的主要思路就是对比库里的单词，然后根据公式计算就行  
  
总的来说应该也算贪心  
  
坑点在于  
  
    1. 有 非正规 的单词  
    2. 对于某些算法可能要开 long long  
  
(数据下载次数用完一脸蒙圈地卡了超久emmm)  
  
下面贴代码解析：  
  
首先是必要的头文件：  
  


```cpp
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

```
  
  
然后先录入正规单词，顺便开个空间存储数组  
  
tennum 数组是用来方便后面增位数的  
  
```cpp

string numstr[]={"one","two","three","four","five","six","seven",
          "eight","nine","ten","eleven","twelve","thirteen",
          "fourteen","fifteen","sixteen","seventeen",
          "eighteen","nineteen","twenty"};
ll tennum[]={1,100,10000,1000000,100000000,10000000000};
ll num[10];

```
  
下面是主要代码  
  
首先是将输入的字符串转换为数值  
```cpp

ll strtoint(string a){
  for (int i=0;i<20;i++){
    if(numstr[i]==a)return i+1;
  }//对正规单词的判断
  //下面是对特殊情况的判断
  if(a=="a")return 1;
  if(a=="both")return 2;
  if(a=="another")return 2;
  if(a=="first")return 1;
  if(a=="second")return 2;
  if(a=="third")return 3;
  //这个单词不表示数值就return 0
  return 0;
}

```
  
  
下面是主要部分：  
  
```cpp

int main(){
  string pwtmp;
  ll numtmp=0;
  //本来没必要开longlong的，但是不开longlong有可能导致下面计算会出玄学问题，所以还是浪费下
  int numi=0;//存储句子中有多少个代表数值的单词
  while(cin >> pwtmp){
    if (pwtmp == ".")   break;//读到句号句子结束
    numtmp = strtoint(pwtmp);
    if (numtmp != 0){
      num[numi]=(numtmp * numtmp)%100;//根据公式计算
      numi++;
    }
  }
  sort(num,num+numi);//将数值从小到大排序
  ll ans = 0;
  for (int i=0;i<numi;i++){
    ans =ans + num[i] * tennum[numi-i-1];
  }//数学计算，手写一下很好理解
    cout << ans;//输出结果，因为非数值单词都被标位0所以没必要排查
    return 0;
}
```

下面附AC完整代码  
  

```cpp
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;
string numstr[]={"one","two","three","four","five","six","seven",
                  "eight","nine","ten","eleven","twelve","thirteen",
                  "fourteen","fifteen","sixteen","seventeen",
                  "eighteen","nineteen","twenty"};
ll tennum[]={1,100,10000,1000000,100000000,10000000000};
ll num[10];
ll strtoint(string a){
  for (int i=0;i<20;i++){
    if(numstr[i]==a)return i+1;
  }//对正规单词的判断
  //下面是对特殊情况的判断
  if(a=="a")return 1;
  if(a=="both")return 2;
  if(a=="another")return 2;
  if(a=="first")return 1;
  if(a=="second")return 2;
  if(a=="third")return 3;
  //这个单词不表示数值就return 0
  return 0;
}
int main(){
  string pwtmp;
  ll numtmp=0;
  //本来没必要开longlong的，但是不开longlong有可能导致下面计算会出玄学问题，所以还是浪费下
  int numi=0;//存储句子中有多少个代表数值的单词
  while(cin >> pwtmp){
    if (pwtmp == ".")   break;//读到句号句子结束
    numtmp = strtoint(pwtmp);
    if (numtmp != 0){
      num[numi]=(numtmp * numtmp)%100;//根据公式计算
      numi++;
    }
  }
  sort(num,num+numi);//将数值从小到大排序
  ll ans = 0;
  for (int i=0;i<numi;i++){
    ans =ans + num[i] * tennum[numi-i-1];
  }//数学计算，手写一下很好理解
    cout << ans;//输出结果，因为非数值单词都被标位0所以没必要排查
    return 0;
}
```