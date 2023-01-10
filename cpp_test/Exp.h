#pragma once
#ifndef EXP_H
#define EXP_H

class Exp {

	int value;
	int base;
	int exp;//Áö¼ö
	
public:
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);
	Exp();
	Exp(int a, int b);
	Exp(int a);
};

#endif // !EXP_H
