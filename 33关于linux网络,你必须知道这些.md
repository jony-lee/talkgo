# 网络性能篇

https://time.geekbang.org/column/article/80898

网络通信本质上是一种进程间通信方式(跨系统进程通信)

linux网络如何工作?

如何通过指标衡量网络性能?

## 网络模型

OSI(Open System Interconnection Reference Model)网络模型-七层网络模型

TCP/IP模型(四层网络模型):

1. 应用层
2. 传输层
3. 网络层
4. 网络接口层

![img](https://static001.geekbang.org/resource/image/f2/bd/f2dbfb5500c2aa7c47de6216ee7098bd.png)

## linux网络栈

网络层封装

![img](https://static001.geekbang.org/resource/image/c8/79/c8dfe80acc44ba1aa9df327c54349e79.png)

传输层在应用程序数据前面增加了 TCP 头

网络层在 TCP 数据包前增加了 IP 头

而网络接口层，又在 IP 数据包前后分别增加了帧头和帧尾



在网络收发过程中,内核通过中断跟网卡进行交互.

网卡硬中断只处理最核心的网卡数据读取或发送,而协议栈中的大部分逻辑,都会放到软中断中去处理.

## linux网络收发流程

### 接收流程

网络帧到达网卡,网卡通过DMA的方式将网络包放到收包队列,(网卡)通过硬中断,告诉中断处理程序收到了网络包.

![img](https://static001.geekbang.org/resource/image/3a/65/3af644b6d463869ece19786a4634f765.png)