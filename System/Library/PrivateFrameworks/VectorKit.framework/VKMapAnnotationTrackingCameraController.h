/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:04 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKAnnotationTrackingCameraController.h>

@interface VKMapAnnotationTrackingCameraController : VKAnnotationTrackingCameraController
-(void)setEdgeInsets:(VKEdgeInsets)arg1 ;
-(void)_rotateToHeadingAnimated:(BOOL)arg1 duration:(double)arg2 ;
-(void)_goToAnnotationAnimated:(BOOL)arg1 duration:(double)arg2 isInitial:(BOOL)arg3 ;
-(double)_zoomLevelForCameraPosition:(VKPoint)arg1 ;
-(double)_minTrackingCameraDistance;
@end
