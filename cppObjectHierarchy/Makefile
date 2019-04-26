CXXFLAGS=-std=c++14 -Iinclude -fPIC

tmp/card.o : src/card.cpp include/card.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

lib/libcard.so : tmp/card.o
	$(CXX) $(CXXFLAGS) -shared -o $@ $^

tmp/monstercard.o : src/monsterCard.cpp include/monsterCard.h include/card.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

lib/libmonstercard.so : tmp/monstercard.o tmp/card.o
	$(CXX) $(CXXFLAGS) -shared -o $@ $^

tmp/main.o : src/main.cpp include/card.h include/monsterCard.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

bin/card : tmp/main.o lib/libmonstercard.so
	$(CXX) $(CXXFLAGS) -o $@ $^
