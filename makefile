## definitions

CXX = g++
CXXFLAGS = -Wall
PRJ = bankSystem
OBJS = account.o bank.o customer.o employee.o transaction.o
INCLUDE = account.h bank.h customer.h employee.h transaction.h
#SRC =


# default rule for compiling .cc to .o
%.o: %.cc
		$(CXX) -c $(CXXFLAGS) $<

# targets and dependencies

$(PRJ): $(OBJS)
		$(CXX) $(OBJS) -o $(PRJ)

$(OBJS): $(INCLUDE)

all: bank

clean:
		rm -f $(OBJS) $(PRJ)
		rm -f *~ *% *# .#*

clean-all:
		rm -f bank
