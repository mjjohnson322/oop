#pragma once
#include <vector>
#include <iostream>

namespace card {
    class Card {
        public: Card(const std::string & _name="BROKEN REQUIRES NAME");
        private: const std::string name;
        private: virtual std::vector<std::string> effects;
        public: virtual std::string getName() const;
        public: virtual void addEffect(std::string);
        public: virtual void printEffects() const;
        public: virtual ~Card();
    };
}