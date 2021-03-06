/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:36 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/timed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <timed/timed-Structs.h>
#import <timed/TMSourceManagerDelegate.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@protocol TMTimeManager, TMTimeManagerTMTimeProvider, TMTimeZoneManager, OS_dispatch_source, TMMonotonicClock;
@class TMTimeSynthesizer, TMBackgroundNtpSource, NSDictionary, NSMutableArray, NSObject, NSMutableDictionary, RadiosPreferences, NSString;

@interface TMDaemonCore : NSObject <TMSourceManagerDelegate, RadiosPreferencesDelegate> {

	id<TMTimeManager> _filteredTimeManager;
	id<TMTimeManager><TMTimeProvider> _systemTimeManager;
	id<TMTimeManager> _referenceTimeManager;
	id<TMTimeZoneManager> _timeZoneManager;
	TMTimeSynthesizer* _timeSynthesizer;
	TMBackgroundNtpSource* _ntpSource;
	BOOL _requiresActiveTimeZone;
	NSDictionary* _lastReferenceTime;
	BOOL _systemTimeSet;
	double _settimeofdayThreshold;
	NSMutableArray* _pendingSetupTimeHandlers;
	double _rtcBBActiveTimeCheck;
	NSObject*<OS_dispatch_source> _driftCorrectionTimer;
	NSMutableDictionary* _timeProviders;
	BOOL testedSystemTime;
	BOOL _airplaneMode;
	BOOL _timeZoneConfirmed;
	BOOL _requiresActiveBBTime;
	int _simulatedMcc;
	NSDictionary* lastSystemTime;
	NSMutableArray* commandHistory;
	RadiosPreferences* _radiosPrefs;
	long long _retrySystemTimeCount;
	CTServerConnectionRef _ctServerConnection;
	id<TMMonotonicClock> _clock;

}

