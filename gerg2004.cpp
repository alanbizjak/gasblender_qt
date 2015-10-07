/*'This set of routines calculates the compressibility factors of
oxygen, helium, nitrogen and their mixtures 'according to the
GERG-2004 algorithm. This implementation is valid only if the mixtures
are well into the gas phase.  'Hence recommended limitations for
pressure and temperature apply as follows: P < 400 bar-a, T > 250 degK

'If you use the GERG-2004 model, please give credit to its authors as
follows: 'Kunz, O.; Klimeck, R.; Wagner, W.; Jaeschke, M. (2007): The
GERG 2004 Wide Range Equation of State for Natural 'Gases and Other
Mixtures: GERG Technical Monograph 15 (2007) and Fortschr. Ber. VDI,
Reihe 6, Nr. 557, 'VDI Verlag, Düsseldorf, 2007.

'This code is free open source and can be used and modified at your
convenience. If you wish to give me credit for 'programming it, please
do so as follows: 'The partial GERG 2004 implementation used to
calculate the compressibility factors of oxygen, helium, nitrogen and
'their mixtures in the gas phase was inspired by open source code
written by David de Marneffe in December 2007.  'David can be
contacted at daviddemarneffe@yahoo.com 
*/
#include "gerg2004.h"
#include <math.h>
#include <stdio.h>

double Gerg2004::dalphar_ddelta_He(double delta, double tau){
  double dalphar_ddelta_He = 
    -0.45579024006737 + 1.2516390754925 * pow(tau, 0.125)
    - 1.5438231650621 * pow(tau, 0.75)+ 0.020467489707221*4*pow(delta, 3) * tau
    - 0.34476212380781 * (1 - delta) *pow(tau, 0.75)*exp(-delta)
    - 0.020858459512787*pow(delta, 2)*(3-delta)*pow(tau, 2.625)*exp(-delta)
    + 0.016227414711778*pow(delta,4)*(5 - delta)*pow(tau, 0.125)*exp(-delta)
    - 0.057471818200892*pow(delta,4)*(5-delta)*pow(tau,1.25) * exp(-delta)
    + 0.019462416430715 *pow(delta,4) * (5 - delta) *pow(tau,2) * exp(-delta)
    - 0.03329568012302*delta*(2-2*delta*delta)*tau*exp(-delta*delta)
    - 0.010863577372367*(1 - 3*pow(delta,3))*pow(tau,4.5)*exp(-pow(delta,3))
    - 0.022173365245954*delta*(2-3*pow(delta,3))*pow(tau,5)*exp(-pow(delta,3));
    return dalphar_ddelta_He;
}

double Gerg2004::dalphar_ddelta_O2(double delta, double tau){

double dalphar_ddelta_O2 =
  0.88878286369701*pow(tau,0.25)- 2.4879433312148*pow(tau,1.125)
  +0.59750190775886*pow(tau,1.5)+ 9.6501817061881E-03*2*delta*pow(tau,1.375)
  + 0.07197042871277*3*pow(delta,2)*pow(tau,0.25)
  +2.2337443000195E-04*7*pow(delta,6)*pow(tau,0.875)
  +0.18558686391474*delta*(2-delta)*pow(tau,0.625)*exp(-delta)
  -0.03812936803576*pow(delta,4)*(5-delta)*pow(tau,1.75)*exp(-delta)
  - 0.15352245383006*(1-2*pow(delta,2))*pow(tau,3.625)*exp(-pow(delta, 2))
  - 0.026726814910919*pow(delta,3)*(4-2*pow(delta,2))*pow(tau,3.625)*exp(-delta*delta)
  - 0.025675298677127*delta*delta*(3-3*pow(delta,3))*pow(tau,14.5)*exp(-pow(delta,3)) 
  + 9.5714302123668E-03*pow(delta,3)*(4-3*pow(delta,3))*pow(tau,12)*exp(-pow(delta,3));
  return dalphar_ddelta_O2;
  }

