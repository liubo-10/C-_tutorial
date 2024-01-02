# 冒泡法

* 👋 Hi, I’m bliu2-10
* 👀 I’m interested in harmony
* 🌱 I’m currently learning harmony
* 💞️ I’m looking to collaborate on ...
* 📫 How to reach me ...









# 经典C++编程实例

## 1.冒泡法：

这是最原始，也是众所周知的最慢的算法了。他的名字的由来因为它的工作看来象是冒泡：

\#include <iostream.h>

 

void BubbleSort(int* pData,int Count)

{

  int iTemp;

  for(int i=1;i<Count;i++)

  {

​    for(int j=Count-1;j>=i;j--)

​    {

​      if(pData[j]<pData[j-1])

​      {

​        iTemp = pData[j-1];

​        pData[j-1] = pData[j];

​        pData[j] = iTemp;

​      }

​    }

  }

}

 

void main()

{

  int data[] = {10,9,8,7,6,5,4};

  BubbleSort(data,7);

  for (int i=0;i<7;i++)

​    cout<<data[i]<<" ";

  cout<<"\n";

}

 

 

 

 

 

 

 

图示： before_compare|one_turn|two_turn|three_turn|four_turn|five_turn|six_turn     10     10     10     10     10      10   4            9     9     9     9     9      4   10      8     8     8     8     4      9   9      7     7     7     4     8      8   8      6     6     4     7     7      7   7      5     4     6     6     6      6   6      4     5     5     5     5      5   5

通过上图可以看出，冒泡法形象的描述来，4这个元素就像一个气泡逐渐冒到上面来了。 我们排序的有7个元素，最坏的情况全部倒序，4这个元素要冒上来需要6次。因此，n个元素，最坏的情况，需要移动：1+2+3+ ...+(n-1)=1/2*n(n-1)次。倒序(最糟情况)

第一轮：10,9,8,7->10,9,7,8->10,7,9,8->7,10,9,8(交换3次)

第二轮：7,10,9,8->7,10,8,9->7,8,10,9(交换2次)

第一轮：7,8,10,9->7,8,9,10(交换1次)

循环次数：6次

交换次数：6次

 

其他：

第一轮：8,10,7,9->8,10,7,9->8,7,10,9->7,8,10,9(交换2次)

第二轮：7,8,10,9->7,8,10,9->7,8,10,9(交换0次)

第一轮：7,8,10,9->7,8,9,10(交换1次)

循环次数：6次

交换次数：3次

 

上面我们给出了程序段，现在我们分析它：这里，影响我们算法性能的主要部分是循环和交换，显然，次数越多，性能就越差。从上面的程序我们可以看出循环的次数是固定的，为1+2+...+n-1。写成公式就是1/2*(n-1)*n。现在注意，我们给出O方法的定义：

 

  若存在一常量K和起点n0，使当n>=n0时，有f(n)<=K*g(n),则f(n) = O(g(n))。（呵呵，不要说没学好数学呀，对于编程数学是非常重要的！！！）

 

现在我们来看1/2*(n-1)*n，当K=1/2，n0=1，g(n)=n*n时，1/2*(n-1)*n<=1/2*n*n=K*g(n)。所以f(n)=O(g(n))=O(n*n)。所以我们程序循环的复杂度为O(n*n)。

再看交换。从程序后面所跟的表可以看到，两种情况的循环相同，交换不同。其实交换本身同数据源的有序程度有极大的关系，当数据处于倒序的情况时，交换次数同循环一样（每次循环判断都会交换），复杂度为O(n*n)。当数据为正序，将不会有交换。复杂度为O(0)。乱序时处于中间状态。正是由于这样的原因，我们通常都是通过循环次数来对比算法。

 

 

 **1.冒泡法：**

这是最原始，也是众所周知的最慢的算法了。他的名字的由来因为它的工作看来象是冒泡：

\#include <iostream.h>

 

void BubbleSort(int* pData,int Count)

{

  int iTemp;

  for(int i=1;i<Count;i++)

  {

​    for(int j=Count-1;j>=i;j--)

​    {

​      if(pData[j]<pData[j-1])

​      {

​        iTemp = pData[j-1];

​        pData[j-1] = pData[j];

​        pData[j] = iTemp;

​      }

​    }

  }

}

 

void main()

{

  int data[] = {10,9,8,7,6,5,4};

  BubbleSort(data,7);

  for (int i=0;i<7;i++)

​    cout<<data[i]<<" ";

  cout<<"\n";

}

图示： before_compare|one_turn|two_turn|three_turn|four_turn|five_turn|six_turn     10     10     10     10     10      10   4            9     9     9     9     9      4   10      8     8     8     8     4      9   9      7     7     7     4     8      8   8      6     6     4     7     7      7   7      5     4     6     6     6      6   6      4     5     5     5     5      5   5通过上图可以看出，冒泡法形象的描述来，4这个元素就像一个气泡逐渐冒到上面来了。 我们排序的有7个元素，最坏的情况全部倒序，4这个元素要冒上来需要6次。因此，n个元素，最坏的情况，需要移动：1+2+3+ ...+(n-1)=1/2*n(n-1)次。倒序(最糟情况)

第一轮：10,9,8,7->10,9,7,8->10,7,9,8->7,10,9,8(交换3次)

第二轮：7,10,9,8->7,10,8,9->7,8,10,9(交换2次)

第一轮：7,8,10,9->7,8,9,10(交换1次)

循环次数：6次

交换次数：6次

 

其他：

第一轮：8,10,7,9->8,10,7,9->8,7,10,9->7,8,10,9(交换2次)

第二轮：7,8,10,9->7,8,10,9->7,8,10,9(交换0次)

第一轮：7,8,10,9->7,8,9,10(交换1次)

循环次数：6次

交换次数：3次

 

上面我们给出了程序段，现在我们分析它：这里，影响我们算法性能的主要部分是循环和交换，显然，次数越多，性能就越差。从上面的程序我们可以看出循环的次数是固定的，为1+2+...+n-1。写成公式就是1/2*(n-1)*n。现在注意，我们给出O方法的定义：

 

  若存在一常量K和起点n0，使当n>=n0时，有f(n)<=K*g(n),则f(n) = O(g(n))。（呵呵，不要说没学好数学呀，对于编程数学是非常重要的！！！）

 

现在我们来看1/2*(n-1)*n，当K=1/2，n0=1，g(n)=n*n时，1/2*(n-1)*n<=1/2*n*n=K*g(n)。所以f(n)=O(g(n))=O(n*n)。所以我们程序循环的复杂度为O(n*n)。

再看交换。从程序后面所跟的表可以看到，两种情况的循环相同，交换不同。其实交换本身同数据源的有序程度有极大的关系，当数据处于倒序的情况时，交换次数同循环一样（每次循环判断都会交换），复杂度为O(n*n)。当数据为正序，将不会有交换。复杂度为O(0)。乱序时处于中间状态。正是由于这样的原因，我们通常都是通过循环次数来对比算法。

**2.交换法：**

交换法的程序最清晰简单，每次用当前的元素一一的同其后的元素比较并交换。

\#include <iostream.h>

void ExchangeSort(int* pData,int Count)

{

  int iTemp;

  for(int i=0;i<Count-1;i++)

  {

​    for(int j=i+1;j<Count;j++)

​    {

​      if(pData[j]<pData[i])

​      {

​        iTemp = pData[i];

​        pData[i] = pData[j];

​        pData[j] = iTemp;

​      }

​    }

  }

}

 

void main()

{

  int data[] = {10,9,8,7,6,5,4};

  ExchangeSort(data,7);

  for (int i=0;i<7;i++)

​    cout<<data[i]<<" ";

  cout<<"\n";

} before_compare|one_turn|two_turn|three_turn|four_turn|five_turn|six_turn     10     9     8     7     6      5   4            9     10     10     10    10      10   10      8     8     9     9     9      9   9      7     7     7     8     8      8   8      6     6     6     6     7      7   7      5     5     5     5    5     6  6      4     4     4     4     4      4   5 从上面的算法来看，基本和冒泡法的效率一样。

倒序(最糟情况)

第一轮：10,9,8,7->9,10,8,7->8,10,9,7->7,10,9,8(交换3次)

第二轮：7,10,9,8->7,9,10,8->7,8,10,9(交换2次)

第一轮：7,8,10,9->7,8,9,10(交换1次)

循环次数：6次

交换次数：6次

 

其他：

第一轮：8,10,7,9->8,10,7,9->7,10,8,9->7,10,8,9(交换1次)

第二轮：7,10,8,9->7,8,10,9->7,8,10,9(交换1次)

第一轮：7,8,10,9->7,8,9,10(交换1次)

循环次数：6次

交换次数：3次

 

从运行的表格来看，交换几乎和冒泡一样糟。事实确实如此。循环次数和冒泡一样也是1/2*(n-1)*n，所以算法的复杂度仍然是O(n*n)。由于我们无法给出所有的情况，所以只能直接告诉大家他们在交换上面也是一样的糟糕（在某些情况下稍好，在某些情况下稍差）。

**3.选择法：**

现在我们终于可以看到一点希望：选择法，这种方法提高了一点性能（某些情况下）这种方法类似我们人为的排序习惯：从数据中选择最小的同第一个值交换，在从省下的部分中选择最小的与第二个交换，这样往复下去。

\#include <iostream.h>

void SelectSort(int* pData,int Count)

{

  int iTemp;

  int iPos;

  for(int i=0;i<Count-1;i++)

  {

​    iTemp = pData[i];

​    iPos = i;

​    for(int j=i+1;j<Count;j++)

​    {

​      if(pData[j]<iTemp)

​      {

​        iTemp = pData[j];

​        iPos = j;

​      }

​    }

​    pData[iPos] = pData[i];

​    pData[i] = iTemp;

  }

}

 

void main()

{

  int data[] = {10,9,8,7,6,5,4};

  SelectSort(data,7);

  for (int i=0;i<7;i++)

​    cout<<data[i]<<" ";

  cout<<"\n";

}该排序法的图示如下;  i=0时：  iTemp = pData[0]=10；iPos = i=0；

​     j=1 ;

​      pData[j]<iTemp ---> pData[1]=9<10;

​      iTemp=pData[1]=9;

​      ipos=j=1;

​      j++=2

​     j=2;

​      pData[j]<iTemp----> pData[2]=8<9;

​      iTemp=pData[2]=8;

​      ipos=j=2;

​      j++=3

​     . . .

​     j=6;

​      pData[j]<iTemp----> pData[6]=4<5;

​      iTemp=pData[6]=4;

​      ipos=j=6;

​      j++=7; 

​    pData[6]=Pdata[0];

​    pData[0]=4;   

​    

before_compare	one turn	two turn	three turn

10		4		4		4

9		9		5		5

8		8		8		6

7		7		7		7

6		6		6		8

5		5		9		9

4		10		10		10由上面可以看到选择排序法并没有在一开始就交换数据，而是用第一个数据去和所有的数据比较，如果第一个数据小于第二个数据，那么，先把第二个数据放到一个临时变量里面，同时记录这个较小的数据在待排序的集合中的位置。再用该集合中的下一个数据和我们之前放在临时变量中的数据比较。也就是我们目前认为最小的数据比较，如果比我们之前选出来的数据小，那么再替换该变量。如果比这个数据大，则继续用下一个数据来比较。知道所有的数据都比较完为止。到这时，临时变量里面访的就是最小的数据了。我们把这个数据和第一个数据做对换。此时，最小的元素排到了第一位。倒序(最糟情况)

第一轮：10,9,8,7->(iTemp=9)10,9,8,7->(iTemp=8)10,9,8,7->(iTemp=7)7,9,8,10(交换1次)

第二轮：7,9,8,10->7,9,8,10(iTemp=8)->(iTemp=8)7,8,9,10(交换1次)

第一轮：7,8,9,10->(iTemp=9)7,8,9,10(交换0次)

循环次数：6次

交换次数：2次

 

其他：

第一轮：8,10,7,9->(iTemp=8)8,10,7,9->(iTemp=7)8,10,7,9->(iTemp=7)7,10,8,9(交换1次)

第二轮：7,10,8,9->(iTemp=8)7,10,8,9->(iTemp=8)7,8,10,9(交换1次)

第一轮：7,8,10,9->(iTemp=9)7,8,9,10(交换1次)

循环次数：6次

交换次数：3次

遗憾的是算法需要的循环次数依然是1/2*(n-1)*n。所以算法复杂度为O(n*n)。

我们来看他的交换。由于每次外层循环只产生一次交换（只有一个最小值）。所以f(n)<=n

所以我们有f(n)=O(n)。所以，在数据较乱的时候，可以减少一定的交换次数。

**4.插入法：**

插入法较为复杂，它的基本工作原理是抽出牌，在前面的牌中寻找相应的位置插入，然后继续下一张

\#include <iostream.h>

void InsertSort(int* pData,int Count)

{

  int iTemp;

  int iPos;

  for(int i=1;i<Count;i++)

  {

​    iTemp = pData[i];

​    iPos = i-1;

​    while((iPos>=0) && (iTemp<pData[iPos]))

​    {

​      pData[iPos+1] = pData[iPos];

​      iPos--;

​    }

​    pData[iPos+1] = iTemp;

  }

}

 

 

void main()

{

  int data[] = {10,9,8,7,6,5,4};

  InsertSort(data,7);

  for (int i=0;i<7;i++)

​    cout<<data[i]<<" ";

  cout<<"\n";

}

i=1时：

​			iTemp=pData[1]=9

​			ipos=1-1=0;

