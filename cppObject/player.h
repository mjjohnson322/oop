#include <iostream>

namespace player {
    class Player {
        Player(const std::string & _name, const std::string & _characterClass, int _level);
        private: const std::string name;
        private: const std::string characterClass;
        private: int level;
        public: std::string getName() const;
        public: std::string getCharacterClass() const;
        public: void setLevel(const int & _level);
        public: void levelUp();
        public: int getLevel() const;
    };
}