/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface HDDiagnosticManager : NSObject {

	NSHashTable* _objects;
	int _lock;

}
+(id)sharedDiagnosticManager;
-(void)removeObject:(id)arg1 ;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)logAllDiagnostics;
-(id)_diagnosticsForKeys:(id)arg1 shouldLog:(BOOL)arg2 ;
-(id)_diagnosticsOverview;
-(id)diagnosticsForKeys:(id)arg1 ;
@end

