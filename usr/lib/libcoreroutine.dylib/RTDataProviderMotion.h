/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTDataProvider.h>
#import <libobjc.A.dylib/RTDataProviderProtocol.h>

@class NSString;

@interface RTDataProviderMotion : RTDataProvider <RTDataProviderProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)providerName;
-(id)init;
-(void)shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)populateDataProviderWithHandler:(/*^block*/id)arg1 ;
-(id)supportedEventClasses;
-(void)_unregisterForDominantActivityNotifications;
-(void)onDominantMotionActivityNotification:(id)arg1 ;
-(void)_processDominantMotionActivity:(id)arg1 ;
-(void)_registerForDominantActivityNotifications;
-(void)_fetchEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 handler:(/*^block*/id)arg3 ;
@end
