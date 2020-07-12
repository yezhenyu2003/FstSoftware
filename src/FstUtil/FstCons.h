#ifndef FstTrackingCons_h
#define FstTrackingCons_h

#include "TMath.h"

namespace FST
{
  const int numARMs        = 2;
  const int numPorts       = 2;  // note that the readout just gives 24 APVs on a single ARM, there is
  const int numAPVs        = 12; // no actual Port information, we just introduce Port information ourselves
  const int numROChannels  = 1152; // numFstChannels*numFstTBins
  const int numChannels    = 128;
  const int numTBins       = 9;
  const int pedTimeBin     = 3; // time bin used for pedestal calculation
  const int defaultTimeBin = 3; // default time bin

  // FST Geometry
  const int numFstAPVs      = 8; // 0-3 for inner sector | 4-7 for outer sector
  const int numRStrip       = 8; // 0-3 for inner sector | 4-7 for outer sector
  const int numPhiSeg       = 128; // 128 segmentations in phi direction
  const double rInner       = 50.0; // mm | smallest radius of inner sector
  const double rOuter       = 165.0; // mm | smallest radius of outer sector
  const double pitchR       = 28.75; // mm | (280-165)/4.0
  const double pitchPhi     = TMath::Pi()*30.0/180.0/numPhiSeg; // rad | 30 degree with 128 segmentations
  // const double gapPhi       = TMath::Pi()*1.0/180.0; // 1 degree gap between 2 outer sensor
  const double gapPhi       = 0.0;
  const double pitchLayer03 = 134.9375; // mm

  const double rMax   = rOuter + 5.0*pitchR; // 308.75 mm
  const double rMin   = rInner - 1.0*pitchR; // 21.25 mm
  const double phiMax = TMath::Pi()*15.0/180.0 + 0.5*gapPhi; // 64.0*FST::pitchPhi +0.5*gapPhi;
  const double phiMin = 0.5*gapPhi; // 0.5*gapPhi

  // FST Clustering
  const int mFstNumSensorsPerModule = 3; // 0 for APV 0-3(1-4) on inner sector | 1 for APV 4&5(5&6) on outer sector | 2 for APV 6&7(7&8) on outer sector
  const int mFstNumPhiSegPerSensor  = 128; // 128 for sensor 0 | 64 for sensor 1 & 2
  const int mFstNumRstripPerSensor  = 4;

  // IST Cosmic Test Stand Geometry
  const int noRows          = 64; // for one group of sensors
  const int noColumns       = 24;
  const double pitchRow     = 0.596; //mm
  const double pitchColumn  = 6.275; //mm
  const double pitchLayer12 = 34.925; //mm, distances between the 1st & 2nd Layer
  const double pitchLayer23 = 30.1625; //mm, distances between the 2nd & 3rd Layer

  // Alignment Parameters
  const double phi_rot_ist1 = -0.00113551; // aligned IST1 & IST3 to IST2
  const double x1_shift     = 0.530444;
  const double y1_shift     = 1.17133;
  const double phi_rot_ist3 = -0.00379431;
  const double x3_shift     = 0.45811;
  const double y3_shift     = 1.0116;
  // const double phi_rot_ist2 = 0.0438495; // aligned IST2 to FST with 2-layer tracking
  // const double x2_shift     = 140.99; // x2_shift + 6.0
  // const double y2_shift     = -20.7848;
  const double phi_rot_ist2 = 3.16437; // for Inner sector test
  const double x2_shift     = 214.935;
  const double y2_shift     = 32.1761;

  // Hits Selection
  const float nFstPedsCut      = 3.0; // used for ped
  const float nIstPedsCut      = 3.0;
  const float nIstHitsCut      = 6.0;
  const float nIstThresholdCut = 3.0;
  const int maxNHits           = 25; // max number of hits array
  const int maxNHitsPerEvent   = 20; // max number of hits per event = > bail the event if found more than this number
  const double MinNoise        = 10.0;
  const double maxAngle        = 100.0;
  const double rad2deg         = 180.0/3.141593;

  const double mSigWeight_FST[8] = {1.0,1.0,1.0,1.0,1.0,0.571882,0.299947,0.164641};
  const double mSigWeight_IST = 1.0;
}

#endif
