#include <iostream>

namespace player {
    class Player {
        Player(string _name, _characterClass, int _level);
        private: const string name;
        private: const string characterClass;
        private: int level;
        public: string getName() const;
        public: string getCharacterClass() const;
        public: void setLevel();
        public: void levelUp();
        public: int getLevel() const;
    }
}