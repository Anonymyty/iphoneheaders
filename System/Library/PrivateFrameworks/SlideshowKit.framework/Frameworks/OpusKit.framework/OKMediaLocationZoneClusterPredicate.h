/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:54:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMediaClusterPredicate.h>

@interface OKMediaLocationZoneClusterPredicate : OKMediaClusterPredicate {

	double _distance;

}

@property (readonly) double distance;              //@synthesize distance=_distance - In the implementation block
-(void)dealloc;
-(id)title;
-(double)distance;
-(id)evaluateItems:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(float)efficiencyForItems:(id)arg1 ;
-(id)_containsInSet:(id)arg1 withinItems:(id)arg2 distance:(double)arg3 ;
-(id)_titleWithPlacemark:(id)arg1 ;
-(id)initWithDistance:(double)arg1 ;
@end

