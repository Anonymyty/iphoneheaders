/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:51 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSKAVPlayerController.h>

@class NSArray;

@interface TSKAVQueuePlayerController : TSKAVPlayerController {

	NSArray* mAssets;

}
-(void)playerItemDidPlayToEndTimeAtRate:(float)arg1 ;
-(id)initWithQueuePlayer:(id)arg1 delegate:(id)arg2 assets:(id)arg3 initialAssetIndex:(unsigned long long)arg4 ;
-(void)p_enqueueAssetsFromIndex:(unsigned long long)arg1 ;
-(id)initWithQueuePlayer:(id)arg1 delegate:(id)arg2 assets:(id)arg3 ;
-(void)skipToAssetAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
@end

