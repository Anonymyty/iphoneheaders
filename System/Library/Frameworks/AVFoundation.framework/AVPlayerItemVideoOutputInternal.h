/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVPlayerItemOutputPullDelegate, OS_dispatch_queue, OS_dispatch_source;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSObject;

@interface AVPlayerItemVideoOutputInternal : NSObject {

	OpaqueCMTimebaseRef timebase;
	double currentRate;
	OpaqueFigVisualContextRef vc;
	AVWeakReference* playerItemWeakReference;
	OpaqueVTPixelBufferConformerRef pixelBufferConformer;
	id<AVPlayerItemOutputPullDelegate> delegate;
	NSObject*<OS_dispatch_queue> stateQueue;
	NSObject*<OS_dispatch_queue> delegateQueue;
	NSObject*<OS_dispatch_source> delegateWakeupSource;
	double advanceWakeUpInterval;
	BOOL advanceWakeUpIntervalIsValid;
	SCD_Struct_CM5 wakeUpImageTime;
	BOOL suppressesPlayerRendering;
	BOOL shouldTagBuffersWithInfo;

}
@end

