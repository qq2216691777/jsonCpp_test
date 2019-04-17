# 解析json文件的C++库 - jsoncpp



在编程的过程中，需要有很多的配置项，之前把配置项都固化到了程序代码中，后来随着代码量的逐渐增加，系统越来越复杂，在修改配置文件的情况下需要对整个系统重新编译明显是不现实的，所以计划用json文件作为配置文件。

这里使用jsoncpp库来解析json数据。

jsoncpp库地址：<https://github.com/open-source-parsers/jsoncpp>



#### 操作步骤：

拷贝官方库文件中的 src/json、src/lib_json 文件夹。

添加main.cpp文件

创建CMakeList.txt文件，同时重新编写lib_json目录下的CMakeList.txt文件.

目前整个程序是运行在 ubuntu 16.04系统下的。整个工程代码编译正常。



### 测试：

```sheel
	cd 代码目录/
	mkdir build
	cd build/
	cmake ..
	make 
	./jsoncpp_test

```



