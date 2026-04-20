# 编译器设置
CXX = "/c/Program Files/RedPanda-Cpp/mingw64/bin/g++.exe"
CXXFLAGS = -I. -std=c++17 -O2 -Wall -Wextra -Wno-unknown-pragmas -Wno-misleading-indentation -Wno-conversion-null -Wno-reorder -Wno-parentheses -Wno-unused-parameter -Wno-unused-variable -Wno-sign-compare -Wno-cast-function-type -finput-charset=UTF-8 -fexec-charset=UTF-8
LDFLAGS = -static -mwindows
LIBS = -lwinmm -lShcore -lWs2_32 -lgdi32 -luser32 -lkernel32 -lcomctl32

# 源文件列表
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:%.cpp=build/%.o)
EXE = MusicEditor230729.exe

# 目标
all: run

run: $(EXE)
	@echo "运行：$<"
	@./$(EXE)

$(EXE): $(OBJS)
	@echo "链接：$@"
	@$(CXX) $(LDFLAGS) -o $@ $^ $(LIBS)

build/%.o: %.cpp | build
	@echo "编译：$@"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

build:
	@mkdir -p build

clean:
	rm -rvf build
	rm -vf $(EXE)

.PHONY: all run clean
