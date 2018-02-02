#ifndef MATERIAL_H
#define MATERIAL_H

#include "Eigen/Dense"

class Material{

 public:
  Material (char* id);
  Material (char* id, const Eigen::Matrix3f& ucVectors,
            const Eigen::Matrix<double,3,Eigen::Dynamic>& ucAtoms);
  Material (char* id, const UnitCell& uc);

 private:
