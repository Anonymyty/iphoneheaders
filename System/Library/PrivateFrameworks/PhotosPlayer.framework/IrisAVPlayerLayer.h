/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <AVFoundation/AVPlayerLayer.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface IrisAVPlayerLayer : AVPlayerLayer {

	NSObject*<OS_dispatch_queue> _isolationQueue;

}
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(void)_forceLayout;
-(void)setPlayer:(id)arg1 ;
-(void)setVideoGravity:(id)arg1 ;
-(void)__reallySetPlayer:(id)arg1 ;
@end
