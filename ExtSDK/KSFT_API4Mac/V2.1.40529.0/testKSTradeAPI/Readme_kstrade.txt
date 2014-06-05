/**
 *@�ļ�  ��Readme_kstrade.txt  ���Խ���API��Դ����˵���ļ�
 *@����  : xdhu
 *@ϵͳ����API���Գ���
 *@��˾����ʤ�ƽ��˴�
 *@�޸���ʷ��
    20121203  ����
    20140529 ����Macƽ̨˵��
 */

һ���ļ�˵��
testKSTradeAPI�ļ��а��������ļ���
Դ�ļ�   testKSTradeAPI.cpp   event.cpp
ͷ�ļ�   testKSTradeAPI.h     event.h
linux����makefile�ļ�   makefile
windows������Ŀ�ļ�     testKStradeAPI.sln��testKStradeAPI.vcproj
�����ļ�		Readme_kstrade.txt, Readme_kstrade_en.txt(Ӣ�İ�����

�����ļ�����
testKSTradeAPI.h/testKSTradeAPI.cpp  			        ��Ҫʵ�ֲ���libkstradeapi.so��̬��Ļ�������
event.h/event.cpp                    				��Ҫ��װһ��windows/linux���ݵ��¼�����
makefile 			    				��Ҫʵ����linuxƽ̨�£����Կ�ִ�г���ı��롣
testKStradeAPI.sln��testKStradeAPI.vcproj     			��Ҫʵ��windowsƽ̨�£����Կ�ִ�г���ı��롣

����linuxƽ̨���롢����˵��

1������˵��
   makefile�ṩ32λ���Գ����64λ���Գ���ı��롣

   1��  ������
	����ȷ����������װ��gcc 4.1.2�������ϰ汾
	��linux��shell�������� ���� gcc -v ���Բ鿴gcc�İ汾��Ϣ
	�Ͱ汾��gcc���ܵ��±������
   
   2��  ��α���
	��linux�� shell������������make���
	make   		����64λ���Գ���Ĭ�ϣ�
	make  vtype=32r ����32λ���Գ���
        make  vtype=64r ����64λ���Գ���

   3��  ����Ŀ��
	make �� make vtype=64r ���� run Ŀ¼�£����� testKSTradeAPI_64 ��ִ���ļ�������64λ���Գ���
        make vtype=32r         ���� run Ŀ¼�£����� testKSTradeAPI_32 ��ִ���ļ�������32λ���Գ���
	
   4��  ע������
	�ڵ�ǰ����������32λ��64λ����ʱ��ִ��һ��make�������Ҫִ�� make clean ,ɾ���ϴα�����м�Ŀ���ļ���
	�Է�ֹ����64λ��������32λ���м�Ŀ���ļ������32λ����������64λ���м�Ŀ���ļ������±������

2������˵��
   
   1�����м��
      ���Դ�������У���Ҫȷ����̬��libkstradeapi.so,libkslkc64r.so��32λ����libkslkc32r.so���ļ��Ĵ��ڡ������������32λ��64λ��libkstradeapi.so���ļ�����ͬ���ֱ���KSTradeAPI/linux32/��   KSTradeAPI/linux64Ŀ¼�¡���libkslkc32r.so��KSTradeAPI/linux32/Ŀ¼�£�libkslkc64r.so��KSTradeAPI/linux64/Ŀ¼�£�
      ����Ƿ��Ѿ��ɹ���������Գ���Ŀ�ִ���ļ��� ����׶ν���runĿ¼��������Ӧ�Ŀ�ִ�г��򣩡�

   2) ��̬���ļ���ִ����������
      
      ȷ����̬�� libkstradeapi.so���п�ִ�����ԡ�����ͨ��ls -l libkstradeapi.so�鿴�ļ������ԡ�
      ȷ����̬�� libkslkc64r.so����libkslc32r.so�����п�ִ�����ԡ�����ͨ��ls -l libkslkc64r.so ��libkslkc32r.so�����鿴�ļ����ԡ�
      ����̬�ⲻ�߱���ִ�����ԣ�������linux shell�������£����磬ͨ�� chmod +x libkstradeapi.so��ʵ�֡� ��������ο� man 1 chmod

   3�����ö�̬�����·��
      ����libkstradeapi.so�ľ���·��Ϊ/xxx/yyy/zzz/libkstradeapi.so�������·�ʽ���ö�̬�����·�������Բο�man 3 dlopen

     	���Խ�libkstradeapi.so��libkslkc64r.so(��libkslkc32r.so��������Ŀ¼·������ӵ�LD_LIBRARY_PATH���������С�
	LD_LIBRARY_PATH=/xxx/yyy/zzz/��${LD_LIBRARY_PATH};  export LD_LIBRARY_PATH

   4) ��黷�����õ���ȷ��
      a)����ִ�г���Զ�̬������ü����Ƿ���ȷ
	ldd  testKStradeAPI_32   ���32λ���Գ���Զ�̬��ļ���
	ldd  testKSTradeAPI_64   ���64λ���Գ���Զ�̬��ļ���
      b)�鿴��ǰ�Ķ�̬��İ汾��Ϣ
	strings libkstradeapi.so|grep KSFT_API_Version

   5��ע������
      �������ȷ���У�����Ҫ��ý��˴����Ȩ�ļ�KSInterB2C.lkc, ȷ���ڿ�ִ���ļ�����Ŀ¼����KSInterB2C.lkc�ļ����������ϵ���߻�ȡ��Ȩ�ļ���


