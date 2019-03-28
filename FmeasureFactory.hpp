#ifndef FMEASURE_FACTORY
#define FMEASURE_FACTORY

#include <string>
#include "Fmeasure.hpp"
#include "GLVN.hpp"
#include "GLVA.hpp"
#include "HISR.hpp"
#include "ACMO.hpp"
#include "TENG.hpp"
#include "TENV.hpp"

class FmeasureFactory {
    public:
        static Fmeasure* getMeasure(std::string name) {
            if (name == "GLVN")
                return new GLVN();
            else if (name == "GLVA")
                return new GLVA();
            else if (name == "HISR")
                return new HISR();
            else if (name == "TENG")
                return new TENG();
            else if (name == "TENV")
                return new TENV();
            else
            	return NULL;
        }
};


#endif