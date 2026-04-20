#pragma once
#include "utils.h"

struct Cur;
struct FloatPanel;
struct FPnGlobal;
struct FPnCmd;
struct FPnPar;
struct FPnFun;
struct FPnLang;
struct FPnAbout;
struct FPnTrack;
struct FPnInst;
struct PnMenu;
struct PnBottom;
struct UI {
	vector<FloatPanel*> fpns;

	ptr<FPnGlobal> fpn_global;
	ptr<FPnInst> fpn_inst;
	ptr<FPnTrack> fpn_track;
	ptr<FPnCmd> fpn_cmd;
	ptr<FPnPar> fpn_par;
	ptr<FPnFun> fpn_fun;
	ptr<FPnLang> fpn_lang;
	ptr<FPnAbout> fpn_about;
	ptr<PnMenu> pn_menu;
	ptr<PnBottom> pn_bottom;

	UI(Cur& cur) {};
	void sort_fpns();

	// ������ init ��ԭ���ǿؼ����� cur->ui ������ ui, �����ʱ�� ui ��δ��ʼ����
	// ��Ҳ��Ϊʲô��������Ҫ Init����Ӧ����һ���ձ�����⡣
	void Init(Cur& cur);
	void Update(Cur& cur);
	void PreUpdate(Cur& cur);
};
