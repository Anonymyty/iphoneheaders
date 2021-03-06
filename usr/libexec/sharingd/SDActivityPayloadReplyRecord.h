/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:29 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSString;

@interface SDActivityPayloadReplyRecord : NSObject {

	NSUUID* _messageIdentifier;
	NSUUID* _requestIdentifier;
	NSUUID* _activityIdentifier;
	NSString* _deviceIdentifier;

}

@property (nonatomic,copy) NSUUID * messageIdentifier;               //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (nonatomic,copy) NSUUID * requestIdentifier;               //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy) NSUUID * activityIdentifier;              //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
@property (nonatomic,copy) NSString * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
-(id)description;
-(NSUUID *)requestIdentifier;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)activityIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)deviceIdentifier;
-(NSUUID *)messageIdentifier;
-(void)setMessageIdentifier:(NSUUID *)arg1 ;
-(void)setActivityIdentifier:(NSUUID *)arg1 ;
@end

