TARGET := servicelayermain 
SRC_FILES := $(wildcard *.cpp)
OBJ_FILES := $(patsubst %.cpp,%.o,$(SRC_FILES))
LDFLAGS := -L/usr/local/lib -I/usr/local/include -lthrift -lthriftcpp2 -lprotocol -lthriftprotocol -lfolly -ltransport -lconcurrency -lasync -lfbzmq -lzmq -lsodium  -lgrpc++_unsecure -lgrpc -lprotobuf -lpthread -ldl -liosxrsl -lglog 
CPPFLAGS := -g -std=c++14 -I/usr/local/include -pthread

.PHONY: all
all: $(TARGET)

%.o: %.cc
	g++ $(CPPFLAGS) -c -o $@ $<

$(TARGET): $(OBJ_FILES)
	g++ $^ $(LDFLAGS) -o $@


.PHONY: clean
clean:
	-${RM} ${TARGET} ${OBJ_FILES}
