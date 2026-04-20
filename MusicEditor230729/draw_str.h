#pragma once
#include "font.h"

void draw_char(tile& dest, dbuf& ds, double dep,
	dvec tl, drect vp_dest, tile const& src, dcol col);
// w Ϊ 0 ʱ��������С�
void draw_str(tile& dest, dbuf& ds, double d, wstring const& s,
	dcol col, font const& ft, dvec& tl_cur, int& x_cur, int w, drect vp);
void draw_str(tile& dest, dbuf& ds, double d, wstring const& s,
	dcol col, font const& ft, dvec tl, int w, drect vp);

dvec str_wh(wstring const& s, font const& ft, int w, int* x_last = NULL);
// ������뿼�ǸߵĻ��������� p.y = 0��
int str_index_at_pos(wstring const& s, font const& ft, dvec p, int w);
