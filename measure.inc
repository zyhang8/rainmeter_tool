[WeatherCore]
Measure=Plugin
Plugin=CNWeather
DynamicVariables=1
WeatherType=Today
ItemName=temp_curr
DefaultValue=NA
CityCode=#City#
AppKey=#AppKey#
Sign=#Sign#
;=============================备忘录1
[MeasureMemoName1]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Today
ItemName=#Memo1#
DefaultValue=#Memo1#
;=============================备忘录2
[MeasureMemoName2]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Today
ItemName=#Memo2#
DefaultValue=#Memo2#
;=============================备忘录3
[MeasureMemoName3]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Today
ItemName=#Memo3#
DefaultValue=#Memo3#
;=============================今天天气
[MeasureCityName]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Today
ItemName=citynm
DefaultValue=NA
;===========↑城市地区
[MeasureTempHigh]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=today
ItemName=temp_high

DefaultValue=NA
;===========最高温度↑
[MeasureTempLow]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=today
ItemName=temp_low
DefaultValue=NA
;===========最低温度↑

[MeasureCurrIcon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Today
ItemName=weatid
DefaultValue=NA
DynamicVariables=1
;====天气的id   此处用来获取天气图标

[Measuredays]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=days
Day=0
DefaultValue=NA
SubStitute="-":"."

;=============================明天
[Measuredays1]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=days
Day=1
DefaultValue=NA
SubStitute="-":"."

;=================日期
[MeasureTodayIcon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weatid
Day=1
DefaultValue=NA
;==========天气id
[MeasureTodayTempHigh]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_high
Day=1
DefaultValue=NA
;===========最高温度↑

[MeasureTodayTempLow]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_low
Day=1
DefaultValue=NA

;===========最低温度↑

;=============================后天
[Measuredays2]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=days
Day=2
DefaultValue=NA
SubStitute="-":"."
;=================日期
[Measure3Icon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weatid
Day=2
DefaultValue=NA
;==========天气id
[MeasureTodayTempHigh2]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_high
Day=2
DefaultValue=NA
;===========最高温度↑

[MeasureTodayTempLow2]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_low
Day=2
DefaultValue=NA

;===========最低温度↑
;=============================第三天
[Measuredays3]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=days
Day=3
DefaultValue=NA
SubStitute="-":"."
;=================日期
[Measure4Icon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weatid
Day=3
DefaultValue=NA

;==========天气id
[MeasureTodayTempHigh3]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_high
Day=3
DefaultValue=NA
;===========最高温度↑

[MeasureTodayTempLow3]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_low
Day=3
DefaultValue=NA

;===========最低温度↑




;==================================================================
[Measuredays4]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=days
Day=4
DefaultValue=NA
SubStitute="-":"."

[Measure5Icon]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=weatid
Day=4
DefaultValue=NA

;==========天气id
[MeasureTodayTempHigh4]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_high
Day=4
DefaultValue=NA
;===========最高温度↑

[MeasureTodayTempLow4]
Measure=Plugin
Plugin=CNWeather
ParentMeasure=WeatherCore
WeatherType=Future
ItemName=temp_low
Day=4
DefaultValue=NA

;===========最低温度↑



