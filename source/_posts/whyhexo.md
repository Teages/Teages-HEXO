---
title: 【博客】为什么选择HEXO
date: 2019-03-24 11:40:16
reward: true
tags:
  - Daily
  - Hexo
---

> 主要原因还不是没钱续费emmm

>好吧不管主要原因，但是本人马上就要高三了。
在高三时抽空更新博客显然是不现实的。
因此就把WordPress的文章迁移过来了。

>希望我高三不要再咕咕咕了~~（真诚）~~

下面讲讲我搭建这玩意踩了多少坑。。。
<!-- more -->

* * *
  
## 安装

一开始是在windows下直接上nodejs的，然后发现想把环境带着走真的是极其困难

所以直接用了腾讯云的Cloud Studio，安装时直接用wordpress环境，然后

```bash
sudo rm -rf ./*
```
清理掉wordpress文件后(删库跑路#(滑稽))

```bash
apt-get install nodejs
apt-get install npm

//如果是Ubuntu
curl -sL https://deb.nodesource.com/setup_12.x | sudo -E bash  - 
sudo apt-get install -y nodejs

npm install hexo --save
npm install hexo-cli --save
npm install hexo-server --save
npm install hexo--deployer-git --save
mkdir ./tmp/
cd ./tmp
hexo init 
npm install
mv ./* ../
cd .. && rmdir ./tmp
hexo-server
```

一气呵成安装hexo，记得要一句句复制
* * *
## 个性化定制

这里我用过[Instde主题](https://github.com/elmorec/hexo-theme-inside),
优点是 自定义相对较高,而且也没有很大众脸,官方的说明也比较详细

当然你也可以用极度大众化的[Next主题](https://github.com/theme-next/hexo-theme-next),这个主题国内的教程已经很多了,这里不做叙述

我现在使用的是一个很久没更新的主题[Yilia主题](https://github.com/litten/hexo-theme-yilia),本博客当前就在用这个,所以主要说这个

### Yilia 个性化
可以说，Yilia是个被作者完全抛弃的产品

官方文档删剩个Readme.md介绍,wiki也全删掉了,而且自定义PWA也没加上

这里先搞些小修小补

#### 修复Gitment
~~~


~~~



* * *
过会或许会更新。。。