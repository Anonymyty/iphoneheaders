/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface MSPBTimerContext : NSObject {

	BOOL _isValid;
	NSDate* _date;

}

@property (assign,nonatomic) BOOL isValid;               //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
+(id)contextWithDate:(id)arg1 ;
-(id)init;
-(BOOL)isValid;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
@end
