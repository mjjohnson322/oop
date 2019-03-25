CXXFLAGS=-std=c++14 -Iinclude -fPIC

tmp/Player.o : player.cpp player.h 
    $(CXX) $(CXXFLAGS) -c -o $@ $<

lib/libplayer.dll : tmp/Player.o
	$(CXX) $(CXXFLAGS) -shared -o $@ $^

tmp/main.o : main.cpp player.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

bin/player : tmp/main.o lib/libplayer.dll
	$(CXX) $(CXXFLAGS) -o $@ $^
