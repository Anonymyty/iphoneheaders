/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICCloudThrottlingPolicy, NSNumber, NSString, NSTimer;

@interface ICCloudConfiguration : NSObject {

	ICCloudThrottlingPolicy* _throttlingPolicy;
	double _pollingInterval;
	unsigned long long _maxInlineAssetSizeBytes;
	unsigned long long _maxAttachmentsPerNote;
	unsigned long long _resultsLimitPerSyncOperation;
	NSNumber* _maximumAttachmentSizeMB;
	NSString* _minimumClientVersion;
	NSTimer* _downloadTimer;

}

@property (nonatomic,retain) ICCloudThrottlingPolicy * throttlingPolicy;                   //@synthesize throttlingPolicy=_throttlingPolicy - In the implementation block
@property (assign,nonatomic) double pollingInterval;                                       //@synthesize pollingInterval=_pollingInterval - In the implementation block
@property (assign,nonatomic) unsigned long long maxInlineAssetSizeBytes;                   //@synthesize maxInlineAssetSizeBytes=_maxInlineAssetSizeBytes - In the implementation block
@property (assign,nonatomic) unsigned long long maxAttachmentsPerNote;                     //@synthesize maxAttachmentsPerNote=_maxAttachmentsPerNote - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimitPerSyncOperation;              //@synthesize resultsLimitPerSyncOperation=_resultsLimitPerSyncOperation - In the implementation block
@property (nonatomic,retain) NSNumber * maximumAttachmentSizeMB;                           //@synthesize maximumAttachmentSizeMB=_maximumAttachmentSizeMB - In the implementation block
@property (nonatomic,copy) NSString * minimumClientVersion;                                //@synthesize minimumClientVersion=_minimumClientVersion - In the implementation block
@property (nonatomic,retain) NSTimer * downloadTimer;                                      //@synthesize downloadTimer=_downloadTimer - In the implementation block
+(id)sharedConfiguration;
+(id)availableConfigurationURLs;
+(void)setDefaultConfigurationURL:(id)arg1 ;
+(id)defaultConfigurationURL;
-(void)dealloc;
-(id)init;
-(unsigned long long)maxAttachmentsPerNote;
-(NSNumber *)maximumAttachmentSizeMB;
-(unsigned long long)maxInlineAssetSizeBytes;
-(void)loadLocalConfigurationFile;
-(void)downloadRemoteConfiguration:(id)arg1 ;
-(void)setDownloadTimer:(NSTimer *)arg1 ;
-(NSTimer *)downloadTimer;
-(void)loadConfigurationFromURL:(id)arg1 ;
-(void)downloadConfigurationFromRemoteURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setConfigurationFromDictionary:(id)arg1 ;
-(void)setMinimumClientVersion:(NSString *)arg1 ;
-(void)setThrottlingPolicy:(ICCloudThrottlingPolicy *)arg1 ;
-(void)setMaxInlineAssetSizeBytes:(unsigned long long)arg1 ;
-(void)setMaxAttachmentsPerNote:(unsigned long long)arg1 ;
-(void)setPollingInterval:(double)arg1 ;
-(void)setMaximumAttachmentSizeMB:(NSNumber *)arg1 ;
-(void)setResultsLimitPerSyncOperation:(unsigned long long)arg1 ;
-(ICCloudThrottlingPolicy *)throttlingPolicy;
-(double)pollingInterval;
-(unsigned long long)resultsLimitPerSyncOperation;
-(NSString *)minimumClientVersion;
@end
