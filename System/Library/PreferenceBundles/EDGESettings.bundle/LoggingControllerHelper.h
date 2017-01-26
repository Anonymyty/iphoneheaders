/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:34:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/EDGESettings.bundle/EDGESettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EDGESettings/EDGESettings-Structs.h>
@interface LoggingControllerHelper : NSObject {

	BOOL _canCollectWifiLogs;
	BOOL _canCollectThumperLogs;

}
+(void)stopTcpDump;
+(void)startTcpDump;
+(void)enableVideoConfLogging:(BOOL)arg1 ;
+(void)enableWirelessRadioManagerLogging:(BOOL)arg1 ;
+(void)enableWifiLogging:(BOOL)arg1 ;
+(void)enablePhoneLogging:(BOOL)arg1 ;
+(void)enableNetworkExtensionsLog:(BOOL)arg1 ;
+(void)writePreference:(BOOL)arg1 forKey:(CFStringRef)arg2 ;
+(void)enableiCloudLogging:(BOOL)arg1 ;
+(void)enableLocationLogging:(BOOL)arg1 ;
+(BOOL)readPreferenceForKey:(CFStringRef)arg1 ;
-(id)init;
-(BOOL)configureRecommendedLogging:(id)arg1 ;
-(void)collectLogs;
-(void)setCapabilityFlags;
-(BOOL)collectingWifiLogs;
-(BOOL)collectingThumperLogs;
@end