​			ipos=0>=0 && iTemp=9<pData[0]=10;

​			pData[1]=pData[0]=10;

​			ipos--=0-1=-1;

​			pData[0]=9;  9-10-8-7-6-5-4

i=2时：

​			iTemp=pData[2]=8

​			ipos=2-1=1;

​			ipos=1>=0 && iTemp=8<pData[1]=10;

​			pData[2]=pData[1]=10;

​			ipos--=1-1=0; 9-10-10-7-6-5-4

​			

​			ipos=0>=0 && iTemp=8<pData[0]=9;

​			pData[1]=pData[0]=9;

​			ipos--=0-1=-1;

​			pData[0]=8;  8-9-10-7-6-5-4

i=3时：

​			iTemp=pData[3]=7

​			ipos=3-1=2;

​			ipos=2>=0 && iTemp=7<pData[2]=10;

​			pData[3]=pData[2]=10;

​			ipos--=2-1=1;  8-9-10-10-6-5-4

 

​			ipos=1>=0 && iTemp=8<pData[1]=9;

​			pData[2]=pData[1]=9;

​			ipos--=1-1=0;  8-9-9-10-6-5-4

 

​			ipos=0>=0 && iTemp=7<pData[0]=8;

​			pData[1]=pData[0]=8;

​			ipos--=0-1=-1;	

​			pData[0]=7;		7-8-9-10-6-5-4i=4时:

​			iTemp=pData[4]=6;

​			ipos=4-1=3;

​			ipos=3>=0 && iTemp=6<pData[3]=10;

​			pData[4]=pData[3]=10;

​			ipos--=3-1=2; 7-8-9-10-10-5-4

​			

​			ipos=2>=0 && iTemp=7<pData[2]=9;

​			pData[3]=pData[2]=9;

​			ipos--=2-1=1;  7-8-9-9-10-5-4

​	

​			ipos=1>=0 && iTemp=7<pData[1]=8;

​			pData[2]=pData[1]=8;

​			ipos--=1-1=0;  7-8-8-9-10-5-4		

​			

​			ipos=0>=0 && iTemp=7<pData[0]=7;

​			pData[1]=pData[0]=7;

​			ipos--=1-1=0;  

​			pDate[0]=6;   6-7-8-9-10-5-4	

由上述可知：插入排序是先把集合中的下一个元素抽取出来

放到一个临时变量里面和第一个元素比较。并记录该元素在集合中的位置

如果第二个元素比第一个小，那么第一个元素和第二个元素对调。下一次

再用第三个元素先和变化后的第二个元素比较，如果变化后的第二个元素

小于第三个元素，用第二个元素的值覆盖第三个元素。在从临时变量里面

取出该元素放到第二个元素中去。

倒序(最糟情况)

第一轮：10,9,8,7->9,10,8,7(交换1次)(循环1次)

第二轮：9,10,8,7->8,9,10,7(交换1次)(循环2次)

第一轮：8,9,10,7->7,8,9,10(交换1次)(循环3次)

循环次数：6次

交换次数：3次

 

其他：

第一轮：8,10,7,9->8,10,7,9(交换0次)(循环1次)

第二轮：8,10,7,9->7,8,10,9(交换1次)(循环2次)

第一轮：7,8,10,9->7,8,9,10(交换1次)(循环1次)

循环次数：4次

交换次数：2次

 

上面结尾的行为分析事实上造成了一种假象，让我们认为这种算法是简单算法中最好的，其实不是，因为其循环次数虽然并不固定，我们仍可以使用O方法。从上面的结果可以看出，循环的次数f(n)<=1/2*n*(n-1)<=1/2*n*n。所以其复杂度仍为O(n*n)（这里说明一下，其实如果不是为了展示这些简单排序的不同，交换次数仍然可以这样推导）。现在看交换，从外观上看，交换次数是O(n)（推导类似选择法），但我们每次要进行与内层循环相同次数的‘=’操作。正常的一次交换我们需要三次‘=’而这里显然多了一些，所以我们浪费了时间。

 

最终，我个人认为，在简单排序算法中，选择法是最好的。

**5.插入排序**

\#include <iostream> 

using namespace std;

 

void coutstream(int a[],int n){

  for(int i=0;i!=n;i++)

​    cout<<a[i]<<" ";

}

 

void insertsort(int a[],int n){

int temp;

  for(int i=1;i<n;i++)

{

  int j=i;

  temp=a[i]; //先把a[i]位置的数据存起来

  while(j>0&&temp<a[j-1])

  {

  a[j]=a[j-1];

  j--;

  }

  a[j]=temp;

}

}

 

 

int main()

{

  int a[5]={1,6,4,8,4};

  insertsort(a,5);//插入排序

  coutstream(a,5);//

  return 0;

}

**二、高级排序算法：**

高级排序算法中我们将只介绍这一种，同时也是目前我所知道（我看过的资料中）的最快的。它的工作看起来仍然象一个二叉树。首先我们选择一个中间值middle程序中我们使用数组中间值，然后把比它小的放在左边，大的放在右边（具体的实现是从两边找，找到一对后交换）。然后对两边分别使用这个过程（最容易的方法——递归）。

 

**1.快速排序：**

\#include <iostream.h>

 

void run(int* pData,int left,int right)

{

  int i,j;

  int middle,iTemp;

  i = left;

  j = right;

  middle = pData[(left+right)/2];  //求中间值

  do{

​    while((pData[i]<middle) && (i<right))//从左扫描大于中值的数

​      i++;      

​    while((pData[j]>middle) && (j>left))//从右扫描大于中值的数

​      j--;

​    if(i<=j)//找到了一对值

​    {

​      //交换

​      iTemp = pData[i];

​      pData[i] = pData[j];

​      pData[j] = iTemp;

​      i++;

​      j--;

​    }

  }while(i<=j);//如果两边扫描的下标交错，就停止（完成一次）

 

  //当左边部分有值(left<j)，递归左半边

  if(left<j)

​    run(pData,left,j);

  //当右边部分有值(right>i)，递归右半边

  if(right>i)

​    run(pData,i,right);

}

 

void QuickSort(int* pData,int Count)

{

  run(pData,0,Count-1);

}

 

void main()

{

  int data[] = {10,9,8,7,6,5,4};

  QuickSort(data,7);

  for (int i=0;i<7;i++)

​    cout<<data[i]<<" ";

  cout<<"\n";

}

 

这里我没有给出行为的分析，因为这个很简单，我们直接来分析算法：首先我们考虑最理想的情况

1.数组的大小是2的幂，这样分下去始终可以被2整除。假设为2的k次方，即k=log2(n)。

2.每次我们选择的值刚好是中间值，这样，数组才可以被等分。

第一层递归，循环n次，第二层循环2*(n/2)......

所以共有n+2(n/2)+4(n/4)+...+n*(n/n) = n+n+n+...+n=k*n=log2(n)*n

所以算法复杂度为O(log2(n)*n)

其他的情况只会比这种情况差，最差的情况是每次选择到的middle都是最小值或最大值，那么他将变成交换法（由于使用了递归，情况更糟）。但是你认为这种情况发生的几率有多大？？呵呵，你完全不必担心这个问题。实践证明，大多数的情况，快速排序总是最好的。

如果你担心这个问题，你可以使用堆排序，这是一种稳定的O(log2(n)*n)算法，但是通常情况下速度要慢于快速排序（因为要重组堆）。

**三、其他排序**

**1.双向冒泡：**

通常的冒泡是单向的，而这里是双向的，也就是说还要进行反向的工作。

代码看起来复杂，仔细理一下就明白了，是一个来回震荡的方式。

写这段代码的作者认为这样可以在冒泡的基础上减少一些交换（我不这么认为，也许我错了）。

反正我认为这是一段有趣的代码，值得一看。

\#include <iostream.h>

void Bubble2Sort(int* pData,int Count)

{

  int iTemp;

  int left = 1;

  int right =Count -1;

  int t;

  do

  {

​    //正向的部分

​    for(int i=right;i>=left;i--)

​    {

​      if(pData[i]<pData[i-1])

​      {

​        iTemp = pData[i];

​        pData[i] = pData[i-1];

​        pData[i-1] = iTemp;

​        t = i;

​      }

​    }

​    left = t+1;

 

​    //反向的部分

​    for(i=left;i<right+1;i++)

​    {

​      if(pData[i]<pData[i-1])

​      {

​        iTemp = pData[i];

​        pData[i] = pData[i-1];

​        pData[i-1] = iTemp;

​        t = i;

​      }

​    }

​    right = t-1;

  }while(left<=right);

}

 

void main()

{

  int data[] = {10,9,8,7,6,5,4};

  Bubble2Sort(data,7);

  for (int i=0;i<7;i++)

​    cout<<data[i]<<" ";

  cout<<"\n";

}快速排序

\#include <iostream> 

using namespace std; 

class QuickSort 

{ 

public: 

  void quick_sort(int* x,int low,int high) 

  { 

​    int pivotkey; 

​    if(low <high) 

​    { 

​      pivotkey=partion(x,low,high); 

​      quick_sort(x,low,pivotkey-1); 

​      quick_sort(x,pivotkey+1,high); 

​    } 

  } 

  int partion(int* x,int low,int high) 

  { 

​    int pivotkey; 

​    pivotkey=x[low]; 

​    while(low <high) 

​    { 

​      while (low <high&&x[high]>=pivotkey) 

​        --high; //还有while循环只执行这一句

​      x[low]=x[high]; 

​      while (low <high&&x[low] <=pivotkey) 

​        ++low; //还有while循环只执行这一句

​      x[high]=x[low]; 

​    } 

​    x[low]=pivotkey; 

​    return low; 

  } 

}; 

int main() 

{ 

  int x[10]={52,49,80,36,14,58,61,97,23,65}; 

  QuickSort qs; 

  qs.quick_sort(x,0,9); 

  cout <<"排好序的数字序列为：" <<endl; 

  for (int i=0;i <10;i++) 

  { 

   printf("%d ",x[i]); 

  } 

return 0; 

}

**2.SHELL排序**

这个排序非常复杂，看了程序就知道了。

首先需要一个递减的步长，这里我们使用的是9、5、3、1（最后的步长必须是1）。

工作原理是首先对相隔9-1个元素的所有内容排序，然后再使用同样的方法对相隔5-1个元素的排序以次类推。

\#include <iostream.h>

void ShellSort(int* pData,int Count)

{

  int step[4];

  step[0] = 9;

  step[1] = 5;

  step[2] = 3;

  step[3] = 1;

 

  int iTemp;

  int k,s,w;

  for(int i=0;i<4;i++)

  {

​    k = step[i];

​    s = -k;

​    for(int j=k;j<Count;j++)

​    {

​      iTemp = pData[j];

​      w = j-k;//求上step个元素的下标

​      if(s ==0)

​      {

​        s = -k;

​        s++;

​        pData[s] = iTemp;

​      }

​      while((iTemp<pData[w]) && (w>=0) && (w<=Count))

​      {

​        pData[w+k] = pData[w];

​        w = w-k;

​      }

​      pData[w+k] = iTemp;

​    }

  }

}

 

void main()

{

  int data[] = {10,9,8,7,6,5,4,3,2,1,-10,-1};

  ShellSort(data,12);

  for (int i=0;i<12;i++)

​    cout<<data[i]<<" ";

  cout<<"\n";

}

呵呵，程序看起来有些头疼。不过也不是很难，把s==0的块去掉就轻松多了，这里是避免使用0步长造成程序异常而写的代码。这个代码我认为很值得一看。这个算法的得名是因为其发明者的名字D.L.SHELL。依照参考资料上的说法：“由于复杂的数学原因避免使用2的幂次步长，它能降低算法效率。”另外算法的复杂度为n的1.2次幂。同样因为非常复杂并“超出本书讨论范围”的原因（我也不知道过程），我们只有结果了

 

\#include <iostream>

using namespace std;

void maopao(int *list,int n) 

{ 

int i=n,j,temp; 

bool exchange;//当数据已经排好时，退出循环

for(i=0;i<n;i++) 

{

  exchange=false;

  for (j=0;j<n-i-1;j++) 

  { 

  if (list[j]>list[j+1]) 

  { 

   temp=list[j]; 

   list[j]=list[j+1]; 

   list[j+1]=temp; 

   exchange=true; 

  }

 

  } 

  if (!exchange) 

  { 

  return; 

  } 

}

}

int main()

{

int a[7]={32,43,22,52,2,10,30};

maopao(a,7);

for(int i=0;i<7;i++)

  cout<<a[i]<<" ";

return 0;

}

 

