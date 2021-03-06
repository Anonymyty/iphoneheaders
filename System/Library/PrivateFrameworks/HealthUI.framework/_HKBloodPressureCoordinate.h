/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesBlockCoordinate.h>

@class HKMinMaxCoordinate, NSString;

@interface _HKBloodPressureCoordinate : NSObject <HKGraphSeriesBlockCoordinate> {

	id _userInfo;
	HKMinMaxCoordinate* _systolicCoordinate;
	HKMinMaxCoordinate* _diastolicCoordinate;

}

@property (nonatomic,readonly) HKMinMaxCoordinate * systolicCoordinate;               //@synthesize systolicCoordinate=_systolicCoordinate - In the implementation block
@property (nonatomic,readonly) HKMinMaxCoordinate * diastolicCoordinate;              //@synthesize diastolicCoordinate=_diastolicCoordinate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double startXValue; 
@property (nonatomic,readonly) double endXValue; 
@property (nonatomic,readonly) id userInfo; 
-(NSString *)description;
-(id)userInfo;
-(double)startXValue;
-(double)endXValue;
-(id)copyWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(HKMinMaxCoordinate *)systolicCoordinate;
-(HKMinMaxCoordinate *)diastolicCoordinate;
-(id)initWithSystolicCoordinate:(id)arg1 diastolicCoordinate:(id)arg2 userInfo:(id)arg3 ;
@end

