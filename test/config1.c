/* Generated by re2c */
#line 1 "config1.re"
#define	NULL		((char*) 0)
#define	YYCTYPE		char
#define	YYCURSOR	p
#define	YYLIMIT		p
#define	YYMARKER	q
#define	YYFILL(n)

char *scan0(char *p)
{
	char *q;

#line 15 "<stdout>"
{
	YYCTYPE yych;

	if((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch(yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy2;
	default:	goto yy4;
	}
yy2:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy7;
yy3:
#line 13 "config1.re"
	{ return YYCURSOR; }
#line 41 "<stdout>"
yy4:
	++YYCURSOR;
#line 14 "config1.re"
	{ return NULL; }
#line 46 "<stdout>"
yy6:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy7:
	switch(yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy6;
	default:	goto yy3;
	}
}
#line 15 "config1.re"

}

char *scan1(char *p)
{
	char *q;

#line 74 "<stdout>"
	{
		YYCTYPE yych;
		if((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
		yych = *YYCURSOR;
		switch(yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':	goto yy10;
		default:	goto yy12;
		}
yy10:
		++YYCURSOR;
		yych = *YYCURSOR;
		goto yy15;
yy11:
#line 23 "config1.re"
		{ return YYCURSOR; }
#line 99 "<stdout>"
yy12:
		++YYCURSOR;
#line 24 "config1.re"
		{ return NULL; }
#line 104 "<stdout>"
yy14:
		++YYCURSOR;
		if(YYLIMIT == YYCURSOR) YYFILL(1);
		yych = *YYCURSOR;
yy15:
		switch(yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':	goto yy14;
		default:	goto yy11;
		}
	}
#line 25 "config1.re"

}

char *scan(char *p)
{
	char *q;

#line 132 "<stdout>"
	{
		YYCTYPE yych;
		if((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
		yych = *YYCURSOR;
		switch(yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':	goto yy18;
		default:	goto yy20;
		}
yy18:
		++YYCURSOR;
		yych = *YYCURSOR;
		goto yy23;
yy19:
#line 32 "config1.re"
		{ return YYCURSOR; }
#line 157 "<stdout>"
yy20:
		++YYCURSOR;
#line 33 "config1.re"
		{ return NULL; }
#line 162 "<stdout>"
yy22:
		++YYCURSOR;
		if(YYLIMIT == YYCURSOR) YYFILL(1);
		yych = *YYCURSOR;
yy23:
		switch(yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':	goto yy22;
		default:	goto yy19;
		}
	}
#line 34 "config1.re"

}
