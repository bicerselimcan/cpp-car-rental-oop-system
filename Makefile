CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

SRCS = Project.cpp Vehicle.cpp Car.cpp Place.cpp City.cpp Personel.cpp Date.cpp Price.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = CarRentalSystem

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
