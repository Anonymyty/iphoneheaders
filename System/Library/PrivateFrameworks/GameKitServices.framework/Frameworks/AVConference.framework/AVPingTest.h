/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AVPingTest : NSObject {

	NSString* ipAsString;
	BOOL usingWifi;
	NSString* interfaceNameToTest;
	float min;
	float max;
	float avg;
	float stddev;
	float packetLossRate;
	long long lastReturnedError;

}

@property (nonatomic,readonly) BOOL usingWifi; 
@property (nonatomic,readonly) float min; 
@property (nonatomic,readonly) float max; 
@property (nonatomic,readonly) float avg; 
@property (nonatomic,readonly) float stddev; 
@property (nonatomic,readonly) float packetLossRate; 
-(long long)parseResults:(char*)arg1 secondLastLine:(char*)arg2 ;
-(BOOL)parsePingLineForBadInterface:(char*)arg1 ;
-(BOOL)parsePingLineForBadCommand:(char*)arg1 ;
-(BOOL)parsePingLineForPLR:(char*)arg1 ;
-(BOOL)parsePingLineForLatencyStats:(char*)arg1 ;
-(float)max;
-(void)dealloc;
-(id)description;
-(long long)start;
-(float)packetLossRate;
-(void)calculateInterfaceName;
-(id)initWithIPAsString:(id)arg1 usingWifi:(BOOL)arg2 ;
-(BOOL)usingWifi;
-(float)avg;
-(float)stddev;
-(float)min;
@end
