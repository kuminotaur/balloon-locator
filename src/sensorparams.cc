#include "sensorparams.h"

SensorParams::SensorParams() {
  rA_ << 0.1013, -0.0887,
    -0.0004, -0.0004,
    0.0472,  0.0472;
  eAB_ << 0, 0, PI;
  rc_  <<  0.1159, -0.0004, -0.0435;
  // Calibrated values for eCB
  eCB_ << 125*PI/180, 0*PI/180, 85*PI/180;
  pixelSize_ = 2e-6;
  f_ = pixelSize_*1657.72;
  imageWidthPixels_ = 3840;
  imageHeightPixels_ = 2160;
  cx_ = pixelSize_*imageWidthPixels_/2;
  cy_ = pixelSize_*imageHeightPixels_/2;
  K_ << f_, 0, cx_,
         0, f_, cy_,
         0, 0,  1;
  distortionCoeffs_ << -0.0217226, 0, 0, 0, 0;
  Rc_ << 20*20,0,20*20,0;
}
