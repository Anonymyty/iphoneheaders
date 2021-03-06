/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:19:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotifier.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source;
@class CLLocationManager, CLLocationManagerRoutine, CLLocation, NSMutableArray, NSObject, NSString;

@interface RTLocationManager : RTNotifier <CLLocationManagerDelegate> {

	int _currentCountrySupportsCoreRoutineToken;
	int _userOptedIntoGEOAddressCorrectionToken;
	BOOL _updating;
	BOOL _leechingLocations;
	BOOL _currentCountrySupportsCoreRoutine;
	BOOL _userOptedIntoGEOAddressCorrection;
	BOOL _persistingLocations;
	BOOL _enabled;
	BOOL _supported;
	CLLocationManager* _locationManager;
	CLLocationManagerRoutine* _locationManagerRoutine;
	CLLocation* _lastLocation;
	NSMutableArray* _persistedLocations;
	NSMutableArray* _currentLocationHandlers;
	NSMutableArray* _pendingDbInvocations;
	NSObject*<OS_dispatch_source> _stopUpdatingLocationTimer;
	NSObject*<OS_dispatch_source> _persistLocationsTimer;

}

@property (nonatomic,retain) CLLocationManager * locationManager;                                  //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) CLLocationManagerRoutine * locationManagerRoutine;                    //@synthesize locationManagerRoutine=_locationManagerRoutine - In the implementation block
@property (nonatomic,retain) CLLocation * lastLocation;                                            //@synthesize lastLocation=_lastLocation - In the implementation block
@property (nonatomic,retain) NSMutableArray * persistedLocations;                                  //@synthesize persistedLocations=_persistedLocations - In the implementation block
@property (nonatomic,copy) NSMutableArray * currentLocationHandlers;                               //@synthesize currentLocationHandlers=_currentLocationHandlers - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingDbInvocations;                                //@synthesize pendingDbInvocations=_pendingDbInvocations - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> stopUpdatingLocationTimer;              //@synthesize stopUpdatingLocationTimer=_stopUpdatingLocationTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> persistLocationsTimer;                  //@synthesize persistLocationsTimer=_persistLocationsTimer - In the implementation block
@property (assign,nonatomic) BOOL updating;                                                        //@synthesize updating=_updating - In the implementation block
@property (assign,nonatomic) BOOL leechingLocations;                                               //@synthesize leechingLocations=_leechingLocations - In the implementation block
@property (assign,nonatomic) BOOL currentCountrySupportsCoreRoutine;                               //@synthesize currentCountrySupportsCoreRoutine=_currentCountrySupportsCoreRoutine - In the implementation block
@property (assign,nonatomic) BOOL userOptedIntoGEOAddressCorrection;                               //@synthesize userOptedIntoGEOAddressCorrection=_userOptedIntoGEOAddressCorrection - In the implementation block
@property (assign,nonatomic) BOOL persistingLocations;                                             //@synthesize persistingLocations=_persistingLocations - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                         //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL supported;                                                       //@synthesize supported=_supported - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)enabled;
-(void)dealloc;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)clear;
-(void)setUpdating:(BOOL)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)setLastLocation:(CLLocation *)arg1 ;
-(CLLocation *)lastLocation;
-(void)setSupported:(BOOL)arg1 ;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(BOOL)supported;
-(void)onRoutineEnabled:(id)arg1 ;
-(void)onStopUpdatingLocationTimerExpiry;
-(void)persistLocations;
-(BOOL)currentCountrySupportsCoreRoutine;
-(void)setCurrentCountrySupportsCoreRoutine:(BOOL)arg1 ;
-(void)shouldLeechLocations;
-(BOOL)userOptedIntoGEOAddressCorrection;
-(void)setUserOptedIntoGEOAddressCorrection:(BOOL)arg1 ;
-(void)onPurgeNotification:(id)arg1 ;
-(BOOL)updating;
-(NSMutableArray *)currentLocationHandlers;
-(void)setLeechingLocations:(BOOL)arg1 ;
-(CLLocationManagerRoutine *)locationManagerRoutine;
-(void)shouldPersistLocations;
-(BOOL)leechingLocations;
-(void)setPersistingLocations:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)persistLocationsTimer;
-(void)setPersistedLocations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)persistedLocations;
-(void)fetchCachedLocationWithHandler:(/*^block*/id)arg1 ;
-(id)averageLocations:(id)arg1 atInterval:(double)arg2 ;
-(void)fetchCurrentLocationWithHandler:(/*^block*/id)arg1 ;
-(void)fetchStoredLocationsWithHandler:(/*^block*/id)arg1 ;
-(void)fetchStoredLocationsWithinRangeOfStartDate:(id)arg1 andStopDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)fetchStoredLocationsAveragedAtInterval:(double)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)clearStoredLocationsPredating:(id)arg1 ;
-(void)setLocationManagerRoutine:(CLLocationManagerRoutine *)arg1 ;
-(void)setCurrentLocationHandlers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pendingDbInvocations;
-(void)setPendingDbInvocations:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_source>)stopUpdatingLocationTimer;
-(void)setStopUpdatingLocationTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setPersistLocationsTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)persistingLocations;
@end

