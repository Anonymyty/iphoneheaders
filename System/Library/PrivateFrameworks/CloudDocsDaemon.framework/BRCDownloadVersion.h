/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCDownload.h>

@class CKRecordID, CKRecord, GSPermanentStorage, NSError, BRCProgress;

@interface BRCDownloadVersion : BRCDownload {

	CKRecordID* _secondaryRecordID;
	CKRecord* _secondaryRecord;
	BOOL _sharedZone;
	BOOL _isLoser;
	GSPermanentStorage* _storage;
	NSError* _gsError;

}

@property (nonatomic,readonly) GSPermanentStorage * storage;              //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) BRCProgress * progress; 
@property (nonatomic,readonly) NSError * gsError;                         //@synthesize gsError=_gsError - In the implementation block
@property (nonatomic,readonly) BOOL isLoser;                              //@synthesize isLoser=_isLoser - In the implementation block
-(GSPermanentStorage *)storage;
-(id)description;
-(void)setProgress:(BRCProgress *)arg1 ;
-(BRCProgress *)progress;
-(int)kind;
-(id)initWithDocument:(id)arg1 stageID:(id)arg2 etag:(id)arg3 isLoser:(BOOL)arg4 ;
-(NSError *)gsError;
-(id)secondaryRecordID;
-(id)secondaryRecord;
-(void)setSecondaryRecord:(id)arg1 ;
-(id)_stageContentWithSession:(id)arg1 error:(id*)arg2 ;
-(id)_stageWithSession:(id)arg1 creationInfo:(id*)arg2 error:(id*)arg3 ;
-(BOOL)isLoser;
@end

