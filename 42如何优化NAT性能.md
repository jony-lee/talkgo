

### ab请求测试

``` shell
ab -c 5000 -n 100000 -r -s 2 http://192.168.0.30/
...
Requests per second:    6576.21 [#/sec] (mean)
Time per request:       760.317 [ms] (mean)
Time per request:       0.152 [ms] (mean, across all concurrent requests)
Transfer rate:          5390.19 [Kbytes/sec] received
```

每秒请求数（Requests per second）为 6576；

每个请求的平均延迟（Time per request）为 760ms；

建立连接的平均延迟（Connect）为 177ms。

记住这几个数值，这将是接下来案例的基准指标。