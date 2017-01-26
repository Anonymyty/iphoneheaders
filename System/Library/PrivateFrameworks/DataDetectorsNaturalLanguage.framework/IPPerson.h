/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:20 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IPPerson : NSObject {

	NSString* _fullName;
	NSString* _email;
	NSString* _ABUUID;

}

@property (retain) NSString * fullName;                            //@synthesize fullName=_fullName - In the implementation block
@property (retain) NSString * email;                               //@synthesize email=_email - In the implementation block
@property (retain) NSString * ABUUID;                              //@synthesize ABUUID=_ABUUID - In the implementation block
@property (copy,readonly) NSString * displayableName; 
-(id)init;
-(id)initWithString:(id)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)displayableName;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)email;
-(NSString *)ABUUID;
-(void)setABUUID:(NSString *)arg1 ;
-(id)initWithEmail:(id)arg1 fullName:(id)arg2 ;
-(NSString *)fullName;
@end
