#pragma once
#include <vector>
#include <iostream>
#include "mementoCard.h"

namespace card {
    class Card {
        public: Card(std::string _name="BROKEN REQUIRES NAME");
        private: std::string name;
        private: std::vector<std::string> effects;
        public: virtual std::string getName() const;
        public: virtual createMemento();
        public: virtual restoreMemento(mementoCard mCard);
        public: virtual void addEffect(std::string);
        public: virtual void printEffects() const;
        public: virtual ~Card();
    };
}