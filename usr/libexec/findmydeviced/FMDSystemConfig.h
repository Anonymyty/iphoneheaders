/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:09 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/findmydeviced
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <findmydeviced/findmydeviced-Structs.h>
@class NSNumber, NSString, NSData;

@interface FMDSystemConfig : NSObject {

	NSNumber* _ecid;
	NSString* _wifiMacAddress;
	NSString* _btMacAddress;
	NSString* _inFieldCollectionStatus;

}

@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * deviceClassString; 
@property (nonatomic,readonly) long long deviceClass; 
@property (nonatomic,readonly) NSString * deviceUDID; 
@property (nonatomic,readonly) NSString * productType; 
@property (nonatomic,readonly) NSString * productName; 
@property (nonatomic,readonly) NSString * productVersion; 
@property (nonatomic,readonly) NSString * buildVersion; 
@property (nonatomic,readonly) NSString * platform; 
@property (nonatomic,readonly) BOOL isLocationServicesEnabled; 
@property (nonatomic,readonly) SCD_Struct_FM3 batteryStats; 
@property (nonatomic,readonly) BOOL isBuddyDone; 
@property (nonatomic,readonly) NSString * recoveryBuildVersion; 
@property (nonatomic,readonly) NSString * recoveryProductVersion; 
@property (nonatomic,readonly) BOOL isRunningInRecovery; 
@property (nonatomic,readonly) BOOL isRunningInLocked; 
@property (nonatomic,readonly) NSString * recoveryBootState; 
@property (nonatomic,readonly) NSString * deviceColor; 
@property (nonatomic,readonly) NSString * deviceEnclosureColor; 
@property (nonatomic,readonly) BOOL hasSecureElement; 
@property (nonatomic,readonly) BOOL hasNFC; 
@property (nonatomic,readonly) NSString * internationalMobileEquipmentIdentity; 
@property (nonatomic,readonly) NSString * mobileEquipmentIdentifier; 
@property (nonatomic,readonly) NSString * serialNumber; 
@property (nonatomic,readonly) NSNumber * ecid;                                              //@synthesize ecid=_ecid - In the implementation block
@property (nonatomic,readonly) NSString * wifiMacAddress;                                    //@synthesize wifiMacAddress=_wifiMacAddress - In the implementation block
@property (nonatomic,readonly) NSString * btMacAddress;                                      //@synthesize btMacAddress=_btMacAddress - In the implementation block
@property (nonatomic,readonly) BOOL isPasscodeSet; 
@property (nonatomic,readonly) BOOL isPasscodeChangeRestricted; 
@property (nonatomic,readonly) BOOL isLocked; 
@property (nonatomic,readonly) BOOL isLocking; 
@property (nonatomic,readonly) NSString * currentPasscodeConstraintStr; 
@property (nonatomic,readonly) BOOL isRegionMonitoringAvailable; 
@property (nonatomic,readonly) NSString * timezone; 
@property (nonatomic,readonly) NSString * locale; 
@property (nonatomic,readonly) BOOL hasCellularCapability; 
@property (nonatomic,readonly) BOOL allowsActivationLock; 
@property (nonatomic,readonly) NSData * escrowHash; 
@property (nonatomic,readonly) NSString * deviceModel; 
@property (nonatomic,readonly) NSString * deviceRegion; 
@property (nonatomic,readonly) BOOL isLowPowerModeEnabled; 
@property (nonatomic,readonly) NSString * inFieldCollectionStatus;                           //@synthesize inFieldCollectionStatus=_inFieldCollectionStatus - In the implementation block
+(id)sharedInstance;
-(NSString *)currentPasscodeConstraintStr;
-(BOOL)isRunningInRecovery;
-(BOOL)isBuddyDone;
-(void)initializeSystemConfig;
-(NSString *)deviceClassString;
-(NSString *)recoveryBuildVersion;
-(NSString *)recoveryProductVersion;
-(BOOL)isRunningInLocked;
-(NSString *)recoveryBootState;
-(BOOL)hasSecureElement;
-(BOOL)hasNFC;
-(BOOL)isInAirplaneMode;
-(BOOL)isPasscodeChangeRestricted;
-(BOOL)isRegionMonitoringAvailable;
-(BOOL)allowsActivationLock;
-(NSData *)escrowHash;
-(SCD_Struct_FM3)batteryStats;
-(NSString *)inFieldCollectionStatus;
-(BOOL)isLocking;
-(BOOL)isLowPowerModeEnabled;
-(BOOL)isLocked;
-(NSString *)buildVersion;
-(NSString *)locale;
-(NSString *)timezone;
-(NSString *)deviceRegion;
-(NSString *)productName;
-(NSString *)deviceColor;
-(NSString *)wifiMacAddress;
-(NSString *)deviceEnclosureColor;
-(BOOL)hasCellularCapability;
-(NSString *)mobileEquipmentIdentifier;
-(NSString *)internationalMobileEquipmentIdentity;
-(NSString *)platform;
-(long long)deviceClass;
-(BOOL)isLocationServicesEnabled;
-(NSString *)productVersion;
-(NSString *)serialNumber;
-(id)initSingleton;
-(NSString *)deviceUDID;
-(NSNumber *)ecid;
-(NSString *)btMacAddress;
-(BOOL)isPasscodeSet;
-(NSString *)productType;
-(NSString *)deviceName;
-(NSString *)deviceModel;
@end

