## NAT 原理(Network Address Translation)

NAT 的主要目的，是实现地址转换。

根据实现方式的不同，NAT 可以分为三类：

1. 静态 NAT，即内网 IP 与公网 IP 是一对一的永久映射关系；
2. 动态 NAT，即内网 IP 从公网 IP 池中，动态选择一个进行映射；
3. 网络地址端口转换 NAPT（Network Address and Port Translation），即把内网 IP 映射到公网 IP 的不同端口上，让多个内网 IP 可以共享同一个公网 IP 地址。

## iptables 与 NAT



## 小结

NAT 技术能够重写 IP 数据包的源 IP 或目的 IP，所以普遍用来解决公网 IP 地址短缺的问题。它可以让网络中的多台主机，通过共享同一个公网 IP 地址，来访问外网资源。同时，由于 NAT 屏蔽了内网网络，也为局域网中机器起到安全隔离的作用。

