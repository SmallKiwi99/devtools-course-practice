// Copyright 2019 Volkov Pavel

#include <stdlib.h>
#include <stdio.h>
#include <string>

#include "include/big_int_calculator.h"

int main(int argc, const char** argv) {
    BigIntCalculator app;
    std::string output = app(argc, argv);
    printf("%s\n", output.c_str());
    return 0;
}
