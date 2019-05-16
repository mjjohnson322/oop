#pragma once
#include <iostream>
#include "card.h"
#include "spellType.h"
#include "mementoCard.h"

namespace card {
    class SpellCard : public virtual Card {
        public: SpellCard(std::string _name, SpellType _type);
        private: MementoSpellCard *spellMemento;
        protected: SpellType type;
        public: SpellType getSpellType() const;
        public: virtual void createMemento() override;
        public: virtual void restoreMemento() override;
        public: ~SpellCard();
    };
}