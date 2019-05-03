---
title: 【WTG】Windows To GO 安装指北
categories:
  - Daily
date: 2019-01-30 16:57:33
reward: true
tags:
---

> 注意：如果您的预算不是很够，
> 
> 可能接下来WTG的制作过程中您可能会有大量不良情绪

* * *

## 预备阶段

首先先看下你有多少预算

如果只是为了玩玩建议买闪迪的CZ880，价格大概120+
如果是真的要当生产力工具那就建议购入Microsoft官方建议的U盘了，[官方文档](https://docs.microsoft.com/zh-cn/windows/deployment/planning/best-practice-recommendations-for-windows-to-go "官方文档")

移动硬盘也可以制作，但是经过测试似乎开不了机，得等Microsoft修复了(似乎是1809LTSC特性)

至于想用随手捡的U盘做win to go ，希望你有大量的耐心。。。

其实步骤也是很简单的

## 正式开始

#### 第一步：数据备份

数据在任何时候都是不能抛弃的，如果你的u盘是空的当我没说
需要注意的是，windows自带的安装工具会将你的磁盘分区表完全擦除，请注意备份其他分区的信息
~~当然Dism++是完全不需要擦分区表的~~ 但还是请你备份整个磁盘的数据

> 在下一步开始前 请确认你所有的数据都备份完成 并且放在你认为足够安全的地方

#### 第二步：刷写系统文件

这一步建议在Windows 10下完成

这一步有两个选择：Dism++ 或者 Windows企业版自带的制作器

windows自带的在这里不做叙述，因为真的只是走个流程

##### Dism安装步骤
~~~
双击下载好的ISO镜像,Windows会自动挂载为虚拟磁盘
打开dism++
进入工具箱
选择系统还原
镜像路径选择虚拟光驱里sources内的install.wim(或者是install.esd)
下面的路径选择你的u盘(请再三确认)
再选上 WindowsToGo 添加引导 格式化
(可以不选格式化,但是会有失败几率)
释放完成就制作成功了
~~~

制作完成以后从U盘启动,就像普通Windows一样激活就可以了