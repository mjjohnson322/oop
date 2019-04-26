CXXFLAGS=-std=c++14 -Iinclude -fPIC

tmp/card.o : src/card.cpp include/card.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/monstercard.o : src/monsterCard.cpp include/monsterCard.h include/card.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/spellcard.o : src/spellCard.cpp include/spellCard.h include/spellType.h include/card.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/spelltype.o : include/spellType.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/pendulumcard.o : src/pendulumCard.cpp include/monsterCard.h include/spellCard.h include/spellType.h include/card.h include/pendulumCard.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

tmp/main.o : src/main.cpp include/card.h include/monsterCard.h include/spellCard.h include/spellType.h include/pendulumCard.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

lib/libcard.so : tmp/card.o tmp/pendulumcard.o tmp/spellcard.o tmp/monstercard.o
	$(CXX) $(CXXFLAGS) -shared -o $@ $^

bin/card : tmp/main.o lib/libcard.so
	$(CXX) $(CXXFLAGS) -o $@ $^
