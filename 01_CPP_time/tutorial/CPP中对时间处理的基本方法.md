* 👋 Hi, I’m liubo
* 👀 I’m interested in harmony
* 🌱 I’m currently learning harmony
* 💞️ I’m looking to collaborate on ...
* 📫 How to reach me ...
* 📇 sssssdsdsdsdsdsdasd
* 🎃 dsdsdsdsdsddfsgdgasd
* 🍺 jyukyuiyuiyuigkasd
* 🍥 fsdfgdsgsdgdgadsa
* ✨ xcvxcvxcvxcvdasdaasd
* 🍰 dazdsxasxsaxsaasdsa

# CPP中对时间处理的基本方法
在time.h文件中包含了CPP对时间处理的基本方法



## time_t

变量类型 time_t，通常是一个长整型（long int），用于表示从特定参考点（通常是 1970年1月1日00:00:00 UTC）经过的秒数。被广泛用作时间戳。



## time()

函数原型

```c++
time_t time(time_t *t);
```

取得从1970年1月1日至今的秒数。



## ctime()

函数原型

```c++
　char *ctime(const time_t *timep);
```





将 time_t 类型转换为真字符串格式时间，传入一个time_t类型变量的地址，返回一个字符数组指针，优点是可以直接按字符串输出，缺点是不能自行控制输出格式。







  但是time_t获取的时间是一个长整型，可以通过 ctime() 函数将其转换为字符串。













---
---
---
---
---
---
---
---
---
---
---
---
---
---
---
---
---
---
---
---
