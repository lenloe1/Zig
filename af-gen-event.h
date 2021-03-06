// This file is generated by Simplicity Studio.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef __AF_GEN_EVENT__
#define __AF_GEN_EVENT__


// Code used to configure the cluster event mechanism
#define EMBER_AF_GENERATED_EVENT_CODE \
  EmberEventControl emberAfPriceClusterClientTickCallbackControl1; \
  EmberEventControl emberAfKeyEstablishmentClusterServerTickCallbackControl1; \
  extern EmberEventControl emberAfPluginFormAndJoinCleanupEventControl; \
  extern EmberEventControl emberAfPluginKeyEstablishmentApsDuplicateDetectionEventControl; \
  extern EmberEventControl emberAfPluginNetworkFindTickEventControl; \
  extern EmberEventControl emberAfPluginNetworkSteeringFinishSteeringEventControl; \
  extern EmberEventControl emberAfPluginScanDispatchScanEventControl; \
  extern EmberEventControl emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventControl; \
  extern void emberAfPluginFormAndJoinCleanupEventHandler(void); \
  extern void emberAfPluginKeyEstablishmentApsDuplicateDetectionEventHandler(void); \
  extern void emberAfPluginNetworkFindTickEventHandler(void); \
  extern void emberAfPluginNetworkSteeringFinishSteeringEventHandler(void); \
  extern void emberAfPluginScanDispatchScanEventHandler(void); \
  extern void emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventHandler(void); \
  static void networkEventWrapper(EmberEventControl *control, EmberAfNetworkEventHandler handler, uint8_t networkIndex) \
  { \
    emberAfPushNetworkIndex(networkIndex); \
    emberEventControlSetInactive(*control); \
    (*handler)(); \
    emberAfPopNetworkIndex(); \
  } \
  EmberEventControl emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventControls[1]; \
  extern void emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventHandler(void); \
  void emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventControls[0], emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventHandler, 0); } \
  EmberEventControl emberAfPluginSmartEnergyRegistrationTickNetworkEventControls[1]; \
  extern void emberAfPluginSmartEnergyRegistrationTickNetworkEventHandler(void); \
  void emberAfPluginSmartEnergyRegistrationTickNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginSmartEnergyRegistrationTickNetworkEventControls[0], emberAfPluginSmartEnergyRegistrationTickNetworkEventHandler, 0); } \
  static void clusterTickWrapper(EmberEventControl *control, EmberAfTickFunction callback, uint8_t endpoint) \
  { \
    emberAfPushEndpointNetworkIndex(endpoint); \
    emberEventControlSetInactive(*control); \
    (*callback)(endpoint); \
    emberAfPopNetworkIndex(); \
  } \
  void emberAfPriceClusterClientTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfPriceClusterClientTickCallbackControl1, emberAfPriceClusterClientTickCallback, 1); } \
  void emberAfKeyEstablishmentClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfKeyEstablishmentClusterServerTickCallbackControl1, emberAfKeyEstablishmentClusterServerTickCallback, 1); } \


// EmberEventData structs used to populate the EmberEventData table
#define EMBER_AF_GENERATED_EVENTS   \
  { &emberAfPriceClusterClientTickCallbackControl1, emberAfPriceClusterClientTickCallbackWrapperFunction1 }, \
  { &emberAfKeyEstablishmentClusterServerTickCallbackControl1, emberAfKeyEstablishmentClusterServerTickCallbackWrapperFunction1 }, \
  { &emberAfPluginFormAndJoinCleanupEventControl, emberAfPluginFormAndJoinCleanupEventHandler }, \
  { &emberAfPluginKeyEstablishmentApsDuplicateDetectionEventControl, emberAfPluginKeyEstablishmentApsDuplicateDetectionEventHandler }, \
  { &emberAfPluginNetworkFindTickEventControl, emberAfPluginNetworkFindTickEventHandler }, \
  { &emberAfPluginNetworkSteeringFinishSteeringEventControl, emberAfPluginNetworkSteeringFinishSteeringEventHandler }, \
  { &emberAfPluginScanDispatchScanEventControl, emberAfPluginScanDispatchScanEventHandler }, \
  { &emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventControl, emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventHandler }, \
  { &emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventControls[0], emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventWrapper0 }, \
  { &emberAfPluginSmartEnergyRegistrationTickNetworkEventControls[0], emberAfPluginSmartEnergyRegistrationTickNetworkEventWrapper0 }, \


#define EMBER_AF_GENERATED_EVENT_STRINGS   \
  "Price Cluster Client EP 1",  \
  "Key Establishment Cluster Server EP 1",  \
  "Form and Join Library Plugin Cleanup",  \
  "Key Establishment Plugin ApsDuplicateDetection",  \
  "Network Find Plugin Tick",  \
  "Network Steering Plugin FinishSteering",  \
  "Scan Dispatch Plugin Scan",  \
  "Update TC Link Key Plugin BeginTcLinkKeyUpdate",  \
  "Partner Link Key Exchange Plugin Timeout NWK 0", \
  "Smart Energy Registration Plugin Tick NWK 0", \


// The length of the event context table used to track and retrieve cluster events
#define EMBER_AF_EVENT_CONTEXT_LENGTH 2

// EmberAfEventContext structs used to populate the EmberAfEventContext table
#define EMBER_AF_GENERATED_EVENT_CONTEXT { 0x1, 0x700, true, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfPriceClusterClientTickCallbackControl1}, \
{ 0x1, 0x800, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfKeyEstablishmentClusterServerTickCallbackControl1}


#endif // __AF_GEN_EVENT__
