KSFT_API4Spy

版本说明
1  dev2/是最新的重新开发的工程，原先的可以废弃，以下所提及的很多文件均来自dev2/下的对应文件；
2  本API是一个历经快两年的成果，其技术规划思路等可以参考doc/KSFT_API4Spy技术构思.docx文档；
3  本API的所有发布文档和源代码文件，均可以被公开使用，我们不做限制；


使用API的开发环境要求
1  VS2010(VC10)
2  目前只支持win32
3  头文件就两个KS_Spy.h, KS_Json.h，前者是主要的功能API定义，后者是做了些简单封装的json处理接口；
4  lib文件只有一个，KS_Spy.lib或KS_Spyd.lib；

运行环境要求
1   目前只支持win32
2   运行时会需要加载libgo.dll, libest.dll, KS_Spy.dll等动态库，需要保证这些文件可被加载访问到；
3   运行时页面文件的根默认在运行当前目录的web/下，目前默认需要index.html,demo.html等，请务必保证存在这些文件；
4   运行时web server启动时会加载当前目录下的auth.txt和route.txt文件，请务必保证这些文件存在；
5   默认首页是http://xxx.xxx.xx.xx:port/index.html，建议在理解基础上进行修改或新增，为自己的项目开发合适的页面文件；


如果想对所有源代码进行构建的话，其开发环境要求
1  boost, 目前使用的是1.55.0版本；如果不想重新编译可以使用发布包里的boost/boost_inc.7z,这是头文件包，boost/lib下为编译后的静态库文件；
2  goahead,目前使用的是3.1.3版本；如果不想重新编译可以使用发布包里的goahead/.
3  json-cpp,目前使用的是0.5.0版本；如果不想重新编译可以使用发布包里的json/
4  VS2010, 工程的DEBUG和release版本都已提供；
5  提供了一个demo工程（testKSFT4Spy）,可以学习使用帮助理解；
6  如果想了解该工程的变更情况，可以看KS_Spy/Readme.txt文件，里面有详细的变更记录；

未来开发规划
1  提供linux版本，满足linux平台的使用要求
2  将该API正式引入KSFT_API中，使对方正式获得灵活的调试跟踪等能力，帮助开发者获得更理想的开发使用体验；
3  提供正式完整的web接口和页面功能，提高交互体验；



