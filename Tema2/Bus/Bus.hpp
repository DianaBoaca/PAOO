#include "Auto.hpp"

namespace vehicle {
    class Bus : public Auto {
        int capacity;
        char* agency;

        public:
        Bus(int capacity, const char* agency);
        ~Bus();

        void displayType() override;
        void startEngine() override;
        
        void stopInStation(const char* station);
    };
}
