
CC=g++ -g 
CXXFLAGS = -fPIC -I ./ -I ../KSFT_API/inc -I ../../Python-2.6 -I ../../Python-2.6/Include
 
LIB_M= -L ../KSFT_API/lib/linux64 \
     -lksmarketdataapi \
     -lkslkc64r
	 
LIB_T= -L ../KSFT_API/lib/linux64 \
     -lkstradeapi \
     -lkslkc64r
	 
ifeq ($(vtype),32r)
    CXXFLAGS+=-m32
    LIB_M:=$(subst linux64,linux32,${LIB_M})
    LIB_M:=$(subst lkslkc64r,lkslkc32r,${LIB_M})
    LIB_T:=$(subst linux64,linux32,${LIB_T})
    LIB_T:=$(subst lkslkc64r,lkslkc32r,${LIB_T})
endif

ifeq ($(vtype),64r)
endif	 

all: ../Run/_KSApi_Md.so ../Run/_KSApi_Trader.so


../Run/_KSApi_Md.so: ../_KSApi_Md/_KSApi_Md.o ../_KSApi_Md/KSwrapper_Md.o ../_KSApi_Md/KSstruct.o
	$(CC) $(CXXFLAGS) -shared $^  -o $@ ${LIB_M}

../Run/_KSApi_Trader.so: ../_KSApi_Trader/_KSApi_Trader.o ../_KSApi_Trader/KSwrapper_Trader.o ../_KSApi_Trader/KSstruct.o
	$(CC) $(CXXFLAGS) -shared $^  -o $@ ${LIB_T}


../_KSApi_Md/_KSApi_Md.cpp ../_KSApi_Md/KSwrapper_Md.cpp ../_KSApi_Md/KSstruct.cpp ../_KSApi_Trader/_KSApi_Trader.cpp ../_KSApi_Trader/KSwrapper_Trader.cpp: ../_Generate/generate_wrapper.py
	../../Python-2.6/python ../_Generate/generate_wrapper.py
	../../Python-2.6/python ../_Generate/generate_struct.py

ifeq ($(vtype),32r)
	cp ../KSFT_API/lib/linux32/*.so ./
else
	cp ../KSFT_API/lib/linux64/*.so ./
endif
	
clean:
	rm -rf *.o *.con ../_KSApi_*/* ../Run/KS* ../Run/_KSApi_* ../Run/lib*
	


