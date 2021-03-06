/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSObservationSource.h>
#import <libobjc.A.dylib/NSObserver.h>

@class UIView, _UITouchesObservingGestureRecognizer, NSObservation, NSString;

@interface _UITouchForceObservable : NSObservationSource <NSObserver> {

	UIView* _view;
	long long _observerCount;
	_UITouchesObservingGestureRecognizer* _gestureRecognizer;
	NSObservation* _touchesObservation;
	BOOL _haveSeenAnyTouches;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)addObserver:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)receiveObservedValue:(id)arg1 ;
-(double)_unclampedTouchForceForTouches:(id)arg1 ;
-(double)_maximumPossibleForceForTouches:(id)arg1 ;
-(double)_timestampForTouches:(id)arg1 ;
-(BOOL)_shouldFilterDueToSystemGesturesForTouches:(id)arg1 ;
-(void)_willBeginHavingAnyObservers;
-(void)removeObservation:(id)arg1 ;
-(void)_didEndHavingAnyObservers;
@end

