/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DuetExpertCenter/Experts/DeeplinkPrediction.bundle/DeeplinkPrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface DPEInteraction : NSObject {

	NSDate* _date;
	double _subScore;

}

@property (nonatomic,readonly) NSDate * date;              //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) double subScore;              //@synthesize subScore=_subScore - In the implementation block
-(double)subScore;
-(void)setSubScore:(double)arg1 ;
-(id)initWithDate:(id)arg1 subScore:(double)arg2 ;
-(NSDate *)date;
@end

