#ifndef GERG2004_H
#define GERG2004_H

class Gerg2004{
 public:
  double z_GERG2004(double fO2,double fHe,double P, double T);
 private:
  
  double dalphar_ddelta_He(double delta, double tau);
  double dalphar_ddelta_O2(double delta, double tau);
  double dalphar_ddelta_N2(double delta, double tau);
  double dalphar_ddelta_mix(double fO2,double fHe,double delta,double tau);
  double dens_r(double fO2,double fHe);
  double temp_r(double fO2,double fHe);
  
};






#endif
