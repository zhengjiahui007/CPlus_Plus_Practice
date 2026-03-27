CXX = g++
CXXFLAGS = -std=c++20 -Wall -g
TARGET = Test_01.exe
SRCS = Test_01.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf /Q *.o *.exe

.PHONY: all clean