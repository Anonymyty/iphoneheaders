/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SAClientBoundCommand.h>

@class NSString, NSArray;

@interface SACommandFailed : SABaseClientBoundCommand <SAServerBoundCommand, SAClientBoundCommand>

@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * reason; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
+(id)commandFailed;
+(id)commandFailedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)commandFailedWithErrorCode:(long long)arg1 ;
+(id)commandFailedWithReason:(id)arg1 ;
-(NSString *)reason;
-(id)groupIdentifier;
-(void)setErrorCode:(long long)arg1 ;
-(long long)errorCode;
-(BOOL)requiresResponse;
-(id)initWithErrorCode:(long long)arg1 ;
-(id)initWithReason:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)encodedClassName;
@end
