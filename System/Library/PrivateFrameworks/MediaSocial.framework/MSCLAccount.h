/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface MSCLAccount : NSObject <NSCopying> {

	NSMutableDictionary* _accountProperties;

}

@property (nonatomic,copy) NSString * authenticationSecret; 
@property (nonatomic,copy) NSString * authenticationToken; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,copy) NSString * preferredPageIdentifier; 
@property (nonatomic,copy) NSString * serviceIdentifier; 
@property (nonatomic,copy) NSString * userName; 
-(NSString *)userName;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(id)initWithACAccount:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)removeFromKeychain;
-(void)setAuthenticationToken:(NSString *)arg1 ;
-(NSString *)authenticationToken;
-(void)updateWithACAccount:(id)arg1 ;
-(id)_keychainPassword;
-(void)setAuthenticationSecret:(NSString *)arg1 ;
-(BOOL)saveToKeychain;
-(void)updateWithMSCLAccount:(id)arg1 ;
-(NSString *)authenticationSecret;
-(NSString *)preferredPageIdentifier;
-(void)setPreferredPageIdentifier:(NSString *)arg1 ;
-(NSString *)serviceIdentifier;
-(NSString *)fullName;
@end

