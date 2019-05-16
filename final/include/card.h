#pragma once
#include <vector>
#include <iostream>
#include "mementoCard.h"

namespace card {
    class Card {
        public: Card(std::string _name="BROKEN REQUIRES NAME");
        private: MementoCard *memento;
        private: std::string name;
        private: std::vector<std::string> effects;
        public: virtual std::string getName() const;
        public: virtual void createMemento();
        public: virtual void restoreMemento();
        public: virtual void addEffect(std::string);
        public: virtual void printEffects() const;
        public: virtual ~Card();
    };
}