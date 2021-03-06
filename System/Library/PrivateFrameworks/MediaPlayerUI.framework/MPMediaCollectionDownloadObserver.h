/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUMediaDownloadObserver.h>

@class NSMutableArray;

@interface MPMediaCollectionDownloadObserver : MPUMediaDownloadObserver {

	NSMutableArray* _downloadObservers;
	BOOL _callingProgressHandler;

}
-(id)initWithCollection:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isPurchasing;
-(double)downloadProgress;
-(unsigned long long)downloadsCount;
-(BOOL)isCurrentlyPlayable;
-(void)_callProgressHandler;
@end

