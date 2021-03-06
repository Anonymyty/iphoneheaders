/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:17 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVItem.h>

@class MPStorePlayWhileDownloadSession, MPStreamingDownloadSession, MPMediaPlaybackItemMetadata;

@interface MPStoreAVItem : MPAVItem {

	unsigned long long _assetQuality;
	BOOL _didDeferLeaseStart;
	BOOL _hasEverPrioritizedPlayerItem;
	BOOL _hasPrioritizedPlayWhileDownloadSession;
	BOOL _hasPrioritizedStreamingDownloadSession;
	BOOL _hasValidAssetQuality;
	BOOL _isActivePlayerItem;
	MPStorePlayWhileDownloadSession* _playWhileDownloadSession;
	unsigned long long _preferredAssetQuality;
	MPStreamingDownloadSession* _streamingDownloadSession;
	unsigned long long _options;
	MPMediaPlaybackItemMetadata* _playbackItemMetadata;

}

@property (nonatomic,readonly) unsigned long long options;                                      //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) MPMediaPlaybackItemMetadata * playbackItemMetadata;              //@synthesize playbackItemMetadata=_playbackItemMetadata - In the implementation block
+(void)_registerCustomEntityValueHandlers;
+(BOOL)isPlaybackItemMetadataValidForAssetCreation:(id)arg1 ;
+(unsigned long long)_currentPreferredAssetQualityForPlaybackItemMetadata:(id)arg1 ;
+(id)_assetURLForCachedLocalPlaybackAssetFilePathForPlaybackItemMetadata:(id)arg1 withMinimumAssetQuality:(unsigned long long)arg2 assetOptions:(id)arg3 returningProtectionType:(unsigned long long*)arg4 assetQuality:(unsigned long long*)arg5 usesPurchaseBundle:(BOOL*)arg6 ;
+(void)applyVolumeNormalizationForQueuedItems:(id)arg1 ;
+(BOOL)isPlaybackItemMetadataStreamingForAssetCreation:(id)arg1 returningProtectionType:(unsigned long long*)arg2 ;
-(BOOL)mpuReporting_isValidReportingItem;
-(unsigned long long)mpuReporting_itemType;
-(BOOL)mpuReporting_shouldReportPlayEventsToStore;
-(id)mpuReporting_storeItemID;
-(long long)_mpuReporting_storeItemInt64IDFromIdentifierCollection:(id)arg1 ;
-(long long)_mpuReporting_storeItemInt64ID;
-(id)MPU_contentItemIdentifierCollection;
-(void)dealloc;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)options;
-(void)setRating:(float)arg1 ;
-(void)setAlternateAudioTrackID:(int)arg1 ;
-(void)loadAssetAndPlayerItem;
-(long long)_persistedLikedState;
-(void)_handleUpdatedLikedState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)useEmbeddedChapterData;
-(id)chapterTimeMarkers;
-(id)artworkTimeMarkers;
-(id)urlTimeMarkers;
-(double)durationFromExternalMetadata;
-(long long)customAVEQPreset;
-(BOOL)allowsEQ;
-(void)_currentPlaybackRateDidChange:(float)arg1 ;
-(void)setPlaybackStoppedTime:(double)arg1 ;
-(void)notePlaybackFinishedByHittingEnd;
-(double)playbackCheckpointCurrentTime;
-(void)setPlaybackCheckpointCurrentTime:(double)arg1 ;
-(void)setPlaybackFinishedTime:(double)arg1 ;
-(void)applyVolumeNormalizationWithSoundCheckEnabled:(BOOL)arg1 ;
-(BOOL)canSeedGenius;
-(BOOL)isCloudItem;
-(BOOL)isAssetURLValid;
-(BOOL)hasAlternatesForTypes:(unsigned long long)arg1 ;
-(BOOL)isStreamable;
-(void)prepareForRate:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)titlesForTime:(double)arg1 ;
-(void)reevaluateType;
-(void)_willBecomeActivePlayerItem;
-(void)_willResignActivePlayerItem;
-(void)setLoudnessInfoVolumeNormalization:(float)arg1 ;
-(BOOL)allowsAirPlayFromCloud;
-(BOOL)allowsExternalPlayback;
-(long long)storePlaybackEndpointType;
-(BOOL)usesSubscriptionLease;
-(BOOL)didDeferLeaseStart;
-(void)_mediaPlaybackItemMetadataDidChangeNotification:(id)arg1 ;
-(void)_mediaPlaybackItemMetadataLikedStateDidChangeNotification:(id)arg1 ;
-(id)_newTimeMarkersForChapterType:(long long)arg1 ;
-(BOOL)_getAssetURL:(id*)arg1 playWhileDownloadSession:(id*)arg2 assetQuality:(unsigned long long*)arg3 error:(id*)arg4 usingStoreDownload:(id)arg5 assetOptions:(id)arg6 shouldStartDownload:(BOOL)arg7 ;
-(void)_prioritizeDownloadSessionsIfNeeded;
-(void)_handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(BOOL)arg2 ;
-(void)_applyLoudnessInfo;
-(void)_updateBookmarkTimeIfNecessary:(double)arg1 isCheckpoint:(BOOL)arg2 ;
-(id)_chapterTitleForTime:(double)arg1 ;
-(void)handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(BOOL)arg2 ;
-(BOOL)isStreamingLowQualityAsset;
-(id)storeDownload;
-(float)userRating;
-(id)album;
-(id)mediaItem;
-(unsigned long long)persistentID;
-(unsigned long long)discNumber;
-(long long)artistStoreID;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(id)copyrightText;
-(long long)storeSubscriptionAdamID;
-(id)mainTitle;
-(id)artist;
-(MPMediaPlaybackItemMetadata *)playbackItemMetadata;
-(BOOL)isSupportedDefaultPlaybackSpeed:(unsigned long long)arg1 ;
-(id)displayableText;
-(id)genre;
-(unsigned long long)discCount;
-(long long)storeItemInt64ID;
-(BOOL)supportsRewindAndFastForward15Seconds;
-(BOOL)supportsLikedState;
-(BOOL)isLikedStateEnabled;
-(id)albumArtist;
-(unsigned long long)albumTrackCount;
-(unsigned long long)albumTrackNumber;
-(long long)albumStoreID;
-(id)composer;
-(BOOL)isExplicitTrack;
-(void)_loadMediaItemWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(id)initWithPlaybackItemMetadata:(id)arg1 options:(unsigned long long)arg2 ;
@end

