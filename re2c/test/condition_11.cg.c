/* Generated by re2c */
#line 1 "condition_11.cg.re"

#line 5 "<stdout>"
{
	YYCTYPE yych;
	static void *yyctable[3] = {
		&&yyc_0,
		&&yyc_r1,
		&&yyc_r2,
	};
	goto *yyctable[YYGETCONDITION()];
/* *********************************** */
yyc_0:

	YYSETCONDITION(yycr1);
#line 3 "condition_11.cg.re"
	{ return NULL; }
#line 20 "<stdout>"
/* *********************************** */
yyc_r1:
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych <= '2') {
		if(yych <= '0') goto yy5;
		if(yych <= '1') goto yy8;
		goto yy6;
	} else {
		if(yych <= '`') goto yy5;
		if(yych <= 'a') goto yy10;
		if(yych <= 'b') goto yy12;
	}
yy5:
yy6:
	++YYCURSOR;
#line 5 "condition_11.cg.re"
	{ return "2"; }
#line 39 "<stdout>"
yy8:
	++YYCURSOR;
#line 4 "condition_11.cg.re"
	{ return "1"; }
#line 44 "<stdout>"
yy10:
	++YYCURSOR;
	YYSETCONDITION(yycr2);
#line 6 "condition_11.cg.re"
	{ return "a"; }
#line 50 "<stdout>"
yy12:
	++YYCURSOR;
	YYSETCONDITION(yycr2);
#line 7 "condition_11.cg.re"
	{ return "b"; }
#line 56 "<stdout>"
/* *********************************** */
yyc_r2:
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych <= '2') {
		if(yych <= '0') goto yy16;
		if(yych <= '1') goto yy19;
		goto yy17;
	} else {
		if(yych == 'b') goto yy21;
	}
yy16:
yy17:
	++YYCURSOR;
	YYSETCONDITION(yycr1);
#line 5 "condition_11.cg.re"
	{ return "2"; }
#line 74 "<stdout>"
yy19:
	++YYCURSOR;
	YYSETCONDITION(yycr1);
#line 4 "condition_11.cg.re"
	{ return "1"; }
#line 80 "<stdout>"
yy21:
	++YYCURSOR;
#line 7 "condition_11.cg.re"
	{ return "b"; }
#line 85 "<stdout>"
}
#line 9 "condition_11.cg.re"

