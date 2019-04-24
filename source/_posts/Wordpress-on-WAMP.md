---
title: WAMP安装和搭建WordPress
categories:
  - wordpress
date: 2018-12-13 13:44:43
reward: true
tags:
---

> 可能不定期更新，也有可能会咕掉  

    嗯因为某些原因，原来的Ubuntu Server重装成了Windows Server增强版。。。

    被迫上手WAMPserver。。。

    别问我为什么不用宝塔，BUG极多，对新人一点都不友好。。。   

* * *

      

      

> 好了正文开始,我使用的是腾讯云的学生体验版，安装的是Windows Server 2016数据中心版，也就是增强版，安装了全部的系统更新。

安装WAMP  

* * *

  

我使用的是WAMPserver3.1.4，新人直接全部默认就行，安装前别忘了补好VC++2005-2017的库

缺一个都不行，如果没装库就安装WAMP那就删掉WAMP，安装库后再重新装WAMP吧。。。

PS:下面的目录都是以C:\\Server-Data\\wamp64 为安装目录  

  

装好WAMP直接启动就行，安装后可以尝试访问[http://localhost](http://localhost)看看服务器是否搭建成功。

如果内网能访问外网不能那可能是80端口被防火墙封锁了。

  

    如果都没问题那就可以开始下一步了
* * *
    写到这里就因为服务器的关系换成了Hexo
    或许会用记忆写完剩下的