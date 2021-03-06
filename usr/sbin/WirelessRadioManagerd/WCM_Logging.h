/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:38 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/sbin/WirelessRadioManagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WCM_Logging : NSObject
+(void)logLevel:(int)arg1 message:(id)arg2 ;
+(void)initiRATSettingsFromPreferences;
+(void)reloadLogSettingsFromPreferences;
+(void)reloadiRATSettingsFromPreferences;
+(BOOL)checkLevelEnabled:(int)arg1 ;
+(void)setLogSettingsToPreferences;
+(int)getNumberOfSavedLogFiles:(int*)arg1 new:(int*)arg2 ;
+(id)getLogFileHandle;
+(void)closeLogFile:(id)arg1 ;
+(void)setiRATSettingsToPreferences:(BOOL)arg1 ;
+(void)setLogToSyslog:(BOOL)arg1 ;
+(BOOL)getLogToSyslog;
+(BOOL)getLogToFile;
+(unsigned)getCurrentLogLevel;
+(void)setCurrentLogLevel:(unsigned)arg1 ;
+(void)enableLogLevel:(int)arg1 ;
+(void)disableLogLevel:(int)arg1 ;
+(void)enableAllCoexLogLevels;
+(void)disableAllCoexLogLevels;
+(void)enableAlliRATLogLevels;
+(void)disableAlliRATLogLevels;
+(void)initSettingsFromPreferences;
+(void)setLogToFile:(BOOL)arg1 ;
+(void)logToFile:(id)arg1 ;
@end

