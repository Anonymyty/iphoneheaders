/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemAccessLogEventInternal, NSDate, NSString;

@interface AVPlayerItemAccessLogEvent : NSObject <NSCopying> {

	AVPlayerItemAccessLogEventInternal* _playerItemAccessLogEvent;

}

@property (nonatomic,readonly) long long numberOfSegmentsDownloaded; 
@property (nonatomic,readonly) long long numberOfMediaRequests; 
@property (nonatomic,readonly) NSDate * playbackStartDate; 
@property (nonatomic,readonly) NSString * URI; 
@property (nonatomic,readonly) NSString * serverAddress; 
@property (nonatomic,readonly) long long numberOfServerAddressChanges; 
@property (nonatomic,readonly) NSString * playbackSessionID; 
@property (nonatomic,readonly) double playbackStartOffset; 
@property (nonatomic,readonly) double segmentsDownloadedDuration; 
@property (nonatomic,readonly) double durationWatched; 
@property (nonatomic,readonly) long long numberOfStalls; 
@property (nonatomic,readonly) long long numberOfBytesTransferred; 
@property (nonatomic,readonly) double transferDuration; 
@property (nonatomic,readonly) double observedBitrate; 
@property (nonatomic,readonly) double indicatedBitrate; 
@property (nonatomic,readonly) long long numberOfDroppedVideoFrames; 
@property (nonatomic,readonly) double startupTime; 
@property (nonatomic,readonly) long long downloadOverdue; 
@property (nonatomic,readonly) double observedMaxBitrate; 
@property (nonatomic,readonly) double observedMinBitrate; 
@property (nonatomic,readonly) double observedBitrateStandardDeviation; 
@property (nonatomic,readonly) NSString * playbackType; 
@property (nonatomic,readonly) long long mediaRequestsWWAN; 
@property (nonatomic,readonly) double switchBitrate; 
-(id)serviceIdentifier;
-(void)dealloc;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)transferDuration;
-(double)currentObservedBitrate;
-(double)startupTime;
-(long long)downloadOverdue;
-(long long)entryReasonCode;
-(double)observedMaxBitrate;
-(double)observedMinBitrate;
-(double)observedBitrateStandardDeviation;
-(NSString *)playbackType;
-(long long)mediaRequestsWWAN;
-(double)switchBitrate;
-(long long)numberOfMediaRequests;
-(NSDate *)playbackStartDate;
-(NSString *)serverAddress;
-(long long)numberOfServerAddressChanges;
-(NSString *)playbackSessionID;
-(double)playbackStartOffset;
-(double)segmentsDownloadedDuration;
-(long long)numberOfStalls;
-(long long)numberOfBytesTransferred;
-(double)observedBitrate;
-(double)indicatedBitrate;
-(long long)numberOfDroppedVideoFrames;
-(long long)numberOfSegmentsDownloaded;
-(double)durationWatched;
-(void)finalize;
-(NSString *)URI;
@end

