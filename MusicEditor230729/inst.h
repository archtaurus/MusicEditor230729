#pragma once
#include "num.h"

struct Cur;
struct Var;
struct Osc;
struct Env;
struct LFO;
struct Inst {
	int tone = 0;
	double t_end_rel = 0;
	double t_release = 0;

	// vol Ϊ����ʱ Inst �������� Osc ������ڹ�Ͳ�ͬ��
	Num vol;
	bool fixed_tone = false;

	double t = 0;
	bool end = false;
	vector<ptr<LFO>> lfos;
	vector<ptr<Env>> envs;
	vector<ptr<Osc>> oscs;

	Inst() = default;
	Inst(Cur& cur);
	Inst(Inst const& inst);
	void Set(int tn, double tr);
	double Sample(Cur& cur);
};
