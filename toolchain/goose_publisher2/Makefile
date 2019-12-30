LIBIEC_HOME=../..

PROJECT_BINARY_NAME = goose_publisher_toolchain
PROJECT_SOURCES = *.c
XMLPARSER_INCLUDE=-I/usr/include/libxml2 #liyuan add it
XMLPARSER_LINK=-lxml2 #liyuan add it
TIMER_LINK=-lrt #liyuan add it

include $(LIBIEC_HOME)/make/target_system.mk
include $(LIBIEC_HOME)/make/stack_includes.mk

all:	$(PROJECT_BINARY_NAME)

include $(LIBIEC_HOME)/make/common_targets.mk

$(PROJECT_BINARY_NAME):	$(PROJECT_SOURCES) $(LIB_NAME) 
	$(CC) $(CFLAGS) $(LDFLAGS)  -o $(PROJECT_BINARY_NAME) $(PROJECT_SOURCES) $(XMLPARSER_INCLUDE) $(INCLUDES) $(LIB_NAME) $(LDLIBS) $(XMLPARSER_LINK) $(TIMER_LINK)

clean:
	rm -f $(PROJECT_BINARY_NAME)