@property (assign,nonatomic) BOOL systemTimeSet;                                                           //@synthesize systemTimeSet=_systemTimeSet - In the implementation block
@property (assign,nonatomic) BOOL airplaneMode;                                                            //@synthesize airplaneMode=_airplaneMode - In the implementation block
@property (assign,nonatomic) BOOL timeZoneConfirmed;                                                       //@synthesize timeZoneConfirmed=_timeZoneConfirmed - In the implementation block
@property (assign,getter=isSystemTimeZoneSet,nonatomic) BOOL systemTimeZoneSet; 
@property (nonatomic,retain) NSDictionary * lastSystemTime; 
@property (nonatomic,retain) NSDictionary * lastReferenceTime;                                             //@synthesize lastReferenceTime=_lastReferenceTime - In the implementation block
@property (assign,nonatomic) BOOL requiresActiveTimeZone;                                                  //@synthesize requiresActiveTimeZone=_requiresActiveTimeZone - In the implementation block
@property (assign,nonatomic) BOOL requiresActiveBBTime;                                                    //@synthesize requiresActiveBBTime=_requiresActiveBBTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * commandHistory; 
@property (nonatomic,retain) RadiosPreferences * radiosPrefs;                                              //@synthesize radiosPrefs=_radiosPrefs - In the implementation block
@property (assign,nonatomic) int simulatedMcc;                                                             //@synthesize simulatedMcc=_simulatedMcc - In the implementation block
@property (assign,getter=isAutomaticTimeEnabled,nonatomic) BOOL automaticTimeEnabled; 
@property (assign,getter=isAutomaticTimeZoneEnabled,nonatomic) BOOL automaticTimeZoneEnabled; 
@property (nonatomic,readonly) id<TMTimeProvider> timeProvider; 
@property (assign,nonatomic) BOOL testedSystemTime; 
@property (assign,nonatomic) long long retrySystemTimeCount;                                               //@synthesize retrySystemTimeCount=_retrySystemTimeCount - In the implementation block
@property (assign,nonatomic) CTServerConnectionRef ctServerConnection;                                     //@synthesize ctServerConnection=_ctServerConnection - In the implementation block
@property (assign,nonatomic) BOOL firstRun; 
@property (nonatomic,retain) id<TMMonotonicClock> clock;                                                   //@synthesize clock=_clock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)executeCommand:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithSystemRules:(id)arg1 referenceRules:(id)arg2 filteredRules:(id)arg3 timeZoneRules:(id)arg4 monotonicClock:(id)arg5 ;
-(void)setSourceAvailable:(id)arg1 ;
-(void)setSourceUnavailable:(id)arg1 ;
-(void)sourceManager:(id)arg1 didComputeResult:(id)arg2 ;
-(void)sourceManager:(id)arg1 shouldFetch:(id)arg2 ;
-(void)setSourceTimeZone:(id)arg1 ;
-(void)resetTimeZone:(id)arg1 ;
-(void)powerOn:(id)arg1 ;
-(BOOL)testedSystemTime;
-(void)testAndApplySystemTime;
-(id)cacheUrl;
-(id)filesystemTimestamp;
-(void)setSimulatedMcc:(int)arg1 ;
-(BOOL)firstRun;
-(void)setTimeZoneConfirmed:(BOOL)arg1 ;
-(void)setFirstRun:(BOOL)arg1 ;
-(void)configureKeepAlive;
-(void)setLastSystemTime:(NSDictionary *)arg1 ;
-(void)addTimeProvider:(id)arg1 forKey:(id)arg2 ;
-(void)setupSynthesizerWithData:(id)arg1 ;
-(void)setCommandHistory:(NSMutableArray *)arg1 ;
-(void)handleInternalMessage:(id)arg1 ;
-(void)handleShutdown:(id)arg1 ;
-(void)updateNTPSchedulingInterval;
-(void)checkActiveTimeSourceRequired;
-(void)setCtServerConnection:(CTServerConnectionRef)arg1 ;
-(CTServerConnectionRef)ctServerConnection;
-(void)setRadiosPrefs:(RadiosPreferences *)arg1 ;
-(RadiosPreferences *)radiosPrefs;
-(BOOL)shouldDisplayTimeZonePopup;
-(void)setSystemTimeZoneSet:(BOOL)arg1 ;
-(id)prefsValueForTimeZone:(id)arg1 ;
-(void)sendSystemTimeChangeNotification;
-(BOOL)setMonotonicClockOffset:(long long)arg1 ;
-(BOOL)shouldSetSystemTime;
-(long long)retrySystemTimeCount;
-(void)setRetrySystemTimeCount:(long long)arg1 ;
-(void)_testAndApplySystemTime;
-(void)setTestedSystemTime:(BOOL)arg1 ;
-(id<TMTimeProvider>)timeProvider;
-(BOOL)setSystemTime:(double)arg1 fromSource:(const char*)arg2 ;
-(BOOL)adjtime:(double)arg1 ;
-(void)setSystemTimeSet:(BOOL)arg1 ;
-(BOOL)setTime:(double)arg1 forMonotonicTime:(double)arg2 ;
-(BOOL)shouldSetSystemTimeZone;
-(BOOL)isSameAsSystemTimeZone:(id)arg1 ;
-(BOOL)isSystemTimeZoneSet;
-(BOOL)setSystemTimeZone:(id)arg1 source:(const char*)arg2 ;
-(void)setRequiresActiveTimeZone:(BOOL)arg1 ;
-(BOOL)timeZoneConfirmed;
-(BOOL)systemTimeSet;
-(NSDictionary *)lastSystemTime;
-(NSDictionary *)lastReferenceTime;
-(NSMutableArray *)commandHistory;
-(BOOL)shouldConvertMachTimeOfCommand:(id)arg1 ;
-(void)_executeCommand:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setAutomaticTimeEnabled:(BOOL)arg1 ;
-(BOOL)isAutomaticTimeEnabled;
-(void)setAutomaticTimeZoneEnabled:(BOOL)arg1 ;
-(BOOL)isAutomaticTimeZoneEnabled;
-(BOOL)isTimeZoneConfirmed:(id)arg1 ;
-(void)confirmTimeZone:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)referenceTime;
-(void)setReferenceTimeUnreliable:(id)arg1 ;
-(id)isLocationTimeZoneActive;
-(id)isBBTimeActive;
-(void)provideBBTime:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)receiveNtpPacket:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)provideNetworkTimeZone:(id)arg1 ;
-(void)airplaneModeChanged:(id)arg1 ;
-(void)setupTime:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setupTimeZone:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)resetToFirstLaunch:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setSimulatedMcc:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)pushBackCommand:(id)arg1 ;
-(void)cacheStateToDisk;
-(void)_setupTimeWithHandler:(/*^block*/id)arg1 ;
-(void)checkActiveTimeZoneSourceRequired;
-(void)setRequiresActiveBBTime:(BOOL)arg1 ;
-(void)runTimeFilter:(id)arg1 ;
-(void)testAndApplyNewSystemTime;
-(void)setLastReferenceTime:(NSDictionary *)arg1 ;
-(id)propagatedTimeDictionaryFromDictionary:(id)arg1 ;
-(BOOL)requiresActiveBBTime;
-(BOOL)fetchTimeFromNetwork:(BOOL)arg1 ;
-(int)simulatedMcc;
-(BOOL)timeDictionary:(id)arg1 isEqualToTimeDictionary:(id)arg2 ;
-(void)sendReferenceTimeChangeNotification;
-(void)testAndApplyNewSystemTimeZone:(id)arg1 ;
-(id)tempPath;
-(BOOL)requiresActiveTimeZone;
-(void)emptyCache;
-(void)dealloc;
-(id<TMMonotonicClock>)clock;
-(void)setClock:(id<TMMonotonicClock>)arg1 ;
-(BOOL)airplaneMode;
-(void)airplaneModeChanged;
-(int)mobileCountryCode;
-(void)setSourceTime:(id)arg1 ;
-(void)setAirplaneMode:(BOOL)arg1 ;
@end

