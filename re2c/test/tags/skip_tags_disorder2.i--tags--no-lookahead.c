/* Generated by re2c */

{
	YYCTYPE yych;
	yyt1 = YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR++;
	yyt2 = YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	case 'b':	goto yy7;
	default:	goto yy2;
	}
yy2:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR++;
	yyt1 = yyt2;
	yyt2 = YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	case 'b':	goto yy7;
	default:	goto yy2;
	}
yy4:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy6;
	default:
		++YYCURSOR;
		yyt1 = yyt2;
		yyt2 = YYCURSOR;
		goto yy4;
	}
yy6:
	b = yyt1;
	{}
yy7:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy9;
	default:
		++YYCURSOR;
		yyt1 = yyt2;
		yyt2 = YYCURSOR;
		goto yy7;
	}
yy9:
	a = yyt1;
	{}
}

re2c: warning: line 3: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 4: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 3: tag 'a' is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 4: tag 'b' is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]