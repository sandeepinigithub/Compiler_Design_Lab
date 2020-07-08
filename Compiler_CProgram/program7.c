% {
  #include <stdio.h>

  int regs[26];int base; %
} %
start list
  %
  union {
    int a;
  } %
  type < a > expr number % token DIGIT LETTER
list:
  |
  list stat '\n' |
  list error '\n' {
    yyerrok;
  };
stat: expr {
    printf("%d\n", $1);
  } |
  LETTER '='
expr {
  regs[$1] = $3;
};
factor: '('
expr ')' {
    $$ = $2;
  } |
  |
  term: term '/'
factor {
  $$ = $1 / $3;
} |
term: factor |
  expr: expr '+'
term {
  $$ = $1 + $3;
} |
expr: term |

  Factor: number |
;
number: DIGIT {
    $$ = $1;
    base = ($1 == 0) ? 8 : 10;
  } |
  number DIGIT {
    $$ = base * $1 + $2;
  }; %
%
main() {
  return (yyparse());
}
yyerror(s) char * s; {
  fprintf(stderr, "%s\n", s);
}
yywrap() {
  return (1);
}
