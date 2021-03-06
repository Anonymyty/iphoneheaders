/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Media/Media-Structs.h>
#import <Media/MPAssistantPlaybackQueue.h>

@class NSURL;

@interface MPAssistantGeniusPlaybackQueue : MPAssistantPlaybackQueue {

	NSURL* _seedTrack;

}

@property (nonatomic,readonly) NSURL * seedTrack;              //@synthesize seedTrack=_seedTrack - In the implementation block
+(id)geniusQueueWithContextID:(id)arg1 seedTrack:(id)arg2 ;
-(id)initWithContextID:(id)arg1 seedTrack:(id)arg2 ;
-(MRSystemAppPlaybackQueueRef)createRemotePlaybackQueue;
-(NSURL *)seedTrack;
@end

