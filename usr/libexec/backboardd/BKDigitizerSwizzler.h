/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:08 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <backboardd/backboardd-Structs.h>
@class NSObject;

@interface BKDigitizerSwizzler : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(id)_queue_infoForAccessibilityDigitizer:(id)arg1 event:(IOHIDEventRef)arg2 ;
-(id)infoForDigitizer:(id)arg1 event:(IOHIDEventRef)arg2 ;
-(id)init;
@end
