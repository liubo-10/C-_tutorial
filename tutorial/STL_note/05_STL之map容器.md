* 👋 Hi, I’m liubo
* 👀 I’m interested in harmony
* 🌱 I’m currently learning harmony
* 💞️ I’m looking to collaborate on ...
* 📫 How to reach me ...
* 📇
* 🎃
* 🍺
* 🍥
* ✨
* 🍰

# STL之map容器


map映射容器的元素数据是由一个键值和一个映射数据组成的，键值与映照数据之间具有一一映照的关系。

map容器的数据结构也采用红黑树来实现的，插入元素的键值不允许重复，比较函数只对元素的键值进行

比较，元素的各项数据可通过键值检索出来。由于map与set采用的都是红黑树的结构，所以，用法基本相似。












map用法
头文件
#include<map>



基本操作
begin() 返回指向 map 头部的迭代器
clear(） 删除所有元素
count() 返回指定元素出现的次数
empty() 如果 map 为空则返回 true
end() 返回指向 map 末尾的迭代器
erase() 删除一个元素
find() 查找一个元素
insert() 插入元素
key_comp() 返回比较元素 key 的函数
lower_bound() 返回键值>=给定元素的第一个位置
max_size() 返回可以容纳的最大元素个数
rbegin() 返回一个指向 map 尾部的逆向迭代器
rend() 返回一个指向 map 头部的逆向迭代器
size() 返回 map 中元素的个数
swap() 交换两个 map
upper_bound() 返回键值>给定元素的第一个位置
value_comp() 返回比较元素 value 的函数





创建map对象
#include<iostream>
#include<map>
using namespace std;
map<int,char>mp;//定义map容器















































原文链接：https://blog.csdn.net/love20165104027/article/details/81515466






























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













  