double Gerg2004::dalphar_ddelta_N2(double delta, double tau){
  double dalphar_ddelta_N2 = 
    0.59889711801201 *pow(tau,0.125)- 1.6941557480731 * pow(tau,1.125) 
    + 0.24579736191718 * 2 * delta *pow(tau,0.375)
    - 0.23722456755175 * 2 * delta * pow(tau, 1.125)
    + 0.017954918715141 * 4 * pow(delta, 3) * pow(tau, 0.625)
    + 0.014592875720215 * 4 * pow(delta, 3) *pow(tau, 1.5)
    + 0.10008065936206 * (1 - delta) * pow(tau, 0.625) * exp(-delta) 
    + 0.73157115385532 * (1 - delta) *pow(tau, 2.625) * exp(-delta)
    - 0.88372272336366 * (1 - delta) *pow(tau, 2.75) * exp(-delta)
    + 0.31887660246708 * delta * (2 - delta) *pow(tau,2.125) * exp(-delta)
    + 0.20766491728799 * delta*delta * (3 - delta) * tau*tau * exp(-delta)
    - 0.019379315454158 * pow(delta, 5)*(6 - delta)*pow(tau, 1.75)*exp(-delta)
    - 0.16936641554983*delta*(2-2*delta*delta)*pow(tau,4.5)*exp(-delta*delta)
    + 0.13546846041701*delta*delta*(3-2*delta*delta)*pow(tau,4.75)*exp(-delta*delta)
    - 0.033066712095307*delta*delta*(3-2*delta*delta)*pow(tau,5)*exp(-delta*delta)
    - 0.06069081701855*pow(delta,3)*(4-2*delta*delta)*pow(tau,4)*exp(-delta*delta)
    + 0.012797548292871*pow(delta,3)*(4-2*delta*delta)*pow(tau,4.5)*exp(-delta*delta)
    + 5.8743664107299E-03*delta*(2-3*pow(delta,3))*pow(tau,7.5)*exp(-pow(delta,3))
    - 0.018451951971969*delta*delta*(3-3*pow(delta,3))*pow(tau,14)*exp(-pow(delta,3))
    + 4.7226622042472E-03*pow(delta,3)*(4-3*pow(delta,3))*pow(tau,11.5)*exp(-pow(delta,3))
    - 5.2024079680599E-03*pow(delta,4)*(5-6*pow(delta,6))*pow(tau,26)*exp(-pow(delta,6))
    + 0.043563505956635*pow(delta,5)*(6-6*pow(delta,6))*pow(tau,28)*exp(-pow(delta,6))
    - 0.036251690750939*pow(delta,5)*(6-6*pow(delta,6))*pow(tau,30)*exp(-pow(delta,6))
    - 2.8974026866543E-03*pow(delta,6)*(7-6*pow(delta,6))*pow(tau,16)*exp(-pow(delta,6));
  return dalphar_ddelta_N2; 
}
double Gerg2004::dalphar_ddelta_mix(double fO2,double fHe,double delta,double tau){
  double fN2=1.0-fHe-fO2;
  double dalphar_ddelta_mix = fO2 * dalphar_ddelta_O2(delta, tau)
    + fHe * dalphar_ddelta_He(delta, tau)+ fN2 * dalphar_ddelta_N2(delta, tau);
  return dalphar_ddelta_mix;
}

