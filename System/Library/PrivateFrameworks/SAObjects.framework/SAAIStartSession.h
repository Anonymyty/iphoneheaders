/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SAAIStartSession : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * acousticIdSessionId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)startSessionWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)startSession;
-(id)groupIdentifier;
-(NSString *)acousticIdSessionId;
-(void)setAcousticIdSessionId:(NSString *)arg1 ;
-(id)encodedClassName;
@end
