/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:31:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIMotionEffectEventProvider.h>

@class CMMotionManager, NSOperationQueue;

@interface _UIMotionEffectCoreMotionEventProvider : _UIMotionEffectEventProvider {

	CMMotionManager* _motionManager;
	NSOperationQueue* _motionEventQueue;

}
-(void)dealloc;
-(id)init;
-(BOOL)shouldLogEvents;
-(double)fastUpdateIntervalForLogs;
-(double)slowUpdateIntervalForLogs;
-(void)setSlowUpdatesEnabled:(BOOL)arg1 ;
-(void)startGeneratingEvents;
-(void)stopGeneratingEvents;
-(id)currentEvent;
@end

