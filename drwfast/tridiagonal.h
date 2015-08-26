void trimult(double *a, double *b, double *c, double *x, double *y, int n);
void trisolve(double *a, double *b, double *c, double *x, double *y, int n);
double tridet(double *a, double *b, double *c, int n);
void snsolve(double *t, double *err2, double var, double tcorr, double *x, double *y, int n);
double snsolve_retdet(double *t, double *err2, double var, double tcorr, double *x, double *y, int n);
double lnlike(double var, double tcorr, double *t, double *y, double *err2, int n);
double chisq(double var, double tcorr, double *t, double *y, double *err2, int n);
void fill(double *L, double val, int n);
double dot(double *a, double *b, int n);
void ewise_subtract(double *out, double *a, double *b, int n);