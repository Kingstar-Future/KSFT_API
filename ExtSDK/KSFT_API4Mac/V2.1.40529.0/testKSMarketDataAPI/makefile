
CC=clang++

CFLAGS= -O2

LIB= -L ../KSMarketDataAPI \
     -lksmarketdataapi \
     -lkslkc
	 
LDFLAGS+=-Wl,-rpath	-Wl,@executable_path/../KSMarketDataAPI

TARGET=testKSMarketDataAPI_64

ifeq ($(vtype),32r)
    CFLAGS+=-arch i386
    TARGET:=testKSMarketDataAPI_32
else
    CFLAGS+=-arch x86_64
endif


all: ${TARGET}
	cp -f ${TARGET} ../run/

${TARGET}: event.o testKSMarketDataAPI.o
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^  ${LIB} 

testKSMarketDataAPI.o: testKSMarketDataAPI.cpp
	${CC} ${CFLAGS} -o $@ -c $^ 

event.o:event.cpp
	${CC} ${CFLAGS} -o $@ -c $^  
clean:
	rm -f *.o  testKSMarketDataAPI_*