double Gerg2004::dens_r(double fO2,double fHe){
  double inv_dens_r;
  double fN2 = 1.0-fHe-fO2;
  double dens_cN2 = 11.1839;
  double dens_cO2 = 13.63;
  double dens_cHe = 17.399;
  double BmuN2O2 = 0.99952177;
  double BmuN2He = 0.969501055;
  double BmuO2He = 1.0;
  double GmuN2O2 = 0.997082328;
  double GmuN2He = 0.932629867;
  double GmuO2He = 1.0;
  double inv3 = 1.0/3.0;

  if (fN2 == 1.0 ||  fO2 == 1.0 || fHe  == 1.0){
    //pure gas
    inv_dens_r = fN2*fN2/dens_cN2+fO2*fO2/dens_cO2+fHe*fHe/dens_cHe;
  }else{
    // not pure gas (two cases, otherwise division by zero may occour) 
    inv_dens_r = 
      fN2*fN2/dens_cN2+fO2*fO2/dens_cO2+fHe*fHe/dens_cHe
      + 0.25*fN2*fO2*BmuN2O2*GmuN2O2*(fN2+fO2)/(BmuN2O2*BmuN2O2*fN2+fO2)
      *pow((1/pow(dens_cN2,inv3)+1/pow(dens_cO2,inv3)), 3)
      + 0.25*fN2*fHe*BmuN2He*GmuN2He*(fN2 + fHe)/(BmuN2He*BmuN2He* fN2 + fHe)
      * pow((1.0/pow(dens_cN2,inv3) + 1.0/pow(dens_cHe,inv3)),3)
    + 0.25 * fO2 * fHe * BmuO2He * GmuO2He * (fO2 + fHe) / (BmuO2He*BmuO2He * fO2 + fHe)
      * pow((1 /pow(dens_cO2,inv3) + 1.0/pow(dens_cHe,inv3)), 3);
}
  double dens_r = 1 / inv_dens_r;
  return dens_r;
}
double Gerg2004::temp_r(double fO2,double fHe){
  double fN2=1.0-fO2-fHe;
  double temp_cN2 = 126.192;
  double temp_cO2 = 154.595;
  double temp_cHe = 5.1953;
  double BTN2O2 = 0.997190589;
  double BTN2He = 0.692868765;
  double BTO2He = 1.0;
  double GTN2O2 = 0.995157044;
  double GTN2He = 1.47183158;
  double GTO2He = 1.0;
  double temp_r;
  if (fN2 == 1.0 ||  fO2 == 1.0 || fHe  == 1.0){
    //pure gas
    temp_r = fN2*fN2 * temp_cN2 + fO2*fO2 * temp_cO2 + fHe*fHe* temp_cHe; //???
  }else{
    temp_r = fN2*fN2* temp_cN2 + fO2*fO2 * temp_cO2 + fHe*fHe * temp_cHe
      + 2 * fN2 * fO2 * BTN2O2 * GTN2O2 * (fN2 + fO2) / (BTN2O2*BTN2O2 * fN2 + fO2)
      * pow((temp_cN2 * temp_cO2), 0.5)
      + 2 * fN2 * fHe * BTN2He * GTN2He * (fN2 + fHe) / (BTN2He*BTN2He* fN2 + fHe)
      * pow((temp_cN2 * temp_cHe), 0.5) 
      + 2 * fO2 * fHe * BTO2He * GTO2He * (fO2 + fHe) / (BTO2He*BTO2He * fO2 + fHe)
      * pow((temp_cO2 * temp_cHe), 0.5); //???
  }

  return temp_r;
}
double Gerg2004::z_GERG2004(double fO2,double fHe,double P, double T){

  /*
'calculates the compressibility factor of a trimix mixture to a user defined precision dz
'fO2 and fHe are fractions (not %) of O2 and He in the mixture
'P = pressure in bar-a, absolute pressure
'T temperature in degK, absolute temperature
'max_dz absolute value of max allowed difference between two consecutive iterations
  */ 

  double eps = 1E-14;
   //universal gas constant
  double R = 0.08314472;
  //reduced temperature
  double tau = temp_r(fO2,fHe)/T;
  //calculate mixture density reducing function 
  double dens_red = dens_r(fO2, fHe);
  //first estimate of z
  double z_GERG2004 = 1.0;
  double dz;
  double z_old;
  //  int counter=0;
  do{
    //calculate molar density (mole per liter)
    double dens = P / (z_GERG2004 * R * T);
    //calculate reduced density
    double delta = dens / dens_red;
    //remember previous value
    z_old = z_GERG2004;
    //calculate new z
    z_GERG2004 = 1.0 + delta * dalphar_ddelta_mix(fO2, fHe, delta, tau);
    //calculate dz
    dz = fabs(z_GERG2004 - z_old);
    //counter++;
    //printf("%d %lf\n",counter,z_GERG2004);
  }while(dz>=eps);     
  return z_GERG2004;
}
