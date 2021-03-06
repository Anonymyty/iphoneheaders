/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:45:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface AVAudioDevice : NSObject {

	NSString* _deviceName;
	NSNumber* _deviceID;
	NSString* _UID;
	BOOL _inputAvailable;
	BOOL _outputAvailable;
	BOOL _preferredDevice;
	BOOL _isLineIn;

}

@property (nonatomic,readonly) NSString * deviceName;                                      //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSNumber * deviceID;                                        //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) NSString * UID;                                             //@synthesize UID=_UID - In the implementation block
@property (nonatomic,readonly) BOOL inputAvailable;                                        //@synthesize inputAvailable=_inputAvailable - In the implementation block
@property (nonatomic,readonly) BOOL outputAvailable;                                       //@synthesize outputAvailable=_outputAvailable - In the implementation block
@property (getter=isPreferredDevice,nonatomic,readonly) BOOL preferredDevice;              //@synthesize preferredDevice=_preferredDevice - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)createUID;
-(BOOL)isSomethingConnectedToJack;
-(id)initWithDeviceID:(id)arg1 ;
-(void)createNameForScope:(unsigned)arg1 ;
-(BOOL)isValidDevice;
-(BOOL)isValidInputDevice;
-(BOOL)isStreamAvailableForScope:(unsigned)arg1 ;
-(BOOL)inputAvailable;
-(BOOL)outputAvailable;
-(BOOL)isPreferredDevice;
-(NSString *)UID;
-(void)createName;
-(NSString *)deviceName;
-(NSNumber *)deviceID;
@end

