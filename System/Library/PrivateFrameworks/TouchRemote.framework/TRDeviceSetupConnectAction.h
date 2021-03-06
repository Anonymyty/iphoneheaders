/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRDeviceSetupAction.h>

@class NSString;

@interface TRDeviceSetupConnectAction : TRDeviceSetupAction

@property (nonatomic,copy,readonly) NSString * deviceName; 
@property (nonatomic,copy,readonly) NSString * networkSSID; 
@property (nonatomic,copy,readonly) NSString * networkPassword; 
-(id)init;
-(NSString *)deviceName;
-(NSString *)networkSSID;
-(NSString *)networkPassword;
-(id)initWithDeviceName:(id)arg1 networkSSID:(id)arg2 networkPassword:(id)arg3 ;
@end

