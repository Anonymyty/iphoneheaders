/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:23 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAUIAppPunchOut, NSString, SAAnswerDirectAnswer, NSArray;

@interface SAAnswerDomainObject : SADomainObject

@property (nonatomic,retain) SAUIAppPunchOut * appPunchOut; 
@property (nonatomic,copy) NSString * category; 
@property (nonatomic,retain) SAAnswerDirectAnswer * directAnswer; 
@property (nonatomic,copy) NSArray * linkedAnswerGroups; 
@property (nonatomic,copy) NSArray * structuredAnswers; 
+(id)domainObject;
+(id)domainObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(id)groupIdentifier;
-(SAUIAppPunchOut *)appPunchOut;
-(void)setAppPunchOut:(SAUIAppPunchOut *)arg1 ;
-(SAAnswerDirectAnswer *)directAnswer;
-(void)setDirectAnswer:(SAAnswerDirectAnswer *)arg1 ;
-(NSArray *)linkedAnswerGroups;
-(void)setLinkedAnswerGroups:(NSArray *)arg1 ;
-(NSArray *)structuredAnswers;
-(void)setStructuredAnswers:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

