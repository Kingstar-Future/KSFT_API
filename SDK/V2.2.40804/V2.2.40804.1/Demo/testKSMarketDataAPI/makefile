
CC=g++

CFLAGS= -O2 -fPIC

LIB= -L ../KSMarketDataAPI/linux64 \
     -lksmarketdataapi \
     -lkslkc64r
TARGET=testKSMarketDataAPI_64

ifeq ($(vtype),32r)
    CFLAGS+=-m32
    LIB:=$(subst linux64,linux32,${LIB})
    LIB:=$(subst lkslkc64r,lkslkc32r,${LIB})
    TARGET:=testKSMarketDataAPI_32
endif

ifeq ($(vtype),64r)
endif

all: ${TARGET}
	cp -f ${TARGET} ../run/

${TARGET}: event.o testKSMarketDataAPI.o
	${CC} ${CFLAGS} -o $@ $^  ${LIB} 

testKSMarketDataAPI.o: testKSMarketDataAPI.cpp
	${CC} ${CFLAGS} -o $@ -c $^ 

event.o:event.cpp
	${CC} ${CFLAGS} -o $@ -c $^  
clean:
	rm -f *.o  testKSMarketDataAPI_*
