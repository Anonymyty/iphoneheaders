/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PSRegion : NSObject {

	NSString* _regionName;
	NSString* _regionCode;

}

@property (nonatomic,retain) NSString * regionName;              //@synthesize regionName=_regionName - In the implementation block
@property (nonatomic,retain) NSString * regionCode;              //@synthesize regionCode=_regionCode - In the implementation block
+(id)regionWithName:(id)arg1 code:(id)arg2 ;
-(void)setRegionName:(NSString *)arg1 ;
-(NSString *)regionName;
-(NSString *)regionCode;
-(void)setRegionCode:(NSString *)arg1 ;
@end

