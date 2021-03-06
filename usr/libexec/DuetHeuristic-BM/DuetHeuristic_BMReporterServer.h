/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:07 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/DuetHeuristic-BM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, BatteryModel;

@interface DuetHeuristic_BMReporterServer : NSObject {

	NSObject*<OS_dispatch_queue> _requestQueue;
	BatteryModel* _batteryModel;

}

@property (retain) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
@property (readonly) BatteryModel * batteryModel;                          //@synthesize batteryModel=_batteryModel - In the implementation block
-(id)initWithBatteryModel:(id)arg1 ;
-(BOOL)supportsProtocolMessageType:(long long)arg1 ;
-(void)handleEvent:(id)arg1 forMessageType:(long long)arg2 onConnection:(id)arg3 ;
-(BatteryModel *)batteryModel;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)requestQueue;
@end

