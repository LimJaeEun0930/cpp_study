#include "Exp.h"
#include<cmath>
Exp::Exp() :Exp(1) {};

Exp::Exp(int a) {
	this->base = a;
	this->value = a;
	this->exp = 1;
}

Exp::Exp(int a, int b) {
	this->base = a;
	this->exp = b;
	this->value = this->getValue();
}

int Exp::getValue() {
	return pow((this->base),(this->exp));
}

int Exp::getBase() {
	return this->base;
}

int Exp::getExp() {
	return this->exp;
}

bool Exp::equals(Exp b) {
	if (this->getValue() == b.getValue()) {
		return true;
	}
	else return false;
}
