#pragma once
#include "utils.h"
#include "proc.h"

struct Var;
typedef function<ptr<Var>(vector<ptr<Var>>&)> Function;
typedef vector<proc> Program;
struct Var {
	// ��ʵ�����Ǻ�ȷ�� typ ��û���ã��������Щ�ҵ��
	wstring typ = L"null";
	// null, num, str, fun, vec, user, dic
	double num = 0;
	wstring str;
	Function fun;
	Program procs;
	vector<wstring> pars;
	vector<ptr<Var>> vec;
	map<wstring, ptr<Var>> dic;

	Var() = default;
	Var(double num);
	Var(wstring const& str);
	Var(decltype(fun) const& fun);
	Var(vector<ptr<Var>> const& vec);
	Var(Program const& ps, vector<wstring> const& pars);
};

struct vec2;
struct vec3;
vec2 tv2(Var const& v);
vec3 tv3(Var const& v);

typedef map<wstring, ptr<Var>> Scope;
ptr<Var> findvar(Scope& sc, wstring nm);
// ���治�ó�ֵ������Ϊ�˼��ٲ���Ҫ�ĸ��ơ�����˵ʵ���Ҳ�֪����û�б�Ҫ��
bool default_fun(Scope& sc, expr const& ex, Var& out);

ptr<Var> eval_call(Scope& sc, expr const& ex);
ptr<Var> eval_access(Scope& sc, expr const& ex);
ptr<Var> eval(Scope& sc, expr const& ex);

// ��һ��������һ�������᲻����ִ�й����а��Լ�Ĩȥ�������ܵ��ˡ�
ptr<Var> Execute(bool& ret, Scope& sc, Program const& ps);
ptr<Var> Execute(Scope& sc, Program const& ps);
Program Compile(wstring const& code);
