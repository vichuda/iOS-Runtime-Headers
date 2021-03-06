/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BluetoothManager.framework/BluetoothManager
 */

@class NSMutableDictionary;

@interface BluetoothManager : NSObject  {
    struct BTLocalDeviceImpl { } *_localDevice;
    struct BTSessionImpl { } *_session;
    int _available;
    BOOL _audioConnected;
    BOOL _scanningEnabled;
    BOOL _scanningInProgress;
    unsigned int _scanningServiceMask;
    struct BTDiscoveryAgentImpl { } *_discoveryAgent;
    struct BTPairingAgentImpl { } *_pairingAgent;
    struct BTAccessoryManagerImpl { } *_accessoryManager;
    NSMutableDictionary *_btAddrDict;
    NSMutableDictionary *_btDeviceDict;
}

+ (id)sharedInstance;
+ (int)lastInitError;

- (void)postNotificationName:(id)arg1 object:(id)arg2;
- (id)init;
- (void)dealloc;
- (BOOL)isAnyoneScanning;
- (BOOL)wasDeviceDiscovered:(id)arg1;
- (BOOL)deviceScanningEnabled;
- (BOOL)deviceScanningInProgress;
- (void)resetDeviceScanning;
- (void)scanForConnectableDevices:(unsigned int)arg1;
- (BOOL)isDiscoverable;
- (void)setDiscoverable:(BOOL)arg1;
- (id)pairedDevices;
- (id)pairedLEDevices;
- (BOOL)connectable;
- (void)setConnectable:(BOOL)arg1;
- (id)connectingDevices;
- (id)connectedDevices;
- (BOOL)audioConnected;
- (void)enableTestMode;
- (BOOL)_attach:(id)arg1;
- (BOOL)_setup:(struct BTSessionImpl { }*)arg1;
- (void)_cleanup:(BOOL)arg1;
- (void)_postNotificationWithArray:(id)arg1;
- (int)powerState;
- (void)setDeviceScanningEnabled:(BOOL)arg1;
- (void)_scanForServices:(unsigned int)arg1 withMode:(int)arg2;
- (void)scanForServices:(unsigned int)arg1;
- (void)_setScanState:(int)arg1;
- (void)_restartScan;
- (id)addDeviceIfNeeded:(struct BTDeviceImpl { }*)arg1;
- (void)_removeDevice:(id)arg1;
- (void)setDevicePairingEnabled:(BOOL)arg1;
- (BOOL)devicePairingEnabled;
- (void)cancelPairing;
- (id)pairedDevices:(BOOL)arg1;
- (void)postNotificationName:(id)arg1 object:(id)arg2 error:(id)arg3;
- (BOOL)_onlySensorsConnected;
- (void)_connectedStatusChanged;
- (void)_connectabilityChanged;
- (void)_discoveryStateChanged;
- (void)setAudioConnected:(BOOL)arg1;
- (BOOL)isServiceSupported:(unsigned int)arg1;
- (struct BTAccessoryManagerImpl { }*)_accessoryManager;
- (void)connectDevice:(id)arg1;
- (void)connectDevice:(id)arg1 withServices:(unsigned int)arg2;
- (void)setPincode:(id)arg1 forDevice:(id)arg2;
- (void)acceptSSP:(int)arg1 forDevice:(id)arg2;
- (void)unpairDevice:(id)arg1;
- (void)startVoiceCommand:(id)arg1;
- (void)endVoiceCommand:(id)arg1;
- (void)_postNotification:(id)arg1;
- (BOOL)connected;
- (BOOL)enabled;
- (void)postNotification:(id)arg1;
- (BOOL)setEnabled:(BOOL)arg1;
- (void)_powerChanged;
- (BOOL)setPowered:(BOOL)arg1;
- (BOOL)available;
- (BOOL)powered;
- (int)localDeviceSupportsService:(unsigned int)arg1;

@end
