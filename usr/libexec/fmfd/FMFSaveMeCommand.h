/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:10 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/fmfd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <fmfd/FMFBaseCmd.h>

@class NSString;

@interface FMFSaveMeCommand : FMFBaseCmd {

	NSString* _deviceId;

}

@property (nonatomic,copy) NSString * deviceId;              //@synthesize deviceId=_deviceId - In the implementation block
-(id)pathSuffix;
-(id)initWithDeviceId:(id)arg1 ;
-(id)jsonBodyDictionary;
-(void)setDeviceId:(NSString *)arg1 ;
-(NSString *)deviceId;
@end
