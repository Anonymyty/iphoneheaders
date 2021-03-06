/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWStatisticsSource.h>

@class NSString, NSUUID, NSData;

@interface NWStatisticsTCPSource : NWStatisticsSource {

	nstat_tcp_descriptor _descriptor;
	NSString* _TCPState;
	NSString* _congestionAlgorithm;
	NSString* _processName;
	NSUUID* _uuid;
	NSUUID* _euuid;
	NSUUID* _vuuid;
	NSData* _localAddress;
	NSData* _remoteAddress;

}

@property (readonly) long long interface; 
@property (retain) NSString * TCPState;                                      //@synthesize TCPState=_TCPState - In the implementation block
@property (readonly) long long sendBufferSize; 
@property (readonly) long long sendBufferUsed; 
@property (readonly) long long receiveBufferSize; 
@property (readonly) long long receiveBufferUsed; 
@property (readonly) long long txUnacked; 
@property (readonly) long long txWindow; 
@property (readonly) long long txCongestionWindow; 
@property (readonly) long long trafficClass; 
@property (readonly) unsigned long long trafficManagementFlags; 
@property (retain) NSString * congestionAlgorithm;                           //@synthesize congestionAlgorithm=_congestionAlgorithm - In the implementation block
@property (readonly) unsigned long long uniqueProcessID; 
@property (readonly) int processID; 
@property (retain) NSString * processName;                                   //@synthesize processName=_processName - In the implementation block
@property (readonly) unsigned long long eupid; 
@property (readonly) int epid; 
@property (retain) NSUUID * uuid;                                            //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSUUID * euuid;                                           //@synthesize euuid=_euuid - In the implementation block
@property (retain) NSUUID * vuuid;                                           //@synthesize vuuid=_vuuid - In the implementation block
@property (retain) NSData * localAddress;                                    //@synthesize localAddress=_localAddress - In the implementation block
@property (retain) NSData * remoteAddress;                                   //@synthesize remoteAddress=_remoteAddress - In the implementation block
@property (readonly) BOOL interfaceUnknown; 
@property (readonly) BOOL interfaceLoopback; 
@property (readonly) BOOL interfaceCellular; 
@property (readonly) BOOL interfaceWifi; 
@property (readonly) BOOL interfaceWired; 
@property (readonly) BOOL interfaceAWDL; 
@property (readonly) BOOL interfaceExpensive; 
@property (readonly) BOOL interfaceViaCellFallback; 
-(id)description;
-(NSString *)processName;
-(NSUUID *)uuid;
-(long long)interface;
-(id)initWithManager:(id)arg1 local:(const sockaddr*)arg2 remote:(const sockaddr*)arg3 ;
-(id)createCounts;
-(BOOL)handleDescriptor:(void*)arg1 length:(unsigned long long)arg2 ;
-(NSString *)TCPState;
-(NSString *)congestionAlgorithm;
-(NSUUID *)euuid;
-(NSUUID *)vuuid;
-(void)setTCPState:(NSString *)arg1 ;
-(void)setCongestionAlgorithm:(NSString *)arg1 ;
-(id)createNSUUIDForBytes:(unsigned char)arg1 ;
-(void)setEuuid:(NSUUID *)arg1 ;
-(void)setVuuid:(NSUUID *)arg1 ;
-(long long)sendBufferUsed;
-(long long)receiveBufferSize;
-(long long)receiveBufferUsed;
-(long long)txWindow;
-(long long)txCongestionWindow;
-(unsigned long long)trafficManagementFlags;
-(unsigned long long)uniqueProcessID;
-(unsigned long long)eupid;
-(unsigned)connstatusProbeActivated;
-(unsigned)connstatusConnProbeFailed;
-(unsigned)connstatusReadProbeFailed;
-(unsigned)connstatusWriteProbeFailed;
-(BOOL)interfaceUnknown;
-(BOOL)interfaceLoopback;
-(BOOL)interfaceCellular;
-(BOOL)interfaceWifi;
-(BOOL)interfaceWired;
-(BOOL)interfaceAWDL;
-(BOOL)interfaceExpensive;
-(BOOL)interfaceViaCellFallback;
-(int)processID;
-(void)setUuid:(NSUUID *)arg1 ;
-(long long)trafficClass;
-(void)setProcessName:(NSString *)arg1 ;
-(long long)sendBufferSize;
-(NSData *)remoteAddress;
-(NSData *)localAddress;
-(void)setLocalAddress:(NSData *)arg1 ;
-(void)setRemoteAddress:(NSData *)arg1 ;
-(int)epid;
-(long long)txUnacked;
@end

