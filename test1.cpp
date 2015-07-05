//*********************************
//教師にだけノイズがのる場合の
//アダトロン学習における
//方向余弦Rを求めるプログラム
//数値積分と数値微分
//********************************


//うっそぴょーーーん


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cmath>
#include <time.h>

#define	PI	3.141592654	//円周率
#define	ETA	0.1	//学習係数
#define SIGMB2 1.0 //教師ノイズ
#define Tmax 30 //終了時間
#define dt 0.1 //時間刻み
#define d 0.1 //積分刻み
#define inf 10.0 //無限大の値

//*** 階段関数θ ***
double theta(double u)
{
	if(u>=0.0){
    	return(1.0);
    }else{
    	return(0.0);
    }
}

//*** 符合関数sgn ***
double sgn(double u)
{
	if(u>=0.0){
    	return(1.0);
    }else{
    	return(-1.0);
    }
}

//*** 2次元ガウス ***
double Puv(double u,double v,double R)
{
	return 1.0/(2.0*PI*sqrt(1.0-R*R))*exp(-(u*u+v*v-2.0*R*u*v)/(2.0*(1.0-R*R)));
}

//*** 正規分布 ***
double P(double x,double sigm2)
{
	return 1.0/(sqrt(2.0*PI*sigm2))*exp(-(x*x)/(2.0*sigm2));
}
//sss
