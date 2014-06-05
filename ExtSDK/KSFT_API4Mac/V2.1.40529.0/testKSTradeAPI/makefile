
CC=clang++

CFLAGS= -O2

LIB= -L ../KSTradeAPI \
     -lkstradeapi \
     -lkslkc

LDFLAGS=-Wl,-rpath -Wl,@executable_path/../KSTradeAPI
TARGET=testKSTradeAPI_64

ifeq ($(vtype),32r)
    CFLAGS+=-arch i386
    TARGET:=testKSTradeAPI_32
else
    CFLAGS+=-arch x86_64
endif 

all: ${TARGET}
	cp -f ${TARGET} ../run/

${TARGET}: event.o testKSTradeAPI.o
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^  ${LIB} 

testKSTradeAPI.o: testKSTradeAPI.cpp
	${CC} ${CFLAGS} -o $@ -c $^ 

event.o:event.cpp
	${CC} ${CFLAGS} -o $@ -c $^  
clean:
	rm -f *.o testKSTradeAPI_* 
