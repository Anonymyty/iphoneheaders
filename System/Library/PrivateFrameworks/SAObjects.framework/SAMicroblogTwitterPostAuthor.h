/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL, NSNumber;

@interface SAMicroblogTwitterPostAuthor : SADomainObject

@property (assign,nonatomic) long long followersCount; 
@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,copy) NSURL * profileImageUrl; 
@property (nonatomic,copy) NSString * screenName; 
@property (nonatomic,copy) NSNumber * userId; 
@property (assign,nonatomic) BOOL verified; 
+(id)twitterPostAuthor;
+(id)twitterPostAuthorWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(long long)followersCount;
-(void)setFollowersCount:(long long)arg1 ;
-(NSURL *)profileImageUrl;
-(void)setProfileImageUrl:(NSURL *)arg1 ;
-(NSString *)screenName;
-(void)setScreenName:(NSString *)arg1 ;
-(BOOL)verified;
-(void)setVerified:(BOOL)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(void)setUserId:(NSNumber *)arg1 ;
-(NSNumber *)userId;
-(id)encodedClassName;
-(NSString *)fullName;
@end

