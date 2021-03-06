/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:54 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MusicSimpleRadioStationInfo : NSObject <NSSecureCoding> {

	BOOL _isBeats1;
	NSString* _name;
	NSString* _radioID;

}

@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * radioID;              //@synthesize radioID=_radioID - In the implementation block
@property (assign,nonatomic) BOOL isBeats1;                 //@synthesize isBeats1=_isBeats1 - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)radioID;
-(BOOL)isBeats1;
-(id)initWithRadioID:(id)arg1 name:(id)arg2 ;
-(void)setRadioID:(NSString *)arg1 ;
-(void)setIsBeats1:(BOOL)arg1 ;
@end

