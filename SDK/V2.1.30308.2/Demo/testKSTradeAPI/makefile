
CC=g++

CFLAGS= -O2 -fPIC

LIB= -L ../KSTradeAPI/linux64 \
     -lkstradeapi \
     -lkslkc64r

TARGET=testKSTradeAPI_64

ifeq ($(vtype),32r)
    CFLAGS+=-m32
    LIB:=$(subst linux64,linux32,${LIB})
    LIB:=$(subst lkslkc64r,lkslkc32r,${LIB})
    TARGET:=testKSTradeAPI_32
endif

ifeq ($(vtype),64r)
endif

all: ${TARGET}
	cp -f ${TARGET} ../run/

${TARGET}: event.o testKSTradeAPI.o
	${CC} ${CFLAGS} -o $@ $^  ${LIB} 

testKSTradeAPI.o: testKSTradeAPI.cpp
	${CC} ${CFLAGS} -o $@ -c $^ 

event.o:event.cpp
	${CC} ${CFLAGS} -o $@ -c $^  
clean:
	rm -f *.o testKSTradeAPI_* 
