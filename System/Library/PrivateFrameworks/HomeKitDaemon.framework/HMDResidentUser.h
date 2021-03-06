/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:28 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDUser.h>

@class NSString;

@interface HMDResidentUser : HMDUser {

	NSString* _displayName;
	BOOL _primaryResidentDevice;
	NSString* _deviceIdentifier;
	unsigned long long _configurationState;

}

@property (nonatomic,copy,readonly) NSString * deviceIdentifier;                                       //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long configurationState;                                    //@synthesize configurationState=_configurationState - In the implementation block
@property (getter=isPrimaryResidentDevice,nonatomic,readonly) BOOL primaryResidentDevice;              //@synthesize primaryResidentDevice=_primaryResidentDevice - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)displayName;
-(unsigned long long)configurationState;
-(void)setDisplayName:(id)arg1 ;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)deviceIdentifier;
-(BOOL)mergeFromUser:(id)arg1 ;
-(void)setConfigurationState:(unsigned long long)arg1 ;
-(id)initWithUserID:(id)arg1 pairingUsername:(id)arg2 publicKey:(id)arg3 displayName:(id)arg4 deviceIdentifier:(id)arg5 configurationState:(unsigned long long)arg6 ;
-(id)encodingRemoteDisplayName;
-(BOOL)isPrimaryResidentDevice;
-(BOOL)configureWithIDSDevice:(id)arg1 ;
@end

