/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:24:55 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <ZoomWindow/ZWEventProcessor.h>

@class NSMutableArray, ZOTFullscreenEventHandler;

@interface ZWiOSEventProcessor : ZWEventProcessor {

	CGPoint _last3FingerTouchLocation;
	BOOL _userIsTouchingScreen;
	NSMutableArray* _fullScreenEventQueue;
	ZOTFullscreenEventHandler* _fullscreenEventHandler;
	BOOL _sleepTimerDisabled;
	BOOL _applyZoomToEventDispatch;
	BOOL _firstTouchWentIntoLensContent;
	BOOL _firstTouchWentIntoSlug;

}
-(BOOL)_handleTouchEvent:(id)arg1 ;
-(BOOL)_handleWheelEvent:(id)arg1 ;
-(void)dispatchEntireEventQueue;
-(void)dispatchEventToSystem:(id)arg1 ;
-(void)disableSleepTimer:(BOOL)arg1 ;
-(void)_dispatchZoomRemapEvent:(id)arg1 ;
-(void)resetEventQueue;
-(CGPoint)_convertZoomOffset:(CGPoint)arg1 toScreenCoordinatesFromInterfaceOrientation:(long long)arg2 ;
-(void)_dispatchZoomRemapEvent:(id)arg1 lensFrame:(CGRect)arg2 offset:(CGPoint)arg3 zoomFactor:(double)arg4 applyZoom:(BOOL)arg5 menuScreenRect:(CGRect)arg6 ;
-(CGPoint)_convertZoomPointToSystemPoint:(CGPoint)arg1 lensFrame:(CGRect)arg2 offset:(CGPoint)arg3 zoomFactor:(double)arg4 ;
-(id)fullscreenEventHandler;
-(void)dealloc;
-(id)initWithHIDTapIdentifier:(id)arg1 HIDEventTapPriority:(int)arg2 systemEventTapIdentifier:(id)arg3 systemEventTapPriority:(int)arg4 ;
-(BOOL)_handleEvent:(id)arg1 ;
@end

