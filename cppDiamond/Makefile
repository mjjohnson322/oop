CXXFLAGS=-std=c++14 -Iinclude -fPIC

tmp/card.o : src/card.cpp include/card.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

lib/libcard.so : tmp/card.o
	$(CXX) $(CXXFLAGS) -shared -o $@ $^

tmp/monstercard.o : src/monsterCard.cpp include/monsterCard.h include/card.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

lib/libmonstercard.so : tmp/monstercard.o tmp/card.o
	$(CXX) $(CXXFLAGS) -shared -o $@ $^

tmp/spellcard.o : src/spellCard.cpp include/spellCard.h include/spellType.h include/card.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

lib/libspellcard.so : tmp/spellcard.o tmp/card.o
	$(CXX) $(CXXFLAGS) -shared -o $@ $^

tmp/pendulumcard.o : src/monsterCard.cpp include/monsterCard.h include/spellcard.h include/spellType.h include/card.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

lib/libpendulumcard.so : tmp/spellcard.o tmp/monstercard.o tmp/card.o
	$(CXX) $(CXXFLAGS) -shared -o $@ $^

tmp/main.o : src/main.cpp include/card.h include/monsterCard.h include/spellCard.h include/spellType.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

bin/card : tmp/main.o lib/libmonstercard.so lib/libspellcard.so lib/libpendulumcard.so
	$(CXX) $(CXXFLAGS) -o $@ $^