����Windowsƽ̨���롢����˵��

1������˵��
   ��Ҫͨ��Visual Studio 2005 IDE���������ñ��롣

   1) ������
   ����ȷ����������װ��Visual Studio 2005�����ϰ汾��
   
   2����α���
   ͨ��vs��testKSTradeAPI.sln�ļ������뼴�ɡ�
   
   3������Ŀ��
   ��runĿ¼������testKSTradeAPI.exe��ִ���ļ���

2������˵��
   ȷ��runĿ¼����KSTradeAPI.dll,cpack.dll,lkcdll.dll
   ��runĿ¼��ִ��testKSTradeAPI.exe���ɡ�
   ͬ����ȷ������Ҫ��ȡ��Ȩ�ļ�KSInterB2C.lkc��ȷ���ڿ�ִ���ļ�����Ŀ¼����KSInterB2C.lkc

�ġ�Macƽ̨���롢����˵��

1������˵��
   makefile���ڱ�����Գ��򣨰���i386��x86_64����

   1��  ������
        ����ϵͳ��Ͱ汾��OS X 10.9
	��������Ͱ汾��clang 500.2.79
	��Terminal�� ���� clang -v ���Բ鿴clang�İ汾��Ϣ��
	ע�⣬�Ͱ汾��clang���ܵ��±������
   
   2��  ��α���
        Terminal�£����У�
	 $ make # x86_64
         $ make vtype=64r # x86_64
         $ make vtype=32r # i386

   3��  ��ִ�г���
	���ɵĿ�ִ�г���λ��runĿ¼��

2������˵��
   
   1�����м��
      ���Դ�������У���Ҫȷ����̬��libkstradeapi.dylib,libkslkc.dylib�ļ��Ĵ��ڡ���λ��KSTradeAPIĿ¼��
      ����Ƿ��Ѿ��ɹ���������Գ���Ŀ�ִ���ļ��� ����׶ν���runĿ¼��������Ӧ�Ŀ�ִ�г��򣩡�

   2) ��̬���ļ���ִ����������
      ȷ����̬���ӿ���п�ִ�����ԡ�����ͨ��ls -l *.dylib�鿴�ļ������ԡ�      
      ����̬�ⲻ�߱���ִ�����ԣ�ͨ�� chmod +x *.dylib��ʵ�֡� ��������ο� man 1 chmod��

   3�����ö�̬�����·��
      ��̬���ӿ��install_nameΪ��@rpath/<����>.dylib����
      ����ͨ�������빤��otool -D <����>.dylib�鿴install_name; install_name_tool -id <install_name> <����>.dylib����install_name��
      ������Գ���ʱ��������-rpathѡ���˲���������LD_LIBRARY_PATH�Ȼ���������

   4) ��黷�����õ���ȷ��
      a)����ִ�г���Զ�̬������ü����Ƿ���ȷ
	otool -L  <��ִ�г���>
      b)�鿴��ǰ�Ķ�̬��İ汾��Ϣ
	strings libkstradeapi.dylib|grep KSFT_API_Version

   5��ע������
      �������ȷ���У�����Ҫ��ý��˴����Ȩ�ļ�KSInterB2C.lkc, ȷ���ڿ�ִ���ļ�����Ŀ¼����KSInterB2C.lkc�ļ����������ϵ���߻�ȡ��Ȩ�ļ���
      