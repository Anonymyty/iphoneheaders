/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASAbortSpeechRequest : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * reason; 
+(id)abortSpeechRequest;
+(id)abortSpeechRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)reason;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(void)setReason:(NSString *)arg1 ;
-(id)encodedClassName;
@end
