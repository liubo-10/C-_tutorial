# STL之list容器

* 👋 Hi, I’m liubo
* 👀 I’m interested in harmony
* 🌱 I’m currently learning harmony
* 💞️ I’m looking to collaborate on ...
* 📫 How to reach me ...
* 📖

## list模板介绍



list 是 c++ 中的序列式容器，其实现是双向链表，每个元素都有两个指针，分别指向前一个节点与后一个节点







链表与数组都是计算机常用的内存数据结构，与数组连续内存空间不一样的地方在于，链表的空间是不连续的，链表是将一块块不连续的内存串联起来使用。

正是由于链表的内存不连续这一特点，所以不能像数组一样，可以根据位置随机的访问每个元素，而链表我们压根不知道每个元素的实际位置到底在哪块内存区域。

查找某个元素需要遍历整个链表，直到找到目标元素位置，时间复杂度是 O(n)；

在链表中插入一个元素与删除一个元素的时间复杂度是 O(1)；







头文件:

```C++
#include <list>
```



## std::list 定义对象



```C++
list<A> listname;

list<A> listname(size);

list<A> listname(size,value);

list<A> listname(elselist);

list<A> listname(first, last);
```







## 访问

### front

返回第一个元素的引用

```C++
int nRet = list1.front() // nRet = 1
```



### back

返回最后一个元素的引用

```C++
int nRet = list1.back() // nRet = 3
```



### begin

返回第一个元素的指针(iterator)

```C++
it = list1.begin(); // *it = 1
```



### end

返回最后一个元素的下一位置的指针(list为空时end()=begin())

```C++
it = list1.end();
--it; // *it = 3
```


## 元素移除

### clear

移除所有元素，容器清空

```C++
c.clear()
```







### erase

移除iterator位置pos上的元素，返回下一个元素的位置

```C++
c.erase(pos)
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











