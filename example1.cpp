#include"cnpy.h"
#include<complex>
#include<cstdlib>
#include<iostream>
#include<map>
#include<string>

cnpy::npz_t load_npz(std::string fname){
    return cnpy::npz_load(fname);

}
