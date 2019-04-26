#pragma once
#include <vector>
#include <iostream>

namespace card {
    class Card {
        public: Card(const std::string & _name);
        private: const std::string name;
        private: std::vector<std::string> effects;
        public: std::string getName() const;
        public: void addEffect(std::string);
        public: void printEffects() const;
    };
}