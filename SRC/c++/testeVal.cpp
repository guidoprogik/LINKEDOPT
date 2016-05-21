#include <valarray>
#include <vector>

using namespace std;

#define MAXIT 100000000
#define MAXSIZE 100

int main(){

    valarray< double > x(MAXSIZE), y(MAXSIZE), z(MAXSIZE);
    //vector< double > x(MAXSIZE), y(MAXSIZE), z(MAXSIZE);

    for( int i=0; i<MAXSIZE; i++ ){
        x[i] = (i+1)*3 + (i+1)*(i+1);
        y[i] = (i-2)*2 + (i-1)*(i+3);
    }

    for( int i=0; i<MAXIT; i++ ){
        z = (x-y)*(x-y);
    }

    return 0;
}
