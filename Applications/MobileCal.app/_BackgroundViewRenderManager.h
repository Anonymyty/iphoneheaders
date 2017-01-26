/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:28:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, NSMutableSet;

@interface _BackgroundViewRenderManager : NSObject {

	NSOperationQueue* _queue;
	NSMutableSet* _viewsInQueue;

}
+(id)sharedManager;
-(void)addViewToQueue:(id)arg1 ;
-(void)removeViewFromQueue:(id)arg1 ;
-(void)cancelAllRendering;
-(id)init;
@end
