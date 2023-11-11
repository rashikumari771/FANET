#ifndef FANET_NETWORK_H
#define FANET_NETWORK_H

#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/mobility-module.h"
#include "ns3/applications-module.h"

#include "partical.h"

using namespace ns3;

class FanetNetwork {
public:
  FanetNetwork();
  ~FanetNetwork();

  void SetupNetwork();
  void RunSimulation();

private:
  void ClusterFormation();
  void ClusterHeadSelection();
  void ClusterMaintenance();
  void PrintOptimalCHs(uint32_t optimalCHs);

  // Additional helper functions can be declared here

  // Data members can be declared here

};

#endif // FANET_NETWORK_H
