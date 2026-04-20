#pragma once
#include "num.h"

// �Ҿ��ò����Ļ����⻯�����Ǹ��ר�ŵ�һ�࣬Ҳͦ�õġ�
// ��������ֻ�������ع��ˡ�

struct Cur;
struct Inst;
struct Track;
struct DrumMachine {
	Num vol = 0;
	vector<ptr<Track>> ds;

	DrumMachine(Cur& cur);
	void save(FILE *f) const;
	DrumMachine(Cur& cur, FILE* f);

	ptr<Track>& get(Cur& cur, int tn);
	void reset_p(Cur& cur);
	void reset_np(Cur& cur);

	double Play(Cur& cur);
	double PlayPiano(Cur& cur);
};
