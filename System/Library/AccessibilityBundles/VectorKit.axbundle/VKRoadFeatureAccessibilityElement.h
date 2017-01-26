/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKMultiSectionFeatureAccessibilityElement.h>

@class NSMutableArray, NSArray, NSString;

@interface VKRoadFeatureAccessibilityElement : VKMultiSectionFeatureAccessibilityElement {

	NSMutableArray* _expandedPaths;
	NSMutableArray* _gutterPaths;
	NSMutableArray* _originalPaths;
	BOOL _lastHitTestNearBorder;
	NSArray* _allPoints;
	int _travelDirection;
	NSString* _roadDirection;
	NSArray* _intersectingRoads;

}

@property (nonatomic,retain) NSArray * intersectingRoads;              //@synthesize intersectingRoads=_intersectingRoads - In the implementation block
@property (nonatomic,readonly) NSArray * originalPaths;                //@synthesize originalPaths=_originalPaths - In the implementation block
@property (assign,nonatomic) int travelDirection;                      //@synthesize travelDirection=_travelDirection - In the implementation block
@property (nonatomic,retain) NSString * roadDirection;                 //@synthesize roadDirection=_roadDirection - In the implementation block
-(id)accessibilityPaths;
-(void)setRoadDirection:(NSString *)arg1 ;
-(int)_accessibilityMapRoadType;
-(id)_roadDirectionDescription;
-(id)_nearestPOIsForPoint:(CGPoint)arg1 ;
-(id)_nearestIntersectionForPoint:(CGPoint)arg1 ;
-(void)_combineRoadPaths:(id)arg1 ;
-(id)trueLabel;
-(NSString *)roadDirection;
-(id)_axRoadSuffix;
-(id)_roadLength;
-(void)setIntersectingRoads:(NSArray *)arg1 ;
-(id)_axRoadPrefix;
-(NSArray *)originalPaths;
-(NSArray *)intersectingRoads;
-(id)detailedFeatureElementInfoAtPoint:(CGPoint)arg1 ;
-(void)dealloc;
-(id)accessibilityLabel;
-(void)_updatePath;
-(CGRect)accessibilityFrame;
-(int)travelDirection;
-(void)setTravelDirection:(int)arg1 ;
-(float)_accessibilityDistance:(CGPoint)arg1 forAngle:(float)arg2 toRoad:(id)arg3 ;
-(id)_accessibilityUpcomingRoadsForPoint:(CGPoint)arg1 forAngle:(float)arg2 ;
-(float)_accessibilityDistanceFromEndOfRoad:(CGPoint)arg1 forAngle:(float)arg2 ;
-(BOOL)_accessibilityRoadContainsTrackingPoint:(CGPoint)arg1 ;
-(int)_accessibilityMapFeatureType;
-(BOOL)_accessibilityLastHitTestNearBorder;
-(BOOL)pointInside:(CGPoint)arg1 ;
@end