shell排序的思想是根据步长由长到短分组，进行排序，直到步长为1为止，属于插入排序的一种。下面用个例子更好的理解一下 无序数列： 32， 43，56，99，34，8，54，76 1.首先设定gap=n/2=4于是分组 32，34   排序  32，34 43， 8       8， 43 56，54       54，56 99，76       76，99 数列变成 32，8，54，76，34，43，56，99 2.gap=gap/2=2 于是分组 32，54，34，56  排序  32，34，54，56 8，76，43，99       8，43，76，99 于是数列变成 32，8，34，43，54，76，56，99 3.gap=gap/2=1于是分组 32，8，34，43，54，76，56，99 排序 8，32，34，43，54，56，76，99 gap=1结束…… 相应的C语言代码引用K＆R C程序设计一书中给出的代码 void shellsort(int v[], int n) { int gap, i, j, temp; for(gap=n/2;gap>0;gap/=2) //设定步长   for(i=gap;i <n;++i) //在元素间移动为止     for(j=i-gap; j>=0&&v[j]>v[j+gap]; j-=gap){ //比较相距gap的元素，逆序互换       temp=v[j];       v[j]=v[j+gap];       v[j+gap]=temp;    } } //帕斯卡恒等式为C(n,k)=C(n-1,k-1)+C(n-1,k) 

long fun(long n,long r)

{

  if(r<0||n<0)

  {

   printf("\nError.Exit!");

   exit(1);

  }

  if(r>n)  return 0;

  if(r==1||r==n-1)//根据组合定义，我们有C(n,1)=C(n,n-1)=n

   return n;

  if(r==0||r==n)//根据组合定义，我们有C(n,0)=C(n,n)=1

   return 1;

  return fun(n-1,r)+fun(n-1,r-1);//帕斯卡组合公式

} 

 

//选择法对数组排序的函数模板

template <class T>

void selectsort(T arr[],int size) 

{

  T temp;

  int i,j;

  for (i=0;i<size-1;i++)

​    for (j=i+1;j<size;j++)

​      if (arr[i]>arr[j])

​      {

​        temp=arr[i];

​        arr[i]=arr[j];

​        arr[j]=temp;

​      }

}

 

//冒泡法对数组排序的函数模板

template<class T>

void bubblesort(T *d,int n)

{

int i,j;

T t;

for(i=0;i<n-1;i++)

  for(j=0;j<n-i-1;j++)

  if(d[j]>d[j+1]) 

   {

​    t=d[j];

​    d[j]=d[j+1];

​    d[j+1]=t;

   }

}

 

//插入法对数组排序的函数模板

template <class T>

void InsertSort(T A[], int n)

{ 

  int i, j;

  T  temp;

  for (i = 1; i < n; i++) 

  { 

   temp = A[i];

   for (j=i-1; j>=0&&temp<A[j];j--)

​    A[j+1]=A[j];

   A[j+1] = temp;

  }

}

 

//二分查找法的函数模板

template <class T> 

int binary_search(T array[], T value, int size)

{

  int high = size-1, low = 0, mid;

  while (low<=high)

  {

   mid = (high + low) / 2;

   if (value < array[mid])

​    high = mid - 1;

   else if(value>array[mid])

​    low = mid + 1;

   else return mid;

  }

  return -1;

}

 

 

将2~36进制数与10进制数相互转换

 //将2~36进制数转换成10进制数

unsigned int OthToDec(char *oth, int base) //base为已知数的进制

{

  unsigned int i=0, dec=0;

  while (oth[i])

  {

​    dec*=base;

​    if (oth[i]>='0' && oth[i]<='9')

​      dec+=oth[i]&15;//dec+=oth[i]-48;

​    else if (oth[i]>='A' && oth[i]<='Z')

​      dec+=oth[i]-55;

​    else if (oth[i]>='a' && oth[i]<='z')

​      dec+=oth[i]-87;

​    i++;

  }

  return dec;

}

//将10进制(无符号)转2~36进制数 

char *DecToOth(char *oth, unsigned int dec, int base)  //base为要转换的数的进制

 

{

  char ch, *left=oth, *right=oth,num[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  do 

   {

​    *right=num[dec%base];

​    right++;

   }while (dec/=base);

  *right='\0';

  right--;

  while (left<right)

  {

​    ch=*left;

​    *left=*right;

​    *right=ch;

​    left++;right--;

  }

  return oth;

}

 

//统计substr在str中的个数

int fun(char *str,char *substr)

{

 int n=0;

 char *q;

 q=substr;

 while(*str!='\0')

 {

 if(*str==*substr)

  {

  str++;

  substr++;

  if(*substr=='\0')

   {

   n++;

   substr=q;

   }

  }

  else

  {

  str++;substr=q;

  }

 }

 return n;

}使用数组实现约瑟夫环：

\#include <stdio.h>

\#include <stdlib.h>

main()

{

   int m,n,i=1,j,k=1,per,o;

   

   printf("请输入总共的人数,记为n \n");

   scanf("%d",&n);

   

   int array[n+1];

   int order[n+1];

   printf("请输入几号出圈,记为m \n");

   scanf("%d",&m);

   printf("\n**************************************\n");

   for(;i <n;i++)//数组链表模拟 　

​     array[i]=i+1;

   array[n]=1;

   printf("%d  ",array[n]);

   i=1;j=1;per=n;

   while(array[i]!=i){

​     if(k==m){

​       order[j]=i;

​       j++;

​       array[per]=array[i];

​       k=0;

​       for(o=1;o <=j;o++)

​       printf("%d* ",order[o]);

​     }

​     else{printf("%d  ",array[i]);

​     

​       per=i;

​       i=array[i];

​       k++;

​     }

 

   }

   order[n]=i;

   printf("\n**************************************\n");

   for(i=1;i <=n;i++)

​     printf("%d  ",order[i]);

 

   system("pause");

   return 0;

} 输入正整数N,然后是N*N个正整数，表示边权邻接矩阵。  

 输出求解过程。  

  

  

 /*  

   Problem  :  Weighted  Bipartite  Matching  

 Algorithm  :  Hungarian  Algorithm  

 Reference  :  Douglas  B.West,Introduction  to  Graph  Theory,125-129  

​    Author  :  PC  

​      Date  :  2005.2.23  

 */  

  

 \#include  <iostream.h>  

 \#include  <iomanip.h>  

 \#include  <fstream.h>  

 \#include  <memory.h>  

  

 ifstream  fin("input.txt");  

 \#define  cin  fin  

  

 const  int  max=50;  

 bool  T[max],R[max],visited[max];  

 int  U[max],V[max],gt[max][max],x[max],y[max];  

 int  N;  

  

 void  output()  

 {  

 int  i,j;  

 for(i=0;i<N;i++)  

 {  

 for(j=0;j<N;j++)  

 {  

 cout<<setw(2)<<gt[i][j]<<'  ';  

 }  

 if(R[i])cout<<setw(2)<<'R'<<'  ';  

 cout<<endl;  

 }  

 for(i=0;i<N;i++)  

 if(T[i])cout<<setw(2)<<'T'<<'  ';  

 else  cout<<setw(2)<<'  '<<'  ';  

 cout<<endl;  

 }  

  

 int  path(int  u)  

 {  

 int  v;  

 for(v=0;v<N;v++)  

 {  

 if(gt[u][v]==0  &&  !visited[v])  

 {  

 visited[v]=1;  

 if(y[v]<0  ||  path(y[v]))  

 {  

 x[u]=v;y[v]=u;  

 R[u]=1;T[v]=0;  

 return  1;  

 }else{  

 T[v]=1;  

 R[y[v]]=0;  

 }  

 }  

 }  

 return  0;  

 }  

  

 int  main()  

 {  

 for(;cin>>N;){  

 int  i,j,ans,sigma,step=0;  

 for(i=0;i<N;i++)  

 {  

 U[i]=V[i]=0;  

 for(j=0;j<N;j++)  

 {  

 cin>>gt[i][j];  

 if(U[i]<gt[i][j])U[i]=gt[i][j];  

 }  

 }  

  

 for(i=0;i<N;i++)  

 {  

 for(j=0;j<N;j++)  

 {  

 gt[i][j]=U[i]-gt[i][j];  

 }  

 }  

 //////////////////////////////////////////////////////////  

 for(;;)  

 {  

 ans=0;  

 sigma=0;  

 memset(x,-1,sizeof(x));  

 memset(y,-1,sizeof(y));  

 memset(R,0,sizeof(R));  

 memset(T,0,sizeof(T));  

 for(i=0;i<N;i++)  

 {  

 if(x[i]<0)  

 {  

 memset(visited,0,sizeof(visited));  

 ans+=path(i);  

 }  

  

 for(j=0;j<N;j++)  

 {  

 if(sigma<1  ||  sigma>gt[i][j]  &&  gt[i][j]>0)  

 sigma=gt[i][j];   

 }  

 }  

 cout<<"step  "<<++step<<":\n";  

 output();  

  

 if(ans>=N)  

 break;  

  

 for(i=0;i<N;i++)  

 {  

 if(!R[i])  

 U[i]-=sigma;  

 if(T[i])  

 V[i]+=sigma;  

 for(j=0;j<N;j++)  

 {  

 if(T[j])  

 gt[i][j]+=sigma;  

 if(!R[i])  

 gt[i][j]-=sigma;  

 }  

 }  

 }  

 //////////////////////////////////////////////////////////  

 ans=0;  

 cout<<"Result:"<<endl;  

 for(i=0;i<N;i++)  

 {  

 ans+=U[i]+V[i];  

 for(j=0;j<N;j++)  

 {  

 if(x[i]==j  &&  y[j]==i)cout<<setw(2)<<U[i]+V[j]<<'  ';  

 else  cout<<setw(2)<<0<<'  ';  

 }  

 cout<<endl;  

 }  

 cout<<"Maximum  :  "<<ans<<endl;  

 }  

 return  0;  

 }  

  

  

 input.txt:  

  

 5  

 4  1  6  2  3  

 5  0  3  7  6  

 2  3  4  5  8  

 3  4  6  3  4  

 4  6  5  8  6  

  

 5  

 4  4  4  3  6  

 1  1  4  3  4  

 1  4  5  3  5  

 5  6  4  7  9  

 5  3  6  8  3  

  

 5  

 7  8  9  8  7  

 8  7  6  7  6  

 9  6  5  4  6  

 8  5  7  6  4  

 7  6  5  5  5  

  

 5  

 1  2  3  4  5  

 6  7  8  7  2  

 1  3  4  4  5  

 3  6  2  8  7  

 4  1  3  5  4  

 /*  

   Problem  :  Weighted  Bipartite  Matching  

 Algorithm  :  Hungarian  Algorithm  

 Reference  :  Douglas  B.West,Introduction  to  Graph  Theory,125-129  

​    Author  :  PC  

​      Date  :  2005.2.23  

 */  

 \#include  <iostream.h>  

 \#include  <iomanip.h>  

 \#include  <fstream.h>  

 \#include  <memory.h>  

  

 ifstream  fin("input.txt");  

 \#define  cin  fin  

  

 const  int  max=50;  

 bool  T[max],R[max],visited[max];  

 int  U[max],V[max],gt[max][max],x[max],y[max];  

 int  N;  

  

 void  output()  

 {  

​    int  i,j;  

​    for(i=0;i<N;i++)  

​    {  

​       for(j=0;j<N;j++)  

​       {  

​          cout<<setw(2)<<gt[i][j]<<'  ';  

​       }  

​       if(R[i])cout<<setw(2)<<'R'<<'  ';  

​          cout<<endl;  

​    }  

​    for(i=0;i<N;i++)  

​       if(T[i])cout<<setw(2)<<'T'<<'  ';  

​    else  cout<<setw(2)<<'  '<<'  ';  

​    cout<<endl;  

 }  

  

 int  path(int  u)  

 {  

​    int  v;  

​    for(v=0;v<N;v++)  

​    {  

​       if(U[u]+V[v]-gt[u][v]==0  &&  !visited[v])  

​       {  

​          visited[v]=1;  

​          if(y[v]<0  ||  path(y[v]))  

​          {  

​             x[u]=v;y[v]=u;  

​             R[u]=1;T[v]=0;  

​             return  1;  

​          }else{  

​             T[v]=1;  

​             R[y[v]]=0;  

​          }  

​       }  

​    }  

​    return  0;  

 }  

  

 int  main()  

 {  

​    int  i,j,ans,sigma,step=0;  

​    for(;cin>>N;){  

​       for(i=0;i<N;i++)  

​       {  

​          U[i]=V[i]=0;  

​          for(j=0;j<N;j++)  

​          {  

​             cin>>gt[i][j];  

​             if(U[i]<gt[i][j])U[i]=gt[i][j];  

​          }  

​       }  

​       //////////////////////////////////////////////////////////  

​       for(;;)  

​       {  

​           ans=0;  

​           sigma=0;  

​           memset(x,-1,sizeof(x));  

​           memset(y,-1,sizeof(y));  

​           memset(R,0,sizeof(R));  

​           memset(T,0,sizeof(T));  

​           for(i=0;i<N;i++)  

​           {  

​              if(x[i]<0)  

​              {  

​                  memset(visited,0,sizeof(visited));  

​                  ans+=path(i);  

​              }  

​           }  

​           for(i=0;i<N;i++)  

​           {  

​              if(!R[i])  

​                 for(j=0;j<N;j++)  

​                 {  

​                 if(!T[j]  &&  (sigma<1  ||  sigma>U[i]+V[j]-gt[i][j]  &&  U[i]+V[j]-gt[i][j]>0))  

​                     sigma=U[i]+V[j]-gt[i][j];   

​                 }  

​           }  

​           cout<<"step  "<<++step<<":\n";  

​           output();  

  

​           if(ans>=N)  

​              break;  

  

​           for(i=0;i<N;i++)  

​           {  

​              if(!R[i])  

​                 U[i]-=sigma;  

​              if(T[i])  

​                 V[i]+=sigma;  

​           }  

​       }  

​       /////////////////////////////////////////////////////////  

​       ans=0;  

​       cout<<"Result:"<<endl;  

​       for(i=0;i<N;i++)  

​       {  

​           ans+=U[i]+V[x[i]];  

​           for(j=0;j<N;j++)  

​           {  

​               if(x[i]==j  &&  y[j]==i)cout<<setw(2)<<U[i]+V[j]<<'  ';  

​               else  cout<<setw(2)<<0<<'  ';  

​           }  

​           cout<<endl;  

​       }  

​       cout<<"Maximum  :  "<<ans<<endl;  

​    }  

​    return  0;  

 }  

  写函数完成内存的拷贝 void* memcpy( void *dst, const void *src, unsigned int len ) {   register char *d;   register char *s;   if (len == 0)     return dst;   if ( dst > src )  //考虑覆盖情况   {     d = (char *)dst + len - 1;     s = (char *)src + len - 1;     while ( len >= 4 )  //循环展开，提高执行效率     {       *d-- = *s--;       *d-- = *s--;       *d-- = *s--;       *d-- = *s--;       len -= 4;     }     while ( len-- )     {       *d-- = *s--;     }   }   else if ( dst < src )   {     d = (char *)dst;     s = (char *)src;     while ( len >= 4 )     {       *d++ = *s++;       *d++ = *s++;       *d++ = *s++;       *d++ = *s++;       len -= 4;     }     while ( len-- )     {       *d++ = *s++;     }   }   return dst; } 出现次数相当频繁

1．常用的算法设计方法： 　　1.1 迭代法 　　1.2 穷举搜索法 　　1.3 递推法 　　1.4 递归法 　　1.5 贪婪法 　　1.6 分治法 　　1.7 动态规划法 　　1.8 回溯法 算法基础部分: 算法是对特定问题求解步骤的一种描述，算法是指令的有限序列，其中每一条指令表示一个或多个操作。 算法具有以下5个属性： 　　有穷性：一个算法必须总是在执行有穷步之后结束，且每一步都在有穷时间内完成。 　　确定性：算法中每一条指令必须有确切的含义。不存在二义性。只有一个入口和一个出口 　　可行性：一个算法是可行的就是算法描述的操作是可以通过已经实现的基本运算执行有限次来实现的。 　　输入：一个算法有零个或多个输入，这些输入取自于某个特定对象的集合。 　　输出：一个算法有一个或多个输出，这些输出同输入有着某些特定关系的量。 所以对应的算法设计的要求： 　　正确性：算法应满足具体问题的需求； 　　可读性：算法应该好读，以有利于读者对程序的理解； 　　健壮性：算法应具有容错处理，当输入为非法数据时，算法应对其作出反应，而不是产生莫名其妙的输出结果。 　　效率与存储量需求：效率指的是算法执行的时间；存储量需求指算法执行过程中所需要的最大存储空间。一般这两者与问题的规模有关。 1.1  迭代法：

迭代法是用于求方程或方程组近似根的一种常用的算法设计方法。设方程为f(x)=0，用某种数学方法导出等价的形式x=g(x)，然后按以下步骤执行：

（1）选一个方程的近似根，赋给变量x0；

（2）将x0的值保存于变量x1，然后计算g(x1)，并将结果存于变量x0；

（3）当x0与x1的差的绝对值还小于指定的精度要求时，重复步骤（2）的计算。

若方程有根，并且用上述方法计算出来的近似根序列收敛，则按上述方法求得的x0就认为是方程的根。上述算法用C程序的形式表示为：

【算法】迭代法求方程的根

{   x0=初始近似根；

​    do {

​       x1=x0；

​       x0=g(x1)；   /*按特定的方程计算新的近似根*/

​       } while ( fabs(x0-x1)>Epsilon)；

​    printf(“方程的近似根是%f\n”，x0)；

}

迭代算法也常用于求方程组的根，令

​       X=（x0，x1，…，xn-1）

设方程组为：

​       xi=gi(X)     (I=0，1，…，n-1)

则求方程组根的迭代算法可描述如下：

【算法】迭代法求方程组的根

​    {   for (i=0;i<n;i++)

​           x[i]=初始近似根;

​       do {

​           for (i=0;i<n;i++)

​              y[i]=x[i];

​           for (i=0;i<n;i++)

​              x[i]=gi(X);

​           for (delta=0.0,i=0;i<n;i++)

if (fabs(y[i]-x[i])>delta)    

 delta=fabs(y[i]-x[i])；

​           } while (delta>Epsilon)；

​       for (i=0;i<n;i++)

​           printf(“变量x[%d]的近似根是 %f”，I，x[i])；

​       printf(“\n”)；

​    }

​    具体使用迭代法求根时应注意以下两种可能发生的情况：

（1）如果方程无解，算法求出的近似根序列就不会收敛，迭代过程会变成死循环，因此在使用迭代算法前应先考察方程是否有解，并在程序中对迭代的次数给予限制；

（2）方程虽然有解，但迭代公式选择不当，或迭代的初始近似根选择不合理，也会导致迭代失败。1.2 穷举搜索法：

穷举搜索法是对可能是解的众多候选解按某种顺序进行逐一枚举和检验，并从中找出那些符合要求的候选解作为问题的解。

要解决的问题只有有限种可能，在没有更好算法时总可以用穷举搜索的办法解决，即逐个的检查所有可能的情况。可以想象，情况较多时这种方法极为费时。实际上并不需要机械的检查每一种情况，常常是可以提前判断出某些情况不可能取到最优解，从而可以提前舍弃这些情况。这样也是隐含的检查了所有可能的情况，既减少了搜索量，又保证了不漏掉最优解。

【问题】 将A、B、C、D、E、F这六个变量排成如图所示的三角形，这六个变量分别取[1，6]上的整数，且均不相同。求使三角形三条边上的变量之和相等的全部解。如图就是一个解。

程序引入变量a、b、c、d、e、f，并让它们分别顺序取1至6的整数，在它们互不相同的条件下，测试由它们排成的如图所示的三角形三条边上的变量之和是否相等，如相等即为一种满足要求的排列，把它们输出。当这些变量取尽所有的组合后，程序就可得到全部可能的解。细节见下面的程序。

\# include <stdio.h>

void main()

{   int a,b,c,d,e,f;

​    for (a=1;a<=6;a++)   //a,b,c,d,e依次取不同的值  

​       for (b=1;b<=6;b++)        {

​           if (b==a)     continue;

​           for (c=1;c<=6;c++)        {

​              if (c==a)||(c==b)   continue;

​              for (d=1;d<=6;d++)        {

​                  if (d==a)||(d==b)||(d==c)    continue;

for (e=1;e<=6;e++)        {

​                  if (e==a)||(e==b)||(e==c)||(e==d) continue;

f=21-(a+b+c+d+e);//最后一个用减法算

if ((a+b+c==c+d+e))&&(a+b+c==e+f+a))  {

printf(“%6d,a);

​    printf(“%4d%4d”,b,f);

​    printf(“%2d%4d%4d”,c,d,e);

​    scanf(“%c”);

}

​                     }

​                  }

​              }

​           }

​       }

按穷举法编写的程序通常不能适应变化的情况。如问题改成有9个变量排成三角形，每条边有4个变量的情况，程序的循环重数就要相应改变，循环的重数和变量的个数相关。

从上述问题解决的方法中，最重要的因素就是确定某种方法来确定所有的候选解。

1.3 递推法：

   递推法是利用问题本身所具有的一种递推关系求问题解的一种方法。设要求问题规模为N的解，当N=1时，解或为已知，或能非常方便地得到解。能采用递推法构造算法的问题有重要的递推性质，即当得到问题规模为i-1的解后，由问题的递推性质，能从已求得的规模为1，2，…，i-1的一系列解，构造出问题规模为I的解。这样，程序可从i=0或i=1出发，重复地，由已知至i-1规模的解，通过递推，获得规模为i的解，直至得到规模为N的解。

【问题】 阶乘计算

问题描述：编写程序，对给定的n（n≦100），计算并输出k的阶乘k！（k=1，2，…，n）的全部有效数字。

由于要求的整数可能大大超出一般整数的位数，程序用一维数组存储长整数，存储长整数数组的每个元素只存储长整数的一位数字。如有m位成整数N用数组a[ ]存储：

​    N=a[m]×10m-1+a[m-1]×10m-2+ … +a[2]×101+a[1]×100

并用a[0]存储长整数N的位数m，即a[0]=m。按上述约定，数组的每个元素存储k的阶乘k！的一位数字，并从低位到高位依次存于数组的第二个元素、第三个元素……。例如，5！=120，在数组中的存储形式为：

3   0   2   1   ……

   首元素3表示长整数是一个3位数，接着是低位到高位依次是0、2、1，表示成整数120。

   计算阶乘k！可采用对已求得的阶乘(k-1)！连续累加k-1次后求得。例如，已知4！=24，计算5！，可对原来的24累加4次24后得到120。细节见以下程序。

\# include <stdio.h>

\# include <malloc.h>

\# define  MAXN  1000

void  pnext(int a[ ],int k)//已知a中的（k-1）!,求出k！在a中。

{   int *b,m=a[0],i,j,r,carry;

​    b=(int * ) malloc(sizeof(int)* (m+1));

​    for ( i=1;i<=m;i++)     b[i]=a[i];

​    for ( j=1;j<k;j++)   //控制累加k-1次

​    {   for ( carry=0,i=1;i<=m;i++)//i存放的是整数的位数

​       {    r=(i<a[0]?a[i]+b[i]:a[i])+carry;//进位标志

​            a[i]=r%10;

​           carry=r/10;

​       }

​       if (carry)  a[++m]=carry;

​    }

​    free(b);

​    a[0]=m;

}

void  write(int *a,int k)//功能是输出累加K次后的数组的各个位

{   int i;

​    printf(“%4d！=”,k);

​    for (i=a[0];i>0;i--)

​       printf(“%d”,a[i]);

printf(“\n\n”);

}

void main()

{   int a[MAXN],n,k;

​    printf(“Enter the number n:  “);

​    scanf(“%d”,&n);

​    a[0]=1;

​    a[1]=1;

​    write(a,1);

​    for (k=2;k<=n;k++)

​    {    pnext(a,k);

​        write(a,k);//输出长整数的各位

​        getchar();

​    }

}

1.4 递归法

   递归是设计和描述算法的一种有力的工具，由于它在复杂算法的描述中被经常采用，为此在进一步介绍其他算法设计方法之前先讨论它。

   能采用递归描述的算法通常有这样的特征：为求解规模为N的问题，设法将它分解成规模较小的问题，然后从这些小问题的解方便地构造出大问题的解，并且这些规模较小的问题也能采用同样的分解和综合方法，分解成规模更小的问题，并从这些更小问题的解构造出规模较大问题的解。特别地，当规模N=1时，能直接得解。

【问题】编写计算斐波那契（Fibonacci）数列的第n项函数fib（n）。斐波那契数列为：0、1、1、2、3、……，即：

​       fib(0)=0;

​       fib(1)=1;

​       fib(n)=fib(n-1)+fib(n-2)     （当n>1时）。

写成递归函数有： 

int fib(int n)

{   

 if (n==0)     return  0;

   if (n==1)     return  1;

   if (n>1)     return  fib(n-1)+fib(n-2);

}

  递归算法的执行过程分递推和回归两个阶段。在递推阶段，把较复杂的问题（规模为n）的求解推到比原问题简单一些的问题（规模小于n）的求解。例如上例中，求解fib(n)，把它推到求解fib(n-1)和fib(n-2)。也就是说，为计算fib(n)，必须先计算fib(n-1)和fib(n-2)，而计算fib(n-1)和fib(n-2)，又必须先计算fib(n-3)和fib(n-4)。依次类推，直至计算fib(1)和fib(0)，分别能立即得到结果1和0。在递推阶段，必须要有终止递归的情况。例如在函数fib中，当n为1和0的情况。   在回归阶段，当获得最简单情况的解后，逐级返回，依次得到稍复杂问题的解，例如得到fib(1)和fib(0)后，返回得到fib(2)的结果，……，在得到了fib(n-1)和fib(n-2)的结果后，返回得到fib(n)的结果。

  在编写递归函数时要注意，函数中的局部变量和参数只是局限于当前调用层，当递推进入“简单问题”层时，原来层次上的参数和局部变量便被隐蔽起来。在一系列“简单问题”层，它们各有自己的参数和局部变量。

   由于递归引起一系列的函数调用，并且可能会有一系列的重复计算，递归算法的执行效率相对较低。当某个递归算法能较方便地转换成递推算法时，通常按递推算法编写程序。例如上例计算斐波那契数列的第n项的函数fib(n)应采用递推算法，即从斐波那契数列的前两项出发，逐次由前两项计算出下一项，直至计算出要求的第n项。

【问题】背包问题

问题描述：有不同价值、不同重量的物品n件，求从这n件物品中选取一部分物品的选择方案，使选中物品的总重量不超过指定的限制重量，但选中物品的价值之和最大。

设n件物品的重量分别为w0、w1、…、wn-1，物品的价值分别为v0、v1、…、vn-1。采用递归寻找物品的选择方案。设前面已有了多种选择的方案，并保留了其中总价值最大的方案于数组option[ ]，该方案的总价值存于变量maxv。当前正在考察新方案，其物品选择情况保存于数组cop[ ]。假定当前方案已考虑了前i-1件物品，现在要考虑第i件物品；当前方案已包含的物品的重量之和为tw；至此，若其余物品都选择是可能的话，本方案能达到的总价值的期望值为tv。算法引入tv是当一旦当前方案的总价值的期望值也小于前面方案的总价值maxv时，继续考察当前方案变成无意义的工作，应终止当前方案，立即去考察下一个方案。因为当方案的总价值不比maxv大时，该方案不会被再考察，这同时保证函数后找到的方案一定会比前面的方案更好。

对于第i件物品的选择考虑有两种可能：

（1）考虑物品i被选择，这种可能性仅当包含它不会超过方案总重量限制时才是可行的。选中后，继续递归去考虑其余物品的选择。

（2）考虑物品i不被选择，这种可能性仅当不包含物品i也有可能会找到价值更大的方案的情况。

按以上思想写出递归算法如下：

try(物品i，当前选择已达到的重量和，本方案可能达到的总价值tv)

{   /*考虑物品i包含在当前方案中的可能性*/

​    if(包含物品i是可以接受的)

​    {   将物品i包含在当前方案中；

​       if (i<n-1)

​           try(i+1,tw+物品i的重量,tv);

​       else

​           /*又一个完整方案，因为它比前面的方案好，以它作为最佳方案*/

以当前方案作为临时最佳方案保存;

​           恢复物品i不包含状态；

​       }

​       /*考虑物品i不包含在当前方案中的可能性*/

​       if (不包含物品i仅是可考虑的)

​           if (i<n-1)

​              try(i+1,tw,tv-物品i的价值)；

​           else

​              /*又一个完整方案，因它比前面的方案好，以它作为最佳方案*/

以当前方案作为临时最佳方案保存;

​    }

​    为了理解上述算法，特举以下实例。设有4件物品，它们的重量和价值见表：

物品   0   1   2   3

重量   5   3   2   1

价值   4   4   3   1

 

   并设限制重量为7。则按以上算法，下图表示找解过程。由图知，一旦找到一个解，算法就进一步找更好的解。如能判定某个查找分支不会找到更好的解，算法不会在该分支继续查找，而是立即终止该分支，并去考察下一个分支。

Try(物品号，总重，价值)

按上述算法编写函数和程序如下：

【程序】

\# include <stdio.h>

\# define  N   100

double   limitW,totV,maxV;

int   option[N],cop[N];

struct    {     double   weight;

​           double   value;

​       }a[N];

int   n;

void find(int i,double tw,double tv)

{   int k;

​    /*考虑物品i包含在当前方案中的可能性*/

​    if (tw+a[i].weight<=limitW)

​    {   cop[i]=1;

​       if (i<n-1) find(i+1,tw+a[i].weight,tv);

​       else

​       {   for (k=0;k<n;k++)

​              option[k]=cop[k];

​           maxv=tv;

​       }

​       cop[i]=0;

}

​    /*考虑物品i不包含在当前方案中的可能性*/

​    if (tv-a[i].value>maxV)

​       if (i<n-1) find(i+1,tw,tv-a[i].value);

​       else

​       {   for (k=0;k<n;k++)

​              option[k]=cop[k];

​           maxv=tv-a[i].value;

​       }

}

 void main()

{   int k;

​    double w,v;

​    printf(“输入物品种数\n”);

​    scanf((“%d”,&n);

​    printf(“输入各物品的重量和价值\n”);

​    for (totv=0.0,k=0;k<n;k++)

​    {   scanf(“%1f%1f”,&w,&v);

​       a[k].weight=w;

​       a[k].value=v;

​       totV+=V;

​    }

​    printf(“输入限制重量\n”);

​    scanf(“%1f”,&limitV);

​    maxv=0.0;

​    for (k=0;k<n;k++)  cop[k]=0;

​    find(0,0.0,totV);

​    for (k=0;k<n;k++)

​       if (option[k])  printf(“%4d”,k+1);

​    printf(“\n总价值为%.2f\n”,maxv);

}

作为对比，下面以同样的解题思想，考虑非递归的程序解。为了提高找解速度，程序不是简单地逐一生成所有候选解，而是从每个物品对候选解的影响来形成值得进一步考虑的候选解，一个候选解是通过依次考察每个物品形成的。

对物品i的考察有这样几种情况：

1．  当该物品被包含在候选解中依旧满足解的总重量的限制，该物品被包含在候选解中是应该继续考虑的；

2．  反之，该物品不应该包括在当前正在形成的候选解中。

3．  仅当物品不被包括在候选解中，还是有可能找到比目前临时最佳解更好的候选解时，才去考虑该物品不被包括在候选解中；

4．  该物品不包括在当前候选解中的方案也不应继续考虑。

5．  对于任意一个值得考虑的饿方案，程序就去进一步考虑下一个物品；

【程序】

\# include <stdio.h>

\# define  N   100

double   limitW;

int   cop[N];

struct    ele  {   double   weight;

​              double   value;

​           } a[N];

int   k,n;

struct    {   int      flg;

​            double   tw;

​            double   tv;

​       }twv[N];

void next(int i,double tw,double tv)

{   twv[i].flg=1;

​    twv[i].tw=tw;

​    twv[i].tv=tv;

}

double find(struct ele *a,int n)

{   int i,k,f;

​    double maxv,tw,tv,totv;

​    maxv=0;

​    for (totv=0.0,k=0;k<n;k++)

​       totv+=a[k].value;

​    next(0,0.0,totv);

​    i=0;

​    While (i>=0)

​    {   f=twv[i].flg;

​       tw=twv[i].tw;

​       tv=twv[i].tv;

​       switch(f)

​       {   case 1:   twv[i].flg++;

​                  if (tw+a[i].weight<=limitW)

​                     if (i<n-1)

​                     {   next(i+1,tw+a[i].weight,tv);

​                         i++;

​                     }

​                     else

​                     {   maxv=tv;

​                         for (k=0;k<n;k++)

​                            cop[k]=twv[k].flg!=0;

​                     }

​                  break;

​           case 0:   i--;

​                  break;

​           default:   twv[i].flg=0;

​                  if (tv-a[i].value>maxv)

​                     if (i<n-1)

​                     {   next(i+1,tw,tv-a[i].value);

​                         i++;

​                     }

​                     else

​                     {   maxv=tv-a[i].value;

​                         for (k=0;k<n;k++)

​                            cop[k]=twv[k].flg!=0;

​                     }

​                  break;

​       }

​    }

​    return maxv;

}

void main()

{   double maxv;

​    printf(“输入物品种数\n”);

​    scanf((“%d”,&n);

​    printf(“输入限制重量\n”);

​    scanf(“%1f”,&limitW);

printf(“输入各物品的重量和价值\n”);

​    for (k=0;k<n;k++)

​       scanf(“%1f%1f”,&a[k].weight,&a[k].value);

​    maxv=find(a,n);

​    printf(“\n选中的物品为\n”);

for (k=0;k<n;k++)

​       if (option[k])  printf(“%4d”,k+1);

​    printf(“\n总价值为%.2f\n”,maxv);

}

1.5 贪婪法

   贪心法是求解关于独立系统组合优化问题的一种简单算法，求最小生成树的Kruskal算法就是一种贪心算法。

贪心法的基本思路是：从问题的某一个初始解出发逐步逼近给定的目标，以尽可能快的地求得更好的解。当达到某算法中的某一步不能再继续前进时，算法停止。 

该算法存在问题： 

\1. 不能保证求得的最后解是最佳的； 

\2. 不能用来求最大或最小解问题； 

\3. 只能求满足某些约束条件的可行解的范围。 

实现该算法的过程： 

从问题的某一初始解出发； 

while 能朝给定总目标前进一步 do 

　　求出可行解的一个解元素； 

由所有解元素组合成问题的一个可行解；

贪婪法是一种不追求最优解，只希望得到较为满意解的方法。贪婪法一般可以快速得到满意的解，因为它省去了为找最优解要穷尽所有可能而必须耗费的大量时间。贪婪法常以当前情况为基础作最优选择，而不考虑各种可能的整体情况，所以贪婪法不要回溯。

   例如平时购物找钱时，为使找回的零钱的硬币数最少，不考虑找零钱的所有各种发表方案，而是从最大面值的币种开始，按递减的顺序考虑各币种，先尽量用大面值的币种，当不足大面值币种的金额时才去考虑下一种较小面值的币种。这就是在使用贪婪法。这种方法在这里总是最优，是因为银行对其发行的硬币种类和硬币面值的巧妙安排。如只有面值分别为1、5和11单位的硬币，而希望找回总额为15单位的硬币。按贪婪算法，应找1个11单位面值的硬币和4个1单位面值的硬币，共找回5个硬币。但最优的解应是3个5单位面值的硬币。

【问题】装箱问题

问题描述：装箱问题可简述如下：设有编号为0、1、…、n-1的n种物品，体积分别为v0、v1、…、vn-1。将这n种物品装到容量都为V的若干箱子里。约定这n种物品的体积均不超过V，即对于0≤i＜n，有0＜vi≤V。不同的装箱方案所需要的箱子数目可能不同。装箱问题要求使装尽这n种物品的箱子数要少。

  若考察将n种物品的集合分划成n个或小于n个物品的所有子集，最优解就可以找到。但所有可能划分的总数太大。对适当大的n，找出所有可能的划分要花费的时间是无法承受的。为此，对装箱问题采用非常简单的近似算法，即贪婪法。该算法依次将物品放到它第一个能放进去的箱子中，该算法虽不能保证找到最优解，但还是能找到非常好的解。不失一般性，设n件物品的体积是按从大到小排好序的，即有v0≥v1≥…≥vn-1。如不满足上述要求，只要先对这n件物品按它们的体积从大到小排序，然后按排序结果对物品重新编号即可。装箱算法简单描述如下：

{   输入箱子的容积；

​    输入物品种数n；

​    按体积从大到小顺序，输入各物品的体积；

​    预置已用箱子链为空；

​    预置已用箱子计数器box_count为0；

​    for (i=0;i<n;i++)

​    {   从已用的第一只箱子开始顺序寻找能放入物品i 的箱子j；

​       if （已用箱子都不能再放物品i）

​       {   另用一个箱子j，并将物品i放入该箱子；

​           box_count++；

​       }

​       else

​           将物品i放入箱子j；

​    }

}

   上述算法能求出需要的箱子数box_count，并能求出各箱子所装物品。下面的例子说明该算法不一定能找到最优解，设有6种物品，它们的体积分别为：60、45、35、20、20和20单位体积，箱子的容积为100个单位体积。按上述算法计算，需三只箱子，各箱子所装物品分别为：第一只箱子装物品1、3；第二只箱子装物品2、4、5；第三只箱子装物品6。而最优解为两只箱子，分别装物品1、4、5和2、3、6。

   若每只箱子所装物品用链表来表示，链表首结点指针存于一个结构中，结构记录尚剩余的空间量和该箱子所装物品链表的首指针。另将全部箱子的信息也构成链表。以下是按以上算法编写的程序。

【程序】

\# include <stdio.h>

\# include <stdlib.h>

typedef  struct  ele

{   int  vno;

​    struct  ele  *link;

}   ELE;

typedef  struct  hnode

{   int  remainder;

​    ELE  *head;

​    Struct  hnode  *next;

}   HNODE;

void  main()

{   int  n, i, box_count, box_volume, *a;

​    HNODE  *box_h,  *box_t,  *j;

​    ELE  *p,  *q;

​    Printf(“输入箱子容积\n”);

​    Scanf(“%d”,&box_volume);

​    Printf(“输入物品种数\n”);

​    Scanf(“%d”,&n);

​    A=(int *)malloc(sizeof(int)*n);

​    Printf(“请按体积从大到小顺序输入各物品的体积：”);

​    For (i=0;i<n;i++)   scanf(“%d”,a+i);

​    Box_h=box_t=NULL;

​    Box_count=0;

​    For (i=0;i<n;i++)

​    {   p=(ELE *)malloc(sizeof(ELE));

​       p->vno=i;

​       for (j=box_h;j!=NULL;j=j->next)

​           if (j->remainder>=a[i])  break;

​       if (j==NULL)

​       {   j=(HNODE *)malloc(sizeof(HNODE));

​           j->remainder=box_volume-a[i];

​           j->head=NULL;

​           if (box_h==NULL)     box_h=box_t=j;

​           else  box_t=boix_t->next=j;

​           j->next=NULL;

​           box_count++;

​       }

​       else  j->remainder-=a[i];

​       for (q=j->next;q!=NULL&&q->link!=NULL;q=q->link);

​       if (q==NULL)

​       {   p->link=j->head;

​           j->head=p;

​       }

​       else

​       {   p->link=NULL;

​           q->link=p;

​       }

​    }

​    printf(“共使用了%d只箱子”，box_count);

​    printf(“各箱子装物品情况如下：”);

​    for (j=box_h,i=1;j!=NULL;j=j->next,i++)

​    {   printf(“第%2d只箱子，还剩余容积%4d，所装物品有；\n”,I,j->remainder);

​       for (p=j->head;p!=NULL;p=p->link)

​           printf(“%4d”,p->vno+1);

​       printf(“\n”);

​    }

}

1.6 分治法

1．分治法的基本思想

任何一个可以用计算机求解的问题所需的计算时间都与其规模N有关。问题的规模越小，越容易直接求解，解题所需的计算时间也越少。例如，对于n个元素的排序问题，当n=1时，不需任何计算；n=2时，只要作一次比较即可排好序；n=3时只要作3次比较即可，…。而当n较大时，问题就不那么容易处理了。要想直接解决一个规模较大的问题，有时是相当困难的。

分治法的设计思想是，将一个难以直接解决的大问题，分割成一些规模较小的相同问题，以便各个击破，分而治之。

如果原问题可分割成k个子问题（1<k≤n），且这些子问题都可解，并可利用这些子问题的解求出原问题的解，那么这种分治法就是可行的。由分治法产生的子问题往往是原问题的较小模式，这就为使用递归技术提供了方便。在这种情况下，反复应用分治手段，可以使子问题与原问题类型一致而其规模却不断缩小，最终使子问题缩小到很容易直接求出其解。这自然导致递归过程的产生。分治与递归像一对孪生兄弟，经常同时应用在算法设计之中，并由此产生许多高效算法。

2．分治法的适用条件

分治法所能解决的问题一般具有以下几个特征：

（1）该问题的规模缩小到一定的程度就可以容易地解决；

（2）该问题可以分解为若干个规模较小的相同问题，即该问题具有最优子结构性质；

（3）利用该问题分解出的子问题的解可以合并为该问题的解；

（4）该问题所分解出的各个子问题是相互独立的，即子问题之间不包含公共的子问题。 

第一条特征是绝大多数问题都可以满足的，因为问题的计算复杂性一般是随着问题规模的增加而增加；

第二条特征是应用分治法的前提，它也是大多数问题可以满足的，此特征反映了递归思想的应用；

第三条特征是关键，能否利用分治法完全取决于问题是否具有第三条特征，如果具备了第一条和第二条特征，而不具备第三条特征，则可以考虑贪心法或动态规划法。

第四条特征涉及到分治法的效率，如果各子问题是不独立的，则分治法要做许多不必要的工作，重复地解公共的子问题，此时虽然可用分治法，但一般用动态规划法较好。

3．分治法的基本步骤

分治法在每一层递归上都有三个步骤：

（1）分解：将原问题分解为若干个规模较小，相互独立，与原问题形式相同的子问题；

（2）求解：若子问题规模较小而容易被解决则直接解，否则递归地解各个子问题；

（3）合并：将各个子问题的解合并为原问题的解。

它的一般的算法设计模式如下：

Divide_and_Conquer（P）

if |P|≤n0 

then return（ADHOC（P））

将P分解为较小的子问题P1、P2、…、Pk

for i←1 to k 

do 

yi ← Divide-and-Conquer（Pi）          △ 递归解决Pi

T ← MERGE（y1，y2，…，yk）              △ 合并子问题

Return（T）

其中 |P| 表示问题P的规模；n0为一阈值，表示当问题P的规模不超过n0时，问题已容易直接解出，不必再继续分解。ADHOC（P）是该分治法中的基本子算法，用于直接解小规模的问题P。因此，当P的规模不超过n0时，直接用算法ADHOC（P）求解。

算法MERGE（y1，y2，…，yk）是该分治法中的合并子算法，用于将P的子问题P1、P2、…、Pk的相应的解y1、y2、…、yk合并为P的解。

根据分治法的分割原则，原问题应该分为多少个子问题才较适宜？各个子问题的规模应该怎样才为适当？这些问题很难予以肯定的回答。但人们从大量实践中发现，在用分治法设计算法时，最好使子问题的规模大致相同。换句话说，将一个问题分成大小相等的k个子问题的处理方法是行之有效的。许多问题可以取k=2。这种使子问题规模大致相等的做法是出自一种平衡子问题的思想，它几乎总是比子问题规模不等的做法要好。

分治法的合并步骤是算法的关键所在。有些问题的合并方法比较明显，有些问题合并方法比较复杂，或者是有多种合并方案；或者是合并方案不明显。究竟应该怎样合并，没有统一的模式，需要具体问题具体分析。

【问题】循环赛日程表 

问题描述：设有n=2k个运动员要进行网球循环赛。设计一个满足以下要求的比赛日程表：

（1）每个选手必须与其他n-1个选手各赛一次； 

（2）每个选手一天只能参赛一次； 

（3）循环赛在n-1天内结束。 

请按此要求将比赛日程表设计成有n行和n-1列的一个表。在表中的第i行，第j列处填入第i个选手在第j天所遇到的选手。其中1≤i≤n，1≤j≤n-1。

按分治策略，我们可以将所有的选手分为两半，则n个选手的比赛日程表可以通过n/2个选手的比赛日程表来决定。递归地用这种一分为二的策略对选手进行划分，直到只剩下两个选手时，比赛日程表的制定就变得很简单。这时只要让这两个选手进行比赛就可以了。

 

​                                 1   2   3   4   5   6   7

​                              1   2   3   4   5   6   7   8

​                              2   1   4   3   6   7   8   5

​                              3   4   1   2   7   8   5   6

​               1   2   3          4   3   2   1   8   5   6   7

​             1   2   3   4          5   6   7   8   1   4   3   2

   1          2   1   4   3          6   5   8   7   2   1   4   3

1   2          3   4   1   2          7   8   5   6   3   2   1   4

2   1          4   3   2   1          8   7   6   5   4   3   2   1

（1）            （2）                     （3）

图表示 2个、4个和8个选手的比赛日程表

图1所列出的正方形表（3）是8个选手的比赛日程表。其中左上角与左下角的两小块分别为选手1至选手4和选手5至选手8前3天的比赛日程。据此，将左上角小块中的所有数字按其相对位置抄到右下角，又将左下角小块中的所有数字按其相对位置抄到右上角，这样我们就分别安排好了选手1至选手4和选手5至选手8在后4天的比赛日程。依此思想容易将这个比赛日程表推广到具有任意多个选手的情形。

1.7 动态规划法

   经常会遇到复杂问题不能简单地分解成几个子问题，而会分解出一系列的子问题。简单地采用把大问题分解成子问题，并综合子问题的解导出大问题的解的方法，问题求解耗时会按问题规模呈幂级数增加。

   为了节约重复求相同子问题的时间，引入一个数组，不管它们是否对最终解有用，把所有子问题的解存于该数组中，这就是动态规划法所采用的基本方法。以下先用实例说明动态规划方法的使用。

◆动态规划的适用条件

任何思想方法都有一定的局限性，超出了特定条件，它就失去了作用。同样，动态规划也并不是万能的。适用动态规划的问题必须满足最优化原理和无后效性。

（1）最优化原理（最优子结构性质）

最优化原理可这样阐述：一个最优化策略具有这样的性质，不论过去状态和决策如何，对前面的决策所形成的状态而言，余下的诸决策必须构成最优策略。简而言之，一个最优化策略的子策略总是最优的。一个问题满足最优化原理又称其具有最优子结构性质。

 

图2

例如图2中，若路线I和J是A到C的最优路径，则根据最优化原理，路线J必是从B到C的最优路线。这可用反证法证明：假设有另一路径J’是B到C的最优路径，则A到C的路线取I和J’比I和J更优，矛盾。从而证明J’必是B到C的最优路径。

最优化原理是动态规划的基础，任何问题，如果失去了最优化原理的支持，就不可能用动态规划方法计算。根据最优化原理导出的动态规划基本方程是解决一切动态规划问题的基本方法。

（2）无后向性

将各阶段按照一定的次序排列好之后，对于某个给定的阶段状态，它以前各阶段的状态无法直接影响它未来的决策，而只能通过当前的这个状态。换句话说，每个状态都是过去历史的一个完整总结。这就是无后向性，又称为无后效性。

（3）子问题的重叠性

动态规划算法的关键在于解决冗余，这是动态规划算法的根本目的。动态规划实质上是一种以空间换时间的技术，它在实现的过程中，不得不存储产生过程中的各种状态，所以它的空间复杂度要大于其它的算法。选择动态规划算法是因为动态规划算法在空间上可以承受，而搜索算法在时间上却无法承受，所以我们舍空间而取时间。

所以，能够用动态规划解决的问题还有一个显著特征：子问题的重叠性。这个性质并不是动态规划适用的必要条件，但是如果该性质无法满足，动态规划算法同其他算法相比就不具备优势。

◆动态规划的基本思想

前文主要介绍了动态规划的一些理论依据，我们将前文所说的具有明显的阶段划分和状态转移方程的动态规划称为标准动态规划，这种标准动态规划是在研究多阶段决策问题时推导出来的，具有严格的数学形式，适合用于理论上的分析。在实际应用中，许多问题的阶段划分并不明显，这时如果刻意地划分阶段法反而麻烦。一般来说，只要该问题可以划分成规模更小的子问题，并且原问题的最优解中包含了子问题的最优解（即满足最优子化原理），则可以考虑用动态规划解决。

动态规划的实质是分治思想和解决冗余，因此，动态规划是一种将问题实例分解为更小的、相似的子问题，并存储子问题的解而避免计算重复的子问题，以解决最优化问题的算法策略。

由此可知，动态规划法与分治法和贪心法类似，它们都是将问题实例归纳为更小的、相似的子问题，并通过求解子问题产生一个全局最优解。

贪心法的当前选择可能要依赖已经作出的所有选择，但不依赖于有待于做出的选择和子问题。因此贪心法自顶向下，一步一步地作出贪心选择；

而分治法中的各个子问题是独立的（即不包含公共的子问题），因此一旦递归地求出各子问题的解后，便可自下而上地将子问题的解合并成问题的解。

不足之处：如果当前选择可能要依赖子问题的解时，则难以通过局部的贪心策略达到全局最优解；如果各子问题是不独立的，则分治法要做许多不必要的工作，重复地解公共的子问题。

解决上述问题的办法是利用动态规划。该方法主要应用于最优化问题，这类问题会有多种可能的解，每个解都有一个值，而动态规划找出其中最优（最大或最小）值的解。若存在若干个取最优值的解的话，它只取其中的一个。在求解过程中，该方法也是通过求解局部子问题的解达到全局最优解，但与分治法和贪心法不同的是，动态规划允许这些子问题不独立，（亦即各子问题可包含公共的子问题）也允许其通过自身子问题的解作出选择，该方法对每一个子问题只解一次，并将结果保存起来，避免每次碰到时都要重复计算。

因此，动态规划法所针对的问题有一个显著的特征，即它所对应的子问题树中的子问题呈现大量的重复。动态规划法的关键就在于，对于重复出现的子问题，只在第一次遇到时加以求解，并把答案保存起来，让以后再遇到时直接引用，不必重新求解。

3、动态规划算法的基本步骤

设计一个标准的动态规划算法，通常可按以下几个步骤进行：

（1）划分阶段：按照问题的时间或空间特征，把问题分为若干个阶段。注意这若干个阶段一定要是有序的或者是可排序的（即无后向性），否则问题就无法用动态规划求解。 

（2）选择状态：将问题发展到各个阶段时所处于的各种客观情况用不同的状态表示出来。当然，状态的选择要满足无后效性。 

（3）确定决策并写出状态转移方程：之所以把这两步放在一起，是因为决策和状态转移有着天然的联系，状态转移就是根据上一阶段的状态和决策来导出本阶段的状态。所以，如果我们确定了决策，状态转移方程也就写出来了。但事实上，我们常常是反过来做，根据相邻两段的各状态之间的关系来确定决策。 

（4）写出规划方程（包括边界条件）：动态规划的基本方程是规划方程的通用形式化表达式。

一般说来，只要阶段、状态、决策和状态转移确定了，这一步还是比较简单的。动态规划的主要难点在于理论上的设计，一旦设计完成，实现部分就会非常简单。根据动态规划的基本方程可以直接递归计算最优值，但是一般将其改为递推计算，实现的大体上的框架如下：

标准动态规划的基本框架

\1.  对fn+1(xn+1)初始化;   {边界条件}

for k:=n downto 1 do

for 每一个xk∈Xk do

for 每一个uk∈Uk(xk) do

begin

fk(xk):=一个极值;         {∞或－∞}

xk+1:=Tk(xk,uk);          {状态转移方程}

t:=φ(fk+1(xk+1),vk(xk,uk));    {基本方程(9)式}

if  t比fk(xk)更优 then fk(xk):=t; {计算fk(xk)的最优值}

end;

t:=一个极值;                {∞或－∞}

for 每一个x1∈X1 do

if f1(x1)比t更优 then t:=f1(x1);    {按照10式求出最优指标}

输出t;

但是，实际应用当中经常不显式地按照上面步骤设计动态规划，而是按以下几个步骤进行：

（1）分析最优解的性质，并刻划其结构特征。 

（2）递归地定义最优值。 

（3）以自底向上的方式或自顶向下的记忆化方法（备忘录法）计算出最优值。 

（4）根据计算最优值时得到的信息，构造一个最优解。 

步骤（1）～（3）是动态规划算法的基本步骤。在只需要求出最优值的情形，步骤（4）可以省略，若需要求出问题的一个最优解，则必须执行步骤（4）。此时，在步骤（3）中计算最优值时，通常需记录更多的信息，以便在步骤（4）中，根据所记录的信息，快速地构造出一个最优解。

总结：动态规划实际上就是最优化的问题，是指将原问题的大实例等价于同一最优化问题的较小实例，自底向上的求解最小实例，并将所求解存放起来，存放的结果就是为了准备数据。与递归相比，递归是不断的调用子程序求解，是自顶向下的调用和求解。

【问题】凸多边形的最优三角剖分问题

问题描述：多边形是平面上一条分段线性的闭曲线。也就是说，多边形是由一系列首尾相接的直线段组成的。组成多边形的各直线段称为该多边形的边。多边形相接两条边的连接点称为多边形的顶点。若多边形的边之间除了连接顶点外没有别的公共点，则称该多边形为简单多边形。一个简单多边形将平面分为3个部分：被包围在多边形内的所有点构成了多边形的内部；多边形本身构成多边形的边界；而平面上其余的点构成了多边形的外部。当一个简单多边形及其内部构成一个闭凸集时，称该简单多边形为凸多边形。也就是说凸多边形边界上或内部的任意两点所连成的直线段上所有的点均在该凸多边形的内部或边界上。

通常，用多边形顶点的逆时针序列来表示一个凸多边形，即P=<v0，v1，…，vn-1>表示具有n条边v0v1，v1v2，…，vn-1vn的一个凸多边形，其中，约定v0=vn 。

若vi与vj是多边形上不相邻的两个顶点，则线段vivj称为多边形的一条弦。弦将多边形分割成凸的两个子多边形<vi，vi+1，…，vj>和<vj，vj+1，…，vi>。多边形的三角剖分是一个将多边形分割成互不重迭的三角形的弦的集合T。图1是一个凸多边形的两个不同的三角剖分。

 

 

 

(a)   (b)

图1 一个凸多边形的2个不同的三角剖分

在凸多边形P的一个三角剖分T中，各弦互不相交且弦数已达到最大，即P的任一不在T中的弦必与T中某一弦相交。在一个有n个顶点的凸多边形的三角刮分中，恰好有n-3条弦和n-2个三角形。

凸多边形最优三角剖分的问题是：给定一个凸多边形P=<v0，v1，…，vn-1>以及定义在由多边形的边和弦组成的三角形上的权函数ω。要求确定该凸多边形的一个三角剖分，使得该三角剖分对应的权即剖分中诸三角形上的权之和为最小。

可以定义三角形上各种各样的权函数ω。例如：定义ω(△vivjvk)=| vivj |+| vivk |+| vkvj |，其中，| vivj |是点vi到vj的欧氏距离。相应于此权函数的最优三角剖分即为最小弦长三角剖分。

（1）最优子结构性质

凸多边形的最优三角剖分问题有最优子结构性质。事实上，若凸（n+1）边形P=<v0，v1 ，…，vn>的一个最优三角剖分T包含三角形v0vkvn，1≤k≤n-1，则T的权为3个部分权的和，即三角形v0vkvn的权，子多边形<v0，v1，…，vk>的权和<vk，vk+1，…，vn>的权之和。可以断言由T所确定的这两个子多边形的三角剖分也是最优的，因为若有<v0，v1，…，vk>或<vk，vk+1，…，vn>的更小权的三角剖分，将会导致T不是最优三角剖分的矛盾。

（2）最优三角剖分对应的权的递归结构

首先，定义t[i，j]（1≤i<j≤n）为凸子多边形<vi-1，vi，…，vj>的最优三角剖分所对应的权值，即最优值。为方便起见，设退化的多边形<vi-1，vi>具有权值0。据此定义，要计算的凸（n+1）边多边形P对应的权的最优值为t[1，n]。

t[i，j]的值可以利用最优子结构性质递归地计算。由于退化的2顶点多边形的权值为0，所以t[i，i]=0，i=1，2，…，n 。当j一i≥1时，子多边形<vi-1，vi，…，vj>至少有3个顶点。由最优于结构性质，t[i，j]的值应为t[i，k]的值加上t[k+1，j]的值，再加上△vi-1vkvj的权值，并在i≤k≤j-1的范围内取最小。由此，t[i，j]可递归地定义为：

 

（3）计算最优值

下面描述的计算凸（n+1）边形P=<v0，v1，…，vn>的三角剖分最优权值的动态规划算法MINIMUM_WEIGHT，输入是凸多边形P=<v0，v1，…，vn>的权函数ω，输出是最优值t[i，j]和使得t[i，k]+t[k+1，j]+ω（△vi-1vkvj）达到最优的位置（k=）s[i，j]，1≤i≤j≤n 。

Procedure  MINIMUM_WEIGHT(P，w)；

Begin

n=length[p]-1;

for i=1 to n do 

t[i,i]:=0;

for ll=2 to n do

for i=1 to n-ll+1 do

begin

j=i+ll-1;

t[i,j]=∞;

for k=i to j-1 do

begin

​        q=t[i,k]+t[k+1,j]+ω(△vi-1vkvj); 

if q<t[i,j] then

begin 

t[i,j]=q;

s[i,j]=k;

end;

​           end;

end;

  return(t,s);

end;

算法MINIMUM_WEIGHT_占用θ(n2)空间，耗时θ(n3)。

（4）构造最优三角剖分

如我们所看到的，对于任意的1≤i≤j≤n ，算法MINIMUM_WEIGHT在计算每一个子多边形<vi-1，vi，…，vj>的最优三角剖分所对应的权值t[i，j]的同时，还在s[i，j]中记录了此最优三角剖分中与边（或弦）vi-1vj构成的三角形的第三个顶点的位置。因此，利用最优子结构性质并借助于s[i，j]，1≤i≤j≤n ，凸（n+l）边形P=<v0，v1，…，vn>的最优三角剖分可容易地在Ο(n)时间内构造出来。

1.8 回溯法

   回溯法也称为试探法，该方法首先暂时放弃关于问题规模大小的限制，并将问题的候选解按某种顺序逐一枚举和检验。当发现当前候选解不可能是解时，就选择下一个候选解；倘若当前候选解除了还不满足问题规模要求外，满足所有其他要求时，继续扩大当前候选解的规模，并继续试探。如果当前候选解满足包括问题规模在内的所有要求时，该候选解就是问题的一个解。在回溯法中，放弃当前候选解，寻找下一个候选解的过程称为回溯。扩大当前候选解的规模，以继续试探的过程称为向前试探。

1、回溯法的一般描述

可用回溯法求解的问题P，通常要能表达为：对于已知的由n元组（x1，x2，…，xn）组成的一个状态空间E={（x1，x2，…，xn）∣xi∈Si ，i=1，2，…，n}，给定关于n元组中的一个分量的一个约束集D，要求E中满足D的全部约束条件的所有n元组。其中Si是分量xi的定义域，且 |Si| 有限，i=1，2，…，n。我们称E中满足D的全部约束条件的任一n元组为问题P的一个解。

解问题P的最朴素的方法就是枚举法，即对E中的所有n元组逐一地检测其是否满足D的全部约束，若满足，则为问题P的一个解。但显然，其计算量是相当大的。

我们发现，对于许多问题，所给定的约束集D具有完备性，即i元组（x1，x2，…，xi）满足D中仅涉及到x1，x2，…，xi的所有约束意味着j（j<i）元组（x1，x2，…，xj）一定也满足D中仅涉及到x1，x2，…，xj的所有约束，i=1，2，…，n。换句话说，只要存在0≤j≤n-1，使得（x1，x2，…，xj）违反D中仅涉及到x1，x2，…，xj的约束之一，则以（x1，x2，…，xj）为前缀的任何n元组（x1，x2，…，xj，xj+1，…，xn）一定也违反D中仅涉及到x1，x2，…，xi的一个约束，n≥i>j。因此，对于约束集D具有完备性的问题P，一旦检测断定某个j元组（x1，x2，…，xj）违反D中仅涉及x1，x2，…，xj的一个约束，就可以肯定，以（x1，x2，…，xj）为前缀的任何n元组（x1，x2，…，xj，xj+1，…，xn）都不会是问题P的解，因而就不必去搜索它们、检测它们。回溯法正是针对这类问题，利用这类问题的上述性质而提出来的比枚举法效率更高的算法。

回溯法首先将问题P的n元组的状态空间E表示成一棵高为n的带权有序树T，把在E中求问题P的所有解转化为在T中搜索问题P的所有解。树T类似于检索树，它可以这样构造： 

   设Si中的元素可排成xi(1) ，xi(2) ，…，xi(mi-1) ，|Si| =mi，i=1，2，…，n。从根开始，让T的第I层的每一个结点都有mi个儿子。这mi个儿子到它们的双亲的边，按从左到右的次序，分别带权xi+1(1) ，xi+1(2) ，…，xi+1(mi) ，i=0，1，2，…，n-1。照这种构造方式，E中的一个n元组（x1，x2，…，xn）对应于T中的一个叶子结点，T的根到这个叶子结点的路径上依次的n条边的权分别为x1，x2，…，xn，反之亦然。另外，对于任意的0≤i≤n-1，E中n元组（x1，x2，…，xn）的一个前缀I元组（x1，x2，…，xi）对应于T中的一个非叶子结点，T的根到这个非叶子结点的路径上依次的I条边的权分别为x1，x2，…，xi，反之亦然。特别，E中的任意一个n元组的空前缀（），对应于T的根。

   因而，在E中寻找问题P的一个解等价于在T中搜索一个叶子结点，要求从T的根到该叶子结点的路径上依次的n条边相应带的n个权x1，x2，…，xn满足约束集D的全部约束。在T中搜索所要求的叶子结点，很自然的一种方式是从根出发，按深度优先的策略逐步深入，即依次搜索满足约束条件的前缀1元组（x1i）、前缀2元组（x1，x2）、…，前缀I元组（x1，x2，…，xi），…，直到i=n为止。

   在回溯法中，上述引入的树被称为问题P的状态空间树；树T上任意一个结点被称为问题P的状态结点；树T上的任意一个叶子结点被称为问题P的一个解状态结点；树T上满足约束集D的全部约束的任意一个叶子结点被称为问题P的一个回答状态结点，它对应于问题P的一个解。

1.9 分支定界法：

分支限界法： 

这是一种用于求解组合优化问题的排除非解的搜索算法。类似于回溯法，分枝定界法在搜索解空间时，也经常使用树形结构来组织解空间。然而与回溯法不同的是，回溯算法使用深度优先方法搜索树结构，而分枝定界一般用宽度优先或最小耗费方法来搜索这些树。因此，可以很容易比较回溯法与分枝定界法的异同。相对而言，分枝定界算法的解空间比回溯法大得多，因此当内存容量有限时，回溯法成功的可能性更大。 

算法思想：分枝定界（branch and bound）是另一种系统地搜索解空间的方法，它与回溯法的主要区别在于对E-节点的扩充方式。每个活节点有且仅有一次机会变成E-节点。当一个节点变为E-节点时，则生成从该节点移动一步即可到达的所有新节点。在生成的节点中，抛弃那些不可能导出（最优）可行解的节点，其余节点加入活节点表，然后从表中选择一个节点作为下一个E-节点。从活节点表中取出所选择的节点并进行扩充，直到找到解或活动表为空，扩充过程才结束。 

有两种常用的方法可用来选择下一个E-节点（虽然也可能存在其他的方法）： 

\1) 先进先出（F I F O） 即从活节点表中取出节点的顺序与加入节点的顺序相同，因此活 

节点表的性质与队列相同。 

\2) 最小耗费或最大收益法在这种模式中，每个节点都有一个对应的耗费或收益。如果查找 

一个具有最小耗费的解，则活节点表可用最小堆来建立，下一个E-节点就是具有最小耗费 

的活节点；如果希望搜索一个具有最大收益的解，则可用最大堆来构造活节点表，下一个 

E-节点是具有最大收益的活节点。

2．几个重要的算法程序

2.1 堆排序

堆排序也是选择排序的一种，其特点是，在以后各趟的“选择”中利用在第一趟选择中已经得到的关键字比较的结果。 

堆的定义: 堆是满足下列性质的数列{r1, r2, …，rn}： 或 若将此数列看成是一棵完全二叉树，则堆或是空树或是满足下列特性的完全二叉树：其左、右子树分别是堆，并且当左/右子树不空时，根结点的值小于(或大于)左/右子树根结点的值。 

由此，若上述数列是堆，则r1必是数列中的最小值或最大值，分别称作小顶堆或大顶堆。 

  堆排序即是利用堆的特性对记录序列进行排序的一种排序方法。具体作法是：先建一个“大顶堆”，即先选得一个关键字为最大的记录，然后与序列中最后一个记录交换，之后继续对序列中前n-1记录进行“筛选”，重新将它调整为一个“大顶堆”，再将堆顶记录和第n-1个记录交换，如此反复直至排序结束。 

所谓“筛选”指的是，对一棵左/右子树均为堆的完全二叉树，“调整”根结点使整个二叉树为堆。 

堆排序的算法如下所示： 

template 

void HeapSort ( Elem R[], int n ) { 

// 对记录序列R[1..n]进行堆排序。 

for ( i=n/2; i>0; --i ) 

​          // 把R[1..n]建成大顶堆 

  HeapAdjust ( R, i, n ); 

for ( i=n; i>1; --i ) { 

R[1]←→R;      

​    // 将堆顶记录和当前未经排序子序列 

​    // R[1..i]中最后一个记录相互交换 

HeapAdjust(R, 1, i-1);       

​    // 将R[1..i-1] 重新调整为大顶堆 

} 

} // HeapSort 

其中筛选的算法如下所示。为将R[s..m]调整为“大顶堆”，算法中“筛选”应沿关键字较大的孩子结点向下进行。 

Template 

void HeapAdjust (Elem R[], int s, int m) { 

// 已知R[s..m]中记录的关键字除R[s].key之 

// 外均满足堆的定义，本函数调整R[s] 的关 

// 键字，使R[s..m]成为一个大顶堆（对其中 

// 记录的关键字而言） 

rc = R[s]; 

for ( j=2*s; j<=m; j*=2 ) {// 沿key较大的孩子结点向下筛选 

if ( j   if ( rc.key >= R[j].key )  break; // rc应插入在位置s上 

  R[s] = R[j];  s = j; 

  } 

  R[s] = rc; // 插入 

} // HeapAdjust 

堆排序的时间复杂度分析： 

\1. 对深度为k的堆，“筛选”所需进行的关键字比较的次数至多为2(k-1); 

2．对n个关键字，建成深度为+1)?log2n?h(=的堆，所需进行的关键字比较的次数至多为4n; 

\3. 调整“堆顶”n-1次，总共进行的关键字比较的次数不超过 

+?2(log2(n-1) + …+log22)?log2(n-2)?<log2n?2n(

因此，堆排序的时间复杂度为O(nlogn) 

2.2 归并排序

归并排序：是通过“归并”两个或两个以上的记录有序子序列，逐步增加记录有序序列的长度;归并排序的基本思想是：将两个或两个以上的有序子序列“归并”为一个有序序列。 

 在内部排序中，通常采用的是2-路归并排序。即：将两个位置相邻的有序子序列 归并为一个有序序列。 

“归并”算法描述如下： 

template 

void Merge (Elem SR[], Elem TR[], int i, int m, int n) { 

// 将有序的SR[i..m]和SR[m+1..n]归并为 

// 有序的TR[i..n] 

for (j=m+1, k=i;  i<=m && j<=n;  ++k)  

{     // 将SR中记录由小到大地并入TR 

  if (SR.key<=SR[j].key)  TR[k] = SR[i++]; 

  else TR[k] = SR[j++]; 

} 

if (i<=m) TR[k..n] = SR[i..m]; 

​       // 将剩余的SR[i..m]复制到TR 

if (j<=n) TR[k..n] = SR[j..n]; 

​        // 将剩余的SR[j..n]复制到TR 

} // Merge 

归并排序的算法可以有两种形式：递归的和递推的，它是由两种不同的程序设计思想得出的。在此，只讨论递归形式的算法。 

这是一种自顶向下的分析方法： 

如果记录无序序列R[s..t]的两部分]?(s+t)/2?R[s..和?(s+t)/2+1..t?R[分别按关键字有序，则利用上述归并算法很容易将它们归并成整个记录序列是一个有序序列，由此，应该先分别对这两部分进行2-路归并排序。 

template 

void Msort ( Elem SR[], Elem TR1[], int s, int t ) { 

// 将SR[s..t]进行2-路归并排序为TR1[s..t]。 

if (s==t)  TR1[s] = SR[s]; 

else { 

m = (s+t)/2; 

// 将SR[s..t]平分为SR[s..m]和SR[m+1..t] 

Msort (SR, TR2, s, m); 

 // 递归地将SR[s..m]归并为有序的TR2[s..m] 

Msort (SR, TR2, m+1, t); 

//递归地SR[m+1..t]归并为有序的TR2[m+1..t] 

Merge (TR2, TR1, s, m, t); 

// 将TR2[s..m]和TR2[m+1..t]归并到TR1[s..t] 

} 

} // MSort 

 

template 

void MergeSort (Elem R[]) { 

// 对记录序列R[1..n]作2-路归并排序。 

 MSort(R, R, 1, n); 

} // MergeSort 

 

容易看出，对n个记录进行归并排序的时间复杂度为Ο(nlogn)。即：每一趟归并的时间复杂度为O(n)，总共需进行logn趟。

下面我们比较一下上面谈到的各种内部排序方法 

首先，从时间性能上说： 

\1. 按平均的时间性能来分，有三类排序方法： 

时间复杂度为O(nlogn)的方法有：快速排序、堆排序和归并排序，其中以快速排序为最好； 

时间复杂度为O(n2)的有：直接插入排序、起泡排序和简单选择排序，其中以直接插入为最好，特别是对那些对关键字近似有序的记录序列尤为如此； 

时间复杂度为O(n)的排序方法只有，基数排序。 

\2. 当待排记录序列按关键字顺序有序时，直接插入排序和起泡排序能达到O(n)的时间复杂度;而对于快速排序而言，这是最不好的情况，此时的时间性能蜕化为O(n2)，因此是应该尽量避免的情况。 

\3. 简单选择排序、堆排序和归并排序的时间性能不随记录序列中关键字的分布而改变。 

其次，从空间性能上说： 

指的是排序过程中所需的辅助空间大小。 

\1. 所有的简单排序方法(包括：直接插入、起泡和简单选择)和堆排序的空间复杂度为O(1)； 

\2. 快速排序为O(logn)，为栈所需的辅助空间; 

\3. 归并排序所需辅助空间最多，其空间复杂度为O(n); 

\4. 链式基数排序需附设队列首尾指针，则空间复杂度为O(rd)。 

再次，从排序方法的稳定性能上说： 

稳定的排序方法指的是，对于两个关键字相等的记录，它们在序列中的相对位置，在排序之前和经过排序之后，没有改变。当对多关键字的记录序列进行LSD方法排序时，必须采用稳定的排序方法。对于不稳定的排序方法，只要能举出一个实例说明即可。我们需要指出的是：快速排序和堆排序是不稳定的排序方法。

int * ShellSort(int * array,int num)

{

  int d=num;

  while(d>1)

  {

​    d=(d+1)/2;

​    for(int i=d;i<num;i++)

​    {

​      if(array[i]<array[i-d])

​      {

​        int tmp=array[i];

​        for(int j=i-d;j>=0&&tmp<array[j];j-=d)

​          array[j+d]=array[j];

​        array[j+d]=tmp;

​      }

​    }

  }

  return array;

}

归并排序，不知道这样算不算 非递归 VS2008中编译运行，加上必要的头文件就行。 C/C++ codetypedef int dataType;

 

int arraySize = 0; //全局数组大小

 

int _tmain(int argc, _TCHAR* argv[])

{   

  void MergeSort(dataType *ptrArray);

  void MergePass(dataType *ptrA, dataType *ptrB, int s);

  void Merge(dataType *ptrA, dataType *ptrB, int begin, int mid, int end);

  //////////////////////////////////////////////////////////////////////////

 

 

  dataType intArray[7] = {3, 6, 4, 12, 8, 5, 14};

 

  arraySize = sizeof(intArray) / sizeof(dataType);

 

  MergeSort(intArray);

 

  for(int i = 0; i != 7; ++i){

​    printf("%d ",intArray[i]);

  }

  printf("\n");

 

 

  return 0;

}

 

/********************************************************************/

/*如何合并？                 */

/*两手各指着（已排好的）左右两堆的最小数据，取出两者中较小的一个后，*/

/*随即指向那一堆的手移向下一层的数据，           */

/*永远不必翻下面的数据，只需要盯着最上面的两个数据       */

/********************************************************************/

 

void Merge(dataType *ptrA, dataType *ptrB, int begin, int mid, int end)

{

  int i = begin, k = begin;

  int j = mid + 1;

 

  while(i <= mid && j <= end){

​    if(ptrA[i] < ptrA[j])

​      ptrB[k++] = ptrA[i++];

​    else

​      ptrB[k++] = ptrA[j++];

  }

  if (i > mid)

​    while (j <= end)

​      ptrB[k++] = ptrA[j++];

  else

​    while (i <= mid)

​      ptrB[k++] = ptrA[i++];

}

 

/********************************/

/*对相邻为s的一段序列排序   */

/*3  6  4  12  8  5  14   */

/* [3,6] [4,12] [5,8] [14]   */

/*[3,4,6,12][5,8,14]     */

/*[3,4,5,6,8,12,14]     */

/********************************/

 

void MergePass(dataType *ptrA, dataType *ptrB, int s)

{

  int i;

  for (i = 0; i <= arraySize - 2 * s; i += 2 * s){

​    //合并大小为s 的相邻二段子数组

​    Merge(ptrA, ptrB, i, i + s - 1, i + 2 * s - 1);

  }

 

  //剩下的元素个数小于2s

  if ((i + s) < arraySize)

​    Merge(ptrA, ptrB, i, i + s - 1, arraySize - 1);

  else

​    while(i != arraySize){

​      ptrB[i] = ptrA[i];

​      i++;

​    }

}

 

void MergeSort(dataType *ptrA)

{

  dataType *ptrB = (dataType *)malloc(arraySize * sizeof(dataType));

 

  int i = 1;

  while(i < arraySize){

​    MergePass(ptrA, ptrB, i); //合并到数组b

​    i += i;

​    MergePass(ptrB, ptrA, i); //合并到数组a

​    i += i;

  }

 

  free(ptrB);

}

二分搜索的递归与非递归 C/C++ codebool binarySearch(vector<int>& a, int data, int low, int high, int& count){

  static bool flag=false;

  int middle=(low+high)/2;

  cout<<a[middle]<<" ";

  count++;

  if(low<=high){     

​    if(data<a[middle])

​      binarySearch(a, data, low,middle-1,count);

​    else if(data>a[middle])

​      binarySearch(a, data, middle+1,high, count);     

​    else flag=true;

  }

  return flag;

}

 

bool binarySearch2(vector<int>& a, int data, int& count){

  int low=0, high=a.size()-1;

  int middle=(low+high)/2;

  while(low<=high){

​    cout<<a[middle]<<" ";

​    count++;

​    if(data<a[middle])

​      high=middle-1;

​    else if(data>a[middle])

​      low=middle+1;

​    else return true;

​    middle=(low+high)/2;

  }

  return false;

}

 

插入排序的递归与非递归 C/C++ codevoid insertionSort(vector<int>& a){

  for(int i=1;i<a.size();i++){

​    int temp=a[i];

​    int j;

​    for(j=i-1; j>=0;j--){

​      if(temp<a[j])

​        a[j+1]=a[j];

​      else break;

​    }

​    a[j+1]=temp;

  }

}

void insertionSort(int *a,int item,int size)

{

  if(size==0)

​    a[0]=item;

  else

  {

​    for(int i=size-1;i>=0;i--)

​    {

​      if(item<a[i])

​        a[i+1]=a[i];

​      else 

​        break;

​    }

​    a[i+1]=item;

​    size--;

​    insertionSort(a,a[size],size);

  }

}

 

问题】编写计算斐波那契（Fibonacci）数列的第n项函数fib（n）。斐波那契数列为：0、1、1、2、3、……，即：

​       fib(0)=0;

​       fib(1)=1;

​       fib(n)=fib(n-1)+fib(n-2)     （当n>1时）。

 

\# include <stdio.h>

 

long Fibonacci(long first, long second, long n );//递归的方法

long Fibonacci_(long first, long second, long n );//递推的方法

 

void main()

{   

  long a = 0, b = 1, c = 45;

  for(long i = 0; i <= c; i++)

  {

​    printf("i=%ld.c=%ld,Fibonacci_=%ld\n", i,c, Fibonacci_(a, b, i));

  }

  for(long i = 0; i <= c; i++)

  {

​    printf("i=%ld.c=%ld,Fibonacci=%ld\n", i,c, Fibonacci(a, b, i));

  }

  getchar();

}

 

long Fibonacci(long first, long second, long n)//递归的方法

{

  if(0 == n)

​    return first;

  else if(1 == n)

​    return second;

  else

  {

​    return  Fibonacci(first,second,(n - 1))+Fibonacci(first,second,(n - 2));

  }

}

 

long Fibonacci_(long first, long second, long n )//递推的方法

{

  long a = 0, b = 1, c = 0;

  if(0 == n)

​    return first;

  else if(1 == n)

​    return second;

  else

  {

​    for(long i = 0; i <= (n - 2); i++)

​    {

​      c = a +b;

​      a = b;

​      b = c;

​    }

​    return c;

  }

}

 

由于递归引起一系列的函数调用，并且可能会有一系列的重复计算，递归算法的执行效率相对较低。当某个递归算法能较方便地转换成递推算法 时，通常按递推算法编写程序。例如上例计算斐波那契数列的第n项的函数fib(n)应采用递推算法，即从斐波那契数列的前两项出发，逐次由前 两项计算出下一项，直至计算出要求的第n项。 ==>你可以尝试运行一下查找一个数组中，相连元素（int型）之和最大的串 如：{6, 1, -9, 4, -3, 2, 8, -7, 5, 0}就是从4到8之和最大 三种算法O(N^3),O(N^2),O(N) C/C++ code#include<iostream>

\#include<vector>

using namespace std;

 

int _sum(vector<int>& a, int& low, int& high){

  int conSum=0;

  for(int i=low; i<=high; i++){

​    conSum+=a[i];

  }

  return conSum;

}

 

int maxContiguous1(vector<int>& a, int& low, int& high) {//O(N^3)

  int maxSum = 0;

  int sum=0;

  int _high=0;

  for (int i = 0; i < high ; i++) {

​    for (int j = i + 1; j < high; j++) {

​      if (_sum(a,i,j)> maxSum) {

​        maxSum = _sum(a,i,j);

​        low = i;

​        _high = j;

​      }

​    }

  }

  high=_high;

  return maxSum;

}

 

int maxContiguous2(vector<int>& a, int& low, int& high) {//O(N^2)

  int maxSum = 0;

  int sum=0;

  int _high=0;

  for (int i = 0; i < high ; i++) {

​    sum=a[i];

​    for (int j = i + 1; j < high; j++) {

​      sum+=a[j]; 

​      if (sum> maxSum) {

​        maxSum = sum;

​        low = i;

​        _high = j;

​      }

​    }

  }

  high=_high;

  return maxSum;

}

 

int maxContiguous3(vector<int>& a, int& low, int& high){//O(N)

  int maxSum = 0;

  int sum=0;

  int _high=0;

  for (int j=0,i = 0; i < high ; i++) {

​    sum+=a[i]; 

​    if (sum> maxSum) {

​      maxSum = sum;

​      low =j;

​      _high = i;

​    }

​    else if(sum<0){

​      j=i+1;

​      sum=0;

​    }

  }

  high=_high;

  return maxSum;

}

 

int main() {

  int b[] = {6, 1, -9, 4, -3, 2, 8, -7, 5, 0};

  vector<int> a(b, b + 10);

  int low = 0, high = a.size()-1;

  int maxSum = maxContiguous3(a, low, high);

  cout << "from a[" << low << "] to a[" << high << "] =" << maxSum;

  system("pause");

} 

 

 

 

 

 

 














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