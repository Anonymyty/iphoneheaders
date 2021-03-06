/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:19 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <locationd/CLRoutineMonitorClientProtocol.h>

@protocol CLRoutineMonitorServiceProtocol;
@class CLSilo, NSMutableDictionary, NSString;

@interface CLPBRequestIndexGenerator : NSObject <CLRoutineMonitorClientProtocol> {

	BOOL _valid;
	CLSilo* _silo;
	id<CLRoutineMonitorServiceProtocol> _routineMonitor;
	NSMutableDictionary* _seedLocationsAtIndex;

}

@property (assign,nonatomic) BOOL valid;                                                      //@synthesize valid=_valid - In the implementation block
@property (nonatomic,retain) CLSilo * silo;                                                   //@synthesize silo=_silo - In the implementation block
@property (nonatomic,retain) id<CLRoutineMonitorServiceProtocol> routineMonitor;              //@synthesize routineMonitor=_routineMonitor - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * seedLocationsAtIndex;                      //@synthesize seedLocationsAtIndex=_seedLocationsAtIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptionOfIndex:(id)arg1 ;
-(id)initWithSilo:(id)arg1 ;
-(void)setupWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)seedLocationsAtIndex;
-(id<CLRoutineMonitorServiceProtocol>)routineMonitor;
-(void)setSeedLocations:(id)arg1 atIndex:(id)arg2 ;
-(void)setSilo:(CLSilo *)arg1 ;
-(void)setRoutineMonitor:(id<CLRoutineMonitorServiceProtocol>)arg1 ;
-(void)setSeedLocationsAtIndex:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(BOOL)valid;
-(CLSilo *)silo;
-(id)indexForLocation:(const SCD_Struct_CL20*)arg1 ;
-(void)setValid:(BOOL)arg1 ;
@end

