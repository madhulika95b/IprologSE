#include<iostream>
using namespace std;
class Clause1{
public:
int len;
int* hgs;
int base;
int neck;
int* xs;


int Clause(const int len, int* hgs,const int base, const int neck, int* xs){
this->hgs = hgs;
this->base = base;
this->len = len;
this->neck = neck;
this->xs = xs;
}};
