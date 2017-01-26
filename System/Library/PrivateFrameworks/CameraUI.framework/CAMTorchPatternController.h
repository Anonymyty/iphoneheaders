/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CUCaptureController, CAMTorchPattern, CADisplayLink;

@interface CAMTorchPatternController : NSObject {

	BOOL __performing;
	double _stepInterval;
	CUCaptureController* __captureController;
	CAMTorchPattern* __currentPattern;
	double __startTime;
	CADisplayLink* __displayLink;

}

@property (assign,nonatomic) double stepInterval;                                                       //@synthesize stepInterval=_stepInterval - In the implementation block
@property (nonatomic,readonly) CUCaptureController * _captureController;                                //@synthesize _captureController=__captureController - In the implementation block
@property (assign,setter=_setPerforming:,getter=_isPerforming,nonatomic) BOOL _performing;              //@synthesize _performing=__performing - In the implementation block
@property (nonatomic,readonly) CAMTorchPattern * _currentPattern;                                       //@synthesize _currentPattern=__currentPattern - In the implementation block
@property (nonatomic,readonly) double _startTime;                                                       //@synthesize _startTime=__startTime - In the implementation block
@property (nonatomic,readonly) CADisplayLink * _displayLink;                                            //@synthesize _displayLink=__displayLink - In the implementation block
-(double)_startTime;
-(CADisplayLink *)_displayLink;
-(void)displayLinkFired:(id)arg1 ;
-(id)initWithCaptureController:(id)arg1 ;
-(CUCaptureController *)_captureController;
-(void)doubleBlink;
-(void)blink;
-(void)stopPerformingPattern;
-(BOOL)_isPerforming;
-(void)_setPerforming:(BOOL)arg1 ;
-(void)_resetTorchLevel;
-(void)_applyTorchLevel:(float)arg1 ;
-(void)startPerformingPattern:(id)arg1 ;
-(double)stepInterval;
-(void)setStepInterval:(double)arg1 ;
-(CAMTorchPattern *)_currentPattern;
@end
