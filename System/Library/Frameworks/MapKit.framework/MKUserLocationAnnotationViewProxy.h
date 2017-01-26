/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/VKPuckAnimatorTarget.h>
#import <libobjc.A.dylib/VKTrackableAnnotationPresentation.h>
#import <libobjc.A.dylib/VKRouteMatchedAnnotationPresentation.h>

@class GEORouteMatch, MKAnnotationView, NSHashTable, NSString;

@interface MKUserLocationAnnotationViewProxy : NSObject <VKPuckAnimatorTarget, VKTrackableAnnotationPresentation, VKRouteMatchedAnnotationPresentation> {

	MKAnnotationView* _annotationView;
	NSHashTable* _presentationCoordinateObservers;

}

@property (assign,nonatomic,__weak) MKAnnotationView * annotationView;              //@synthesize annotationView=_annotationView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double presentationCourse; 
@property (assign,nonatomic) SCD_Struct_MK7 presentationCoordinate; 
@property (assign,getter=isTracking,nonatomic) BOOL tracking; 
@property (nonatomic,retain) GEORouteMatch * routeMatch; 
-(BOOL)isTracking;
-(void)setTracking:(BOOL)arg1 ;
-(GEORouteMatch *)routeMatch;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
-(MKAnnotationView *)annotationView;
-(void)setAnnotationView:(MKAnnotationView *)arg1 ;
-(double)presentationCourse;
-(void)setPresentationCourse:(double)arg1 ;
-(void)setPresentationCoordinate:(SCD_Struct_MK7)arg1 ;
-(void)setAnimatingToCoordinate:(BOOL)arg1 ;
-(SCD_Struct_MK7)presentationCoordinate;
-(void)addPresentationCoordinateChangedObserver:(id)arg1 ;
-(void)removePresentationCoordinateChangedObserver:(id)arg1 ;
@end
