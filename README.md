# rainmeter_tool

通过对贴吧大神得源代码进行修改，打造成适合自己的桌面零部散件

## 原先功能

- 显示时间，日期，星期
- 显示当地天气和未来4天天气
- 自定义添加城市，并自动更新天气
  
## 改进功能

- 添加备忘录功能，可以对备忘录进行增删查改

## 使用方法

1. 打开ini文件,在`Variables`添加MemoX=空
2. 在最下面添加

```lua
[MemoNameX]
Meter=String
MeasureName=MeasureMemoNameX
FontColor=#color#
AntiAlias=1
FontFace=#font#
FontSize=14
ClipString=2
x=100
y=240
LeftMouseUpAction=[!CommandMeasure "MemoInputX ExecuteBatch 1-2"]
ToolTipText=点此修改备忘录
SolidColor=255,255,255,1

[MemoInputX]
Measure=Plugin
Plugin=InputText.dll
SolidColor=255,255,255
FontColor=0,0,0
FontFace=#FONT#
FontSize=10
StringStyle=NORMAL
X=150
Y=245
H=22
W=70
FocusDismiss=1
DefaultValue="Change Me!"
Command1=!WriteKeyValue Variables MemoX "$UserInput$" DefaultValue=#MemoX#
Command2=!Refresh
```

第一部分Y的值比前一条备忘录增加25
第二部分Y的值比第一部分增加5

3. 打开inc文件,添加

```lua
;=============================备忘录X
[MeasureMemoNameX]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Today
ItemName=#MemoX#
DefaultValue=#MemoX#
```

4. 更新模块看是否多处一条备忘录

5. 测试过程中发现空格会使该备忘录瘫痪自行配置文件去掉空格即可

## 效果展示

![e5fwRJ.png](https://s2.ax1x.com/2019/08/07/e5fwRJ.png)

>上述两个文件仅为配置文件部分,主模块和安装包需要滴滴我
