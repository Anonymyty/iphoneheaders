/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKPuckAnimatorLocationProjector;

@interface VKCameraContext : NSObject {

	CGSize _pointOfReference;
	double _heading;
	CGSize _pointOfFocus;
	int _style;
	int _focusStyle;
	CGSize _courseTargetLocation;
	long long _courseSource;
	double _lastCameraFocusCourse;
	BOOL _animated;
	BOOL _applied;
	vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D> >* _pois;
	VKPuckAnimatorLocationProjector* _locationProjector;
	double _verticalGroundspanScale;
	BOOL _allowVerticalPanning;

}

@property (nonatomic,readonly) CGSize pointOfReference;                     //@synthesize pointOfReference=_pointOfReference - In the implementation block
@property (nonatomic,readonly) double heading;                              //@synthesize heading=_heading - In the implementation block
@property (nonatomic,readonly) CGSize pointOfFocus;                         //@synthesize pointOfFocus=_pointOfFocus - In the implementation block
@property (assign,nonatomic) int style;                                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int focusStyle;                                //@synthesize focusStyle=_focusStyle - In the implementation block
@property (assign,nonatomic) CGSize courseTargetLocation;                   //@synthesize courseTargetLocation=_courseTargetLocation - In the implementation block
@property (assign,nonatomic) long long courseSource;                        //@synthesize courseSource=_courseSource - In the implementation block
@property (nonatomic,readonly) BOOL animated;                               //@synthesize animated=_animated - In the implementation block
@property (assign,nonatomic) BOOL applied;                                  //@synthesize applied=_applied - In the implementation block
@property (nonatomic,readonly) double verticalGroundspanScale;              //@synthesize verticalGroundspanScale=_verticalGroundspanScale - In the implementation block
@property (nonatomic,readonly) BOOL allowVerticalPanning;                   //@synthesize allowVerticalPanning=_allowVerticalPanning - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(BOOL)animated;
-(int)focusStyle;
-(void)setFocusStyle:(int)arg1 ;
-(double)heading;
-(BOOL)applied;
-(CGSize)pointOfReference;
-(void)enumeratePointsOfInterestUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)allowVerticalPanning;
-(double)verticalGroundspanScale;
-(CGSize)pointOfFocus;
-(void)setApplied:(BOOL)arg1 ;
-(void)_updateForLocation:(id)arg1 routeMatch:(id)arg2 isRouteMatch:(BOOL)arg3 speedMultiplier:(double)arg4 onRoute:(BOOL)arg5 animated:(BOOL)arg6 defaultCourse:(double)arg7 ;
-(void)updateForLocation:(id)arg1 routeMatch:(id)arg2 isRouteMatch:(BOOL)arg3 speedMultiplier:(double)arg4 onRoute:(BOOL)arg5 animated:(BOOL)arg6 ;
-(CGSize)courseTargetLocation;
-(void)setCourseTargetLocation:(CGSize)arg1 ;
-(long long)courseSource;
-(void)_setPointOfReference:(CGSize)arg1 heading:(double)arg2 routeMatch:(id)arg3 onRoute:(BOOL)arg4 ;
-(void)clearPointsOfInterest;
-(void)setCourseSource:(long long)arg1 ;
-(void)addPointOfInterest:(CGSize)arg1 ;
@end

