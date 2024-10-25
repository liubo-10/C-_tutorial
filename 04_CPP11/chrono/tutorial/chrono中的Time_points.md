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

# chrono中的Time_points
chrono库中提供了一个表示时间点的类 time_point

类的定义如下：

```c++
template <typename _Clock, typename _Dur>
struct time_point
```

它被实现成如同存储一个 Duration 类型的自 Clock 的纪元起始开始的时间间隔的值，通过这个类最终可以得到时间中的某一个时间点。

- Clock：此时间点在此时钟上计量
- Duration：用于计量从纪元起时间的 std::chrono::duration 类型







在这个类中除了构造函数还提供了另外一个time_since_epoch()函数，用来获得1970年1月1日到time_point对象中记录的时间经过的时间间隔（duration），函数原型如下：







除此之外，时间点time_point对象和时间段对象duration之间还支持直接进行算术运算（即加减运算），时间点对象之间可以进行逻辑运算









time_point类的构造函数原型如下



```c++
// 1. 构造一个以新纪元(epoch，即：1970.1.1)作为值的对象，需要和时钟类一起使用，不能单独使用该无参构造函数
time_point();
// 2. 构造一个对象，表示一个时间点，其中d的持续时间从epoch开始，需要和时钟类一起使用，不能单独使用该构造函数
explicit time_point( const duration& d );
// 3. 拷贝构造函数，构造与t相同时间点的对象，使用的时候需要指定模板参数
template< class Duration2 >
time_point( const time_point<Clock,Duration2>& t );

```







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
