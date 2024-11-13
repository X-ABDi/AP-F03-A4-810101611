CC = g++
STD = -std=c++20
TARGET = LeitnerBox
SRCS = leitner.cpp getInput.cpp
OBJS = $(SRCS: .cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(STD) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CC) $(STD) -c $< -o $@