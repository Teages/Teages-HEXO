---
title: 手把手教你Cytoid制谱
date: 2020-02-11 11:59:27
tags: Cytoid
---
# 前言 

鉴于很多人不会做Cytoid的谱面,为了方便学习交流,特撰写本教程

无论什么时候,看一下官方wiki总是有帮助的.

传送门:[官方wiki](https://github.com/Teages/Cytoid-wiki-Chinese/)



# 准备工作

>  做谱前必须要有的

1. 你的脑子
2. 耐心
3. 一部运行WIndows 10的PC
4. 一些乐理知识(了解节拍,BPM这些就足够了)
5. 你要做谱的音频(最好是mp3),搜索它的各项数据(例如:参与作曲的人)

> 免责声明:在你做谱之前,请注意避免版权纠纷,发生的任何纠纷都与Cytoid和CytoidIO无关!

> Tips: 你准备的音频如果太过复杂,可能会增加做谱难度,请选择力所能及的音频

# 开始做谱

## 第一步 : 测量BPM

对于测量BPM,我们推荐使用[osu!](https://osu.ppy.sh/) (请不要下载osu!lazer,它不是一个完善的版本)

下面以osu!为例进行BPM测量,下载和安装osu!的步骤将被省略.

1. 打开osu!,选择Edit
2. 将你的mp3文件拖入osu!
3. 需要你输入歌曲信息时,直接取消(Cancel)
4. 进入timing
5. 按下空格键开始播放音频,同时跟着节拍按键盘上的 T 键.

按足够多次,你会得到一个相对准确的数.

> Tips:建议将这一步重复几次,因为如果BPM判断错误,你将难以制作出精良的谱面



## 第二步 : 调整音频

调整音频,我们推荐使用开源免费的工具[Audacity ®](https://www.audacityteam.org/)

> Q : 为什么我们要调整音频?
>
> A : 实际上,Cytoid需要0.9s来调整判定线,如果没有这段时间,note会出现得非常突然

实际上,你可以使用任何你习惯使用的音频编辑工具,我们将以Audacity为例

首先找到音频的第一个峰,删去前面的空白

![1](/posts-source/cytoid/pic/1.png)

然后打开 生成 - 静音 ![2](/posts-source/cytoid/pic/2.png)

在前面插入0.9s的静音

![3](/posts-source/cytoid/pic/3.png)

大功告成!请使用 *导出* 功能,将你的音频导出为多种格式.

下面是一些推荐格式

| 软件     | 支持的格式      |
| -------- | --------------- |
| Cytoid   | mp3(首选),ogg等 |
| Pctyx    | mp3(首选),wav等 |
| Cy2unity | ogg             |



## 第三步 : 开始制谱

这里有两种现代制谱器 : PCTyx 和 Cy2unity

编者建议使用PCTyx,因此教程以PCTyx为例

> Tips : Cy2unity 在其程序目录下自带了一份中文教程.

由于编者之前已经做过PCTyx使用的wiki翻译,因此这里照搬

> 源地址: https://github.com/Teages/Cytoid-wiki-Chinese/tree/master/guides/charting/pctyx
>
> 搬运开始



PCTyx是JCEXE制作的制谱程序,也是Project Thrynox的后作。该指南已针对C2格式标准进行了更新。

这是对PCTyx制谱的介绍。CrowFX（某些部分已过时）提供了更为详细和更简单的PCTyx指南，您可以在此处查看。

- [用户界面](https://sites.google.com/site/cytoidcommunity/guides/charting/introduction-pctyx/pctyx-user-interface-old)
- [制谱](https://sites.google.com/site/cytoidcommunity/guides/charting/introduction-pctyx/pctyx-charting-old)

> 译者:这两个页面因为过时所以没翻译,请自备工具访问







### 用户界面

#### I.启动



![img](/posts-source/cytoid/pic/pctyx/1.png)



**1.** 加载按钮（Loading）：打开/继续项目。您必须打开支持的音频文件才能开始制谱。

 支持的文件格式包括：

        **a.** 音频文件

- .mp3（Cytoid唯一支持的文件类型）
- .M4A
- .OGG



        **b.** 谱面文件

- .csv - 保存谱面时，程序会生成的文件类型。如果你正在制作一个c2格式的谱面，请使用csv文件。
- .cytus.txt - 用于Cytus 1和Cytoid的通用格式



        **c.** 背景视频（可选，不适用于Cytoid）

- .MP4
- .ogv



        **d.** 背景图像（PCtyx中可选，Cytoid上是强制性的）

- .JPG
- .png



**2.** 问号(?)：为[http://cytus-fanon.wikia.com/wiki/User_blog](http://cytus-fanon.wikia.com/wiki/User_blog)的超链接。这用于检查PCtyx的更新，或向开发人员JCEXE询问/报告错误。

要启动新项目，请单击加载按钮，然后选择谱面所需的音频文件。







#### II。编辑

#####     A）文件选项界面 



![img](/posts-source/cytoid/pic/pctyx/2.png)



**1.** 扫描线按钮（Scanline）：转到扫描线界面。

**2.** 加载（Load）：加载您需要的更多文件。

**3.** 保存（Save）：保存.csv文件。建议您停止制谱时，或者如果您要长时间制作谱面时每隔一小时保存一次，以防意外发生。如果您使用C2格式绘制谱面，则需要.csv才能使转换器正常工作。

**4.** 导出（Export）：仅在制作c1谱面时使用，这会将所有谱面数据转换为c1格式(将删除C2特性的note)。



##### B）扫描线界面



![img](/posts-source/cytoid/pic/pctyx/9.png)



**1.** File：如果需要添加其他文件，按此键找到第二个界面。

**2.** Editor：使用它来转到编辑器。

**3.** Grid：使用它来转到网格。

**4.** BPM：扫描线的速度，或歌曲的BPM。在这里插入bpm，但是如果你想让扫描线与原始的bpm不同，我建议只使用x0.5，x1.0，x1.5或x2.0的倍数。可以使用任何其他内容，但请确保扫描线处于同步状态。

**5.** Shift：调整歌曲的偏移，使扫描线折返时可以匹配音乐的节拍。插入音乐第一个重拍的时间。如果使用offset，只需将其设置为0即可。(为保证兼容性,请尽量设置为0)

**6.** Offset：在此处插入偏移量。它与osu!的偏移量相同。如果shift为1.131秒，则偏移量为1131.建议使用shift。

**7.** Confirm：确认您的更改。

此处未列出：Direction

单击它，您会看到3个不同的选项：Blank，U / D和D / U。 如果您希望扫描线从顶部开始，则选择U / D。如果您希望扫描线从底部开始，请选择D / U。Blank是你不在乎的时候扫线方向的时候的选项。除非你知道你在想要什么效果，否则在大多数情况下将它留空是更好的。



##### C）网格对齐屏幕 



![img](/posts-source/cytoid/pic/pctyx/10.png)



**1.** 行（Row）：取决于你的BPM，8和16是4/4拍音乐制谱的常用行数。如果您没有选择正确的grid，您将很难将note对音。

**2.** 列（Column）：制谱时你想要多少列，18,6,24,12和20是很常用的值。

**3.** BPM：没有意义。

**4.** Shift（网格）：设置为0.001。



##### D）编辑界面



![img](/posts-source/cytoid/pic/pctyx/12.png)



**1.** 游玩测试（Playtest）：查看您的谱面。

**2.** 移动y轴：垂直移动note。

**3.** 移动x轴：水平移动note。

**4.** 点击note（click）：将您的note类型更改为click，也可用于删除note。

**5.** 锁链头note（drag）：将note类型更改为锁链头。您可以按Q键分配锁链ID以增加ID值，按E键以减少ID值。具有相同ID值的锁链将被连接，而不同的锁链将不会链接。请参考谱面格式的锁链部分。

**6.** 子锁链note：将note类型更改为子锁链note类型。与5类似操作。

**7.** 长按note（hold）：将您的note类型更改为长按note类型。使用Q增加hold时值，使用E减少hold时值。您可以使用右键单击和左键单击实现相同的功能。

**8.** 黄条（长按）note（Long hold）：将您的note类型更改为黄条note。仅适用于c2格式。使用c2类型note时，请务必保存为.csv。在写谱过程中，黄条note建议使用长按note替代，因为csv到c2的谱面格式转换器会自动转换跨屏hold为黄条（或者hold在一屏中的时间过长）。

**9.** 侧划note（flick）：将note类型更改为侧划note。仅适用于c2格式。

**10.** 自动对齐：取消选择时，note不会自动对齐到最近的网格。水平移动note时不建议这样做。

**11.** 撤销：撤销您对该页面的更改。

**12.** 页面导航：拖动小圆圈，您可以使用它来浏览所有页面。当您在页面中移动1页时，请使用向左箭头和向右箭头。



![img](/posts-source/cytoid/pic/pctyx/13.png)

##### I）放置note，使用hold

可以使用数字8对应的选项首先放置note。单击它或按键盘上的“2”。

- 可以从两侧拖动note以将其作为click（note 1）。两侧的note超出了谱面范围，并且不会出现在游戏中。
- 现有note可以水平移动（note 4）。按住左键单击按钮的同时拖动note，然后将note移动到所需位置。note上的值显示了note在x轴上的位置。x轴note的可游玩范围是x∈[0,1]。

可以使用数字9对应的选项移动note出现的时间。单击它或按键盘上的“1”。

- 现有note可以垂直移动（note 5）。按住左键单击按钮的同时拖动note，然后将note移动到所需位置。note上的值显示note的时间（以秒为单位）。

您可以使用左键和右键单击来调整hold的时值。

- 在note 4中，您可以使用左键单击（增加）和右键单击（减少）来调整hold时值。您可以添加/删除的保留时间取决于您的网格大小。
- 您可以在按“E”键代替左键单击，按“Q”键代替右键单击。这也适用于为drag分配ID值时的操作。

要将note更改回click，请按键盘上的“3”并单击要还原的note。这会将其更改为点按note。如果您要删除note，并且该note为click，点击该note并重复一次上述操作。

Note 2和3是锁链头和子锁链的示例。

Note 6和7仅适用于c2格式的谱面。Note 6是long hold（或者跨屏hold），note 7表示flick。







![img](/posts-source/cytoid/pic/pctyx/14.png)

![img](/posts-source/cytoid/pic/pctyx/11.png)

##### II）锁链

如果y轴上的一个页面上有多个锁链，想要锁链不连接，当光标在note上时，按Q或E为每个note分配一个“连接值”。具有相同值的那些note将被连接，而具有不同值的那些将不会。请注意，子锁链note不能与锁链头相关联，但子锁链可以与子锁链相关联。这是一个例子：

- **在任何情况下** ID值时，锁链头1都不能与锁链头2连接。
- 子锁链3 **在任何情况下**都不能与锁链头4连接。
- 锁链头2：ID值是**不同的**时，不能与子锁链3连接。
- 当ID值**在任何情况下**都相同时，子锁链8和子锁链9无法连接。如果它们具有相同的ID值，则两个子锁链将从Playtest中**隐藏**。
- 如果锁链头1和2以及锁链头2的ID值相同，这将导致PCtyx中的错误。**请不要这样做**。
- 如果锁链头4是子锁链，并且子锁链1,3,4有相同的ID值，则**所有三个note将被链接。**
- 跨屏锁链会在note有**相同的ID值**且**无头锁链存在**的情况下运转。

> 搬运结束

显然,PCTyx的存档文件不能直接导入Cytoid,我们需要一些转换,再次之前,让我们了解一下Cytoid读取的文件应该是怎样的

## 第三步 : 让Cytoid读取你的谱面

在[Cytoid.io](https://cytoid.io/)上,你可以下载各种玩家制作的千奇百怪的谱面.你下载到的文件通常以*.cytoidlevel*为后缀

cytoidlevel文件本质上是一个zip文件,所以我们可以把它的后缀改成 *.zip* 后,用解压软件打开.

我们以[Ecstatic](https://cytoid.io/levels/io.cytoid.ecstatic)为例

一个cytoidlevel文件里应该包括这些:

![4](/posts-source/cytoid/pic/4.jpg)



#### 将.CSV文件转换为Cytoid接受的样子

我们这里使用Lumi的转换器

 [Windows版本](/posts-source/cytoid/cytoid/other/PCtyxToC2_Lumi_Windows.zip)   [MacOS版本](/posts-source/cytoid/other/PCtyxToC2_Lumi_macOS.zip) 

请先安装java8!!!不推荐其他版本!!!

以Windows版本为例

运行PCtyxToC2.bat文件,会打开一个CMD窗口

输入你的PCTyx存档位置(例如C:/1.csv),回车.

输入你想输出的文件路径(例如C:/1.easy.txt),回车.

输入y,回车

输入你的谱面bpm

输入一开始的速度(如果你谱面一开始就变速,就输入变速倍数,否则就1)

大功告成!

看不懂?

没关系,这里有个视频

<video src="/posts-source/cytoid/video/1.mp4"></video>
#### Level.json *

这是官方的level.json格式.**请确保您不随意删除原来的文本.** 否则,您的谱面可能随时被删除,您的帐户可能会因多次违规而被封禁.

~~~json
{
  
  "version": 1,
  "schema_version": 2,

  "id": " ",

  "title": "",
  "title_localized": "",

  "artist": "",
  "artist_localized": "",
  "artist_source": "",
  "illustrator": "",
  "illustrator_source": "",

  "charter": "",
  
  "music": {
    "path": "music.mp3"
  },
  "music_preview": {
    "path": "preview.mp3"
  },
  "background": {
    "path": "background.jpg"
  },
  "charts": [
    {
      "type": "easy",
      "name": " ",
      "difficulty": 1,
      "path": "chart.easy.txt"
    },
    {
      "type": "hard",
      "name": " ",
      "difficulty": 9,
      "path": "chart.hard.txt"
    },
    {
      "type": "extreme",
      "name": " ",
      "difficulty": 15,
      "path": "chart.extreme.txt"
    }
  ]
  
}
~~~
看不懂?大丈夫!(没问题)

这里有模板,把你的信息换上去就是.

> 下面部分内容摘自官方wiki翻译

这是手动填写它的方式。手写比用编译器编写要好得多，因为**你不需要为它下载额外的软件**，更不用说**使用Cytoid谱面编译器的缺陷**（必须给它管理员权限）等等。在大多数情况下，手写的速度也要快得多，因此强烈推荐。请注意，“path”部分中的任何名称不必与示例相同，但音频的“path”和图像必须为.mp3（对于音频，不建议使用.wav）和.jpg / .png（用于图像）。

使用此作为参考指南。由于情况有可能不同，让我回答您下面可能遇到的所有问题。

请根据实际情况替换两个"-"里面的内容,并删除"-":

```json
{  
"version": -谱面版本号_纯数字-,
  "schema_version": 2,

  "id": "-你的cytoid账号-.-谱面名字-",
  
  "title": "-音乐标题-",
  "title_localized": "-音乐英文名-",

  "artist": "-曲师-",
  "artist_localized": "--曲师英文名-",
  "artist_source": "-曲师的链接-",

  "illustrator": "-画师-",
  "illustrator_source": "-画师的链接-",

  "charter": "-你的名字-",
  
  "music": {
    "path": "-音乐名称_.MP3_确保名称和音乐文件一致-"
  },
  "music_preview": {
    "path": "-预览音乐名称_.MP3_同上-"
  },
  "background": {
    "path": "-封面名称_.png or .jpg_同上-"
  },
  "charts": [
    {
      "type": "easy",
      "name": "-自定义难度名称，不需要则不填-"
      "difficulty": -难度等级_纯数字-,
      "path": "-谱面位置-"
    },
    {
      "type": "hard",
   "name": "-自定义难度名称-"
      "difficulty": -难度等级_纯数字-,
      "path": "-谱面位置-"
    },
    {
      "name": "-自定义难度名称-"
      "difficulty": -难度等级_纯数字-,
      "path": "-谱面位置-"
    }
  ]
  
}
```

##### 常问问题：

###### 问：我不需要3个难度。

A.删除不需要的难度，但请确保删除结尾逗号。例如，假设您只需要hard难度：

```
  "charts": [
    {
      "type": "easy",
    "name": "Lunatic"
      "difficulty": 9,
      "path": "lunatic.chart"
    },
    {
      "type": "hard",
   "name": "Very Hard"
      "difficulty": 10,
      "path": "hard.chart"
    },
    {
      "type": "extreme",
   "name": "Extreme Overload"
      "difficulty": 12,
      "path": "extreme.chart"
    }
  ]
```

在这里，你可以删除这样的部分。如果要删除extreme难度，请务必删除结束逗号！

```
  "charts": [
    {
      "type": "hard",
   "name": "Very Hard"
      "difficulty": 10,
      "path": "hard.chart"
    }
  ]
```



###### 问：如何添加故事板？

答：如果每个难度没有超过2个不同的故事板，则无需将其包含在json中。但是，如果你有第3个故事板，那么

```
    {
      "type": "extreme",
      "name": "Extreme Overload",
      "difficulty": 15,
      "path": "extreme.chart",
      },
      "storyboard": {
       "path": "storyboard3.json"
      }
```

可以为不同谱面添加不同的故事板。storyboard.json的名称不一定是“storyboard3.json”。

###### 问：我想为每个级别使用不同的音频文件，我该怎么办？

A.你可以像这样使用music_override：

```
    {
      "type": "extreme",
      "name": "Extreme Overload",
      "difficulty": 15,
      "path": "extreme.chart",
      "music_override": {
        "path": "music1.mp3"
      },
      "storyboard": {
       "path": "storyboard3.json"
      }
    }
```

添加music_override部分，并将要播放的音乐的“path”放在上面。



至于其他文件,直接替换就是

最后打包成.zip,然后改后缀为.cytoidlecel,你的谱面就打包好了,快上传到CytoidIO吧!



## 需要注意的

以下摘自官方wiki翻译

> 译者前言: 只要你做出来的谱面你自己能FC,那就是正确的

### 谱面和你



Cytoid社区各成员的指南



#### 介绍

这是制谱的指南,**而不是一定**要这样制谱.您可以根据需要制谱.如果你愿意的话,可以像地狱一样把所有东西都拖上去,判断你的谱面的人将是玩家,而不是其他.话虽如此,本指南将指出是***如何使谱面不丑***.







#### 你需要先了解的事情 

作为一个谱师并不意味着你必须善于玩游戏.您只需要了解谱面的工作原理.您可以绘制高于技能水平的谱面,并让社区中的优秀玩家为您游玩谱面并从中获取反馈.事实上,在游戏中成绩“不好”,在制图时有自己的优势,所以如果有人MM了你的谱面,但你自己只能在得到90w时（事实上如果有人可以MM你的谱面,这意味着你已经完成了一个谱面）,请不要沮丧.

谱面有多种形式和形状.事实上,许多形式和形状都不能以方便的方式推广.每张谱面都是自己的艺术,应该以自己的方式欣赏.让谱面对你有利的因素对其他人来说并不相同,所以要保持开放的心态.话虽如此,每个人都需要遵循一条基线.







#### 谱面质量测量

##### 能玩

谱面至少必须是可玩的.通过可玩性,这意味着谱面中没有反趣的机制.具有反趣味的谱面意味着它的丑陋,不是质量差,而是纯粹的丑陋.反趣机制将在下面解释.整人/愚人/超难谱面被排除在外.

##### 气质

丑陋的谱面是具有反趣因素的谱面.坏谱面是主要填充了错误放置的note的谱面.体面谱面是**不**属于坏类别的谱面.好的谱面由玩家（以及社区）决定,现在通常通过cytoid.io的评级系统.~~乱塞~~超难谱面遵循不同的规则,因为它们更多的是用于欣赏而不是用于游玩.



***您作为谱师的要求是确保*** ***您的谱面不是丑陋的谱面***.

糟糕的谱面意味着你需要提高更多.但丑陋的谱面是无法忍受的.最后,***你作为一个谱师的工作是制作一个像样的谱面***.**一张好的谱面是社区认为这样的奖励**.（但是你应该总是瞄准好谱面,因为这对每个人来说都很有趣）.



#### 防止您的谱面变成丑陋的谱面

您需要先了解**反乐趣**的含义.反乐趣意味着玩家不会因为缺乏技能而被遗漏,而是因为谱面设计.由于反乐趣,你的谱面可以被认为是丑陋的.

有两件事会让人们声明你的谱面是丑陋的,无论如何,又名**反乐趣因素**：

1. 重叠的note.
2. 手挡住的note.

##### 重叠note

通过设计（并通过模仿其灵感,Cytus）,Cytoid使用相同的屏幕来记录上升和下降的音符.如果您不了解此类事件的后果,将会导致问题.

当你恍恍惚惚地打一首没有miss歌曲但是由于这种的事情而突然断了combo时,你能想象吗？很烦人吧？

玩家这种miss,不是因为他们缺乏技能,而是通过关卡设计.当然,出于这样的原因,他们会愤怒.



#### 修复

您可以通过简单地移除有问题的注释来解决此类问题 

#### 预防

为防止这种情况发生,PCTyx具有观察上一页note的功能.

它们以半透明的方式显示.不要将note放在完全被它们覆盖的地方.

#### 容忍重叠

你可以在一定程度上重叠note的某些部分,特别是如果你的歌曲具有高BPM时. 

我认为对于平板电脑来说,最大重叠量约为note的1/4,而手机约为1/3.

***BPM越高,重叠的可容忍性越小.越接近页面中间,重叠就越容易.***

#### Note被手挡住

手机和平板电脑的屏幕尺寸不同.平板电脑更大,因此手被阻挡的屏幕更少.当您选择在手机而非平板电脑上游玩谱面时,请记住这一点.此外,由于所有针对手机的谱面都可以由平板电脑使用.

除了重叠音符之外,您还必须担心玩家的手挡住他们对音符的看法.当您绘制到屏幕边缘时,这非常突出.这是一个预览图像,当有这样的情况时,哪里没有谱面.


可悲的是,感觉到被手挡住的note的技能只能通过玩游戏来获得.所以多玩音游,你选择的歌曲BPM越高,你就越有可能理解这是什么.***请注意,谱面的bpm越高,红色区域就越大.***



无论什么时候,看一下官方wiki总是有帮助的.

传送门:[官方wiki](https://github.com/Teages/Cytoid-wiki-Chinese/)





