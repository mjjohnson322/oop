CXXFLAGS=-std=c++14 -Iinclude -fPIC

tmp/player.o : player.cpp player.h 
	$(CXX) $(CXXFLAGS) -c -o $@ $<

lib/libplayer.so : tmp/player.o
	$(CXX) $(CXXFLAGS) -shared -o $@ $^

tmp/main.o : main.cpp player.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

bin/player : tmp/main.o lib/libplayer.so
	$(CXX) $(CXXFLAGS) -o $@ $^
