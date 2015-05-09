CXX=/usr/bin/g++

CXXFLAGS=
CXXLFLAGS=

EXCEPT_CPP=
SOURCES = $(filter-out $(EXCEPT_CPP),$(wildcard *.cpp))
OBJS = $(patsubst %.cpp,%.o,$(SOURCES))
DEPS = $(OBJS:%.o=.%.d)

ALL_TARGET=Factory

all: $(ALL_TARGET)

include $(DEPS)
$(DEPS):.%.d:%.cpp
	@$(CXX) -M $(CXXFLAGS) $< >$@.$$$$; sed 's,\($*\)\.o[ :]*,\1.o $@: ,g'<$@.$$$$>$@;rm -f $@.$$$$

$(OBJS):%.o:%.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@

$(ALL_TARGET):$(OBJS)
	$(CXX) $(OBJS) -o $(ALL_TARGET) $(CXXLFLAGS)

.PHONY : clean all distclean

ctags:
	@ctags -R -h ".c.cpp.h" -o ctags

distclean:
	@rm .*.d .*.d.*
clean:
	@rm -rf *.o $(ALL_TARGET)
