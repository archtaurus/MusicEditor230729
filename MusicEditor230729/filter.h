#pragma once
#include "num.h"

int constexpr FLT_LP = 0;
int constexpr FLT_HP = 1;
int constexpr FLT_BP = 2;
int constexpr FLT_ALT_LP = 3;
int constexpr FLT_ALT_HP = 4;

struct Var;
struct Cur;
struct Inst;
struct Filter {
	// Paull Kellett �˲������һ���֪�����峣����ѡȡԭ��
	int type = 0;
	Num freq, resonance;
	double buf0 = 0, buf1 = 0;

	Filter(Cur& cur, Var const& v);
	Filter(Cur& cur, Inst& inst, Var const& v);
	double loop(Cur& cur, double in);
	double loop(Cur& cur, Inst& inst, double in);
};
