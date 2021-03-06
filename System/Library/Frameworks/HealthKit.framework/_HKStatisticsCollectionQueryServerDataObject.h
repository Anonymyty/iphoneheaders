/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:28:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKQueryServerDataObject.h>

@class NSDate, NSDateComponents;

@interface _HKStatisticsCollectionQueryServerDataObject : _HKQueryServerDataObject {

	NSDate* _anchorDate;
	unsigned long long _options;
	NSDateComponents* _intervalComponents;
	unsigned long long _mergeStrategy;

}

@property (nonatomic,retain) NSDate * anchorDate;                                //@synthesize anchorDate=_anchorDate - In the implementation block
@property (assign,nonatomic) unsigned long long options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSDateComponents * intervalComponents;              //@synthesize intervalComponents=_intervalComponents - In the implementation block
@property (assign,nonatomic) unsigned long long mergeStrategy;                   //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(void)setIntervalComponents:(NSDateComponents *)arg1 ;
-(void)setAnchorDate:(NSDate *)arg1 ;
-(unsigned long long)mergeStrategy;
-(void)setMergeStrategy:(unsigned long long)arg1 ;
-(NSDateComponents *)intervalComponents;
-(NSDate *)anchorDate;
@end

