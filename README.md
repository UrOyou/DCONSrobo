- author:youg
- Encodingformat:UTF-8



这里是服务消杀机器人的电控代码文件  
主要烧录在一块上层stm32控制板当中
### 这是clion-led分支 用以测试clion编写标准代码框架的情况

### 用户代码user_code下列文件夹内容说明：
- algorithm 算法模块
- application freeRTOS进程编辑
- bsp (Board Support Package)
- component 为部分固件支持模块
- device 为特定设备驱动控制模块
- module 为应用控制模块
- protocol 三方硬件协议

### 其他参考
步进电机驱动相关文件：
- 说明书：https://blog.csdn.net/gjy_skyblue?spm=1001.2014.3001.5509
- 百度网盘 https://pan.baidu.com/s/1tBCuDIfBAIRMms82FlLdag?pwd=mks1
- 原理图和pcb https://github.com/makerbase-mks/MKS-SERVO42C
- 使用教程  https://space.bilibili.com/393688975?from=search&seid=8715871633930712296
- 上位机下载 q群 948665794

### clion 使用相关
#### git配置
在clion提交之后还是需要github desktop上传
#### cmake
文件移动之后cmake可能会出现报错，解决方法：删除cmake编译构造的文件夹， 重新配置cmake（不确定具体步骤需要补充实际情况）
