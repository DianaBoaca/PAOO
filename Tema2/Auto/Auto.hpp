#pragma once

namespace vehicle {
    class Auto {
        public:
        virtual void displayType() = 0;
        virtual void startEngine() = 0;
    };
}