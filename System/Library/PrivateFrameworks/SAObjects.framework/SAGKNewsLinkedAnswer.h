/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAGKLinkedAnswer.h>

@class NSDate, NSString;

@interface SAGKNewsLinkedAnswer : SAGKLinkedAnswer

@property (nonatomic,copy) NSDate * publicationDate; 
@property (nonatomic,copy) NSString * source; 
+(id)newsLinkedAnswer;
+(id)newsLinkedAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(id)groupIdentifier;
-(void)setPublicationDate:(NSDate *)arg1 ;
-(NSDate *)publicationDate;
-(id)encodedClassName;
@end

