/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:36:32 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, ABLEVectorModel;

@interface ABLETimeSeriesModel : NSObject {

	NSArray* _filter;
	double _period;
	ABLEVectorModel* _vectorModel;

}

@property (readonly) NSArray * filter;                           //@synthesize filter=_filter - In the implementation block
@property (readonly) double period;                              //@synthesize period=_period - In the implementation block
@property (readonly) ABLEVectorModel * vectorModel;              //@synthesize vectorModel=_vectorModel - In the implementation block
+(id)modelWithPeriod:(double)arg1 andFilter:(id)arg2 ;
-(id)predictSingle:(id)arg1 ;
-(id)predictAll:(id)arg1 ;
-(id)initWithPeriod:(double)arg1 andFilter:(id)arg2 ;
-(ABLEVectorModel *)vectorModel;
-(double)period;
-(NSArray *)filter;
@end
