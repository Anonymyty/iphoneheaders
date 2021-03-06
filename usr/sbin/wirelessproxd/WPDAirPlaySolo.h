/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:40 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/sbin/wirelessproxd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <wirelessproxd/XPCConnectionDelegate.h>

@class XPCConnection, NSData, NSString;

@interface WPDAirPlaySolo : NSObject <XPCConnectionDelegate> {

	BOOL _isScanning;
	BOOL _isAdvertising;
	BOOL _pendingStatusSent;
	long long _advertisingType;
	XPCConnection* _connection;
	NSData* _advertisingPayload;
	NSString* _processName;

}

@property (assign) BOOL isScanning;                                    //@synthesize isScanning=_isScanning - In the implementation block
@property (assign) BOOL isAdvertising;                                 //@synthesize isAdvertising=_isAdvertising - In the implementation block
@property (assign) BOOL pendingStatusSent;                             //@synthesize pendingStatusSent=_pendingStatusSent - In the implementation block
@property (assign) long long advertisingType;                          //@synthesize advertisingType=_advertisingType - In the implementation block
@property (nonatomic,retain) XPCConnection * connection;               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSData * advertisingPayload;              //@synthesize advertisingPayload=_advertisingPayload - In the implementation block
@property (retain) NSString * processName;                             //@synthesize processName=_processName - In the implementation block
-(void)reportCoreBluetoothStateChanged;
-(void)setAdvertisingType:(long long)arg1 ;
-(void)setAdvertisingPayload:(NSData *)arg1 ;
-(long long)advertisingType;
-(void)advertisingStarted:(id)arg1 ;
-(NSData *)advertisingPayload;
-(id)initWithConnection:(id)arg1 processName:(id)arg2 ;
-(BOOL)pendingStatusSent;
-(void)setPendingStatusSent:(BOOL)arg1 ;
-(void)transferPeripheralDiscovered:(id)arg1 ;
-(void)startScanning:(unsigned char)arg1 ;
-(void)startConnectionlessAirPlaySoloAdvertising:(id)arg1 ;
-(void)stopConnectionlessAirPlaySoloAdvertising;
-(void)startConnectionlessAirPlaySoloScanning:(id)arg1 ;
-(void)stopConnectionlessAirPlaySoloScanning:(id)arg1 ;
-(void)airPlaySoloLostDevice:(id)arg1 ;
-(void)dealloc;
-(NSString *)processName;
-(XPCConnection *)connection;
-(void)setConnection:(XPCConnection *)arg1 ;
-(void)setIsScanning:(BOOL)arg1 ;
-(void)startTrackingPeer:(id)arg1 ;
-(void)stopTrackingPeer:(id)arg1 ;
-(void)setProcessName:(NSString *)arg1 ;
-(void)messageArrived:(id)arg1 ;
-(void)connectionDied;
-(BOOL)isScanning;
-(BOOL)isAdvertising;
-(void)setIsAdvertising:(BOOL)arg1 ;
@end

