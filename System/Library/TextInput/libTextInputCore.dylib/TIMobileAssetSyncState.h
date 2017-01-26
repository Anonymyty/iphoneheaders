/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface TIMobileAssetSyncState : NSObject {

	BOOL _loadedState;
	long long _status;
	NSDate* _date;
	NSString* _buildVersion;
	long long _attemptCount;

}

@property (assign,nonatomic) long long status;                    //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSString * buildVersion;               //@synthesize buildVersion=_buildVersion - In the implementation block
@property (assign,nonatomic) long long attemptCount;              //@synthesize attemptCount=_attemptCount - In the implementation block
+(id)buildVersionString;
-(id)initWithDate:(id)arg1 buildVersion:(id)arg2 status:(long long)arg3 attemptCount:(long long)arg4 ;
-(void)dealloc;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)buildVersion;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(void)updateState;
-(long long)attemptCount;
-(void)loadStateIfNecessary;
-(BOOL)shouldSyncToRemoteMetadata;
-(void)didSyncToRemoteMetadataWithError:(id)arg1 ;
-(void)setAttemptCount:(long long)arg1 ;
-(void)saveState;
-(void)setBuildVersion:(NSString *)arg1 ;
@end
