#pragma once

#include<string>
#include"svm.h"

std::string trim(const std::string& s);

int processLabel(const std::string& label_name);

svm_problem loadData(const char* file_name);

void free(svm_problem& problem);