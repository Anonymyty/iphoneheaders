/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAAISearchCompleted : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * results; 
+(id)searchCompleted;
+(id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(id)encodedClassName;
@end

