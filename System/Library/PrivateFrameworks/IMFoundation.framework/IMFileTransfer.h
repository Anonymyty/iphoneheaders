/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:19 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSData, NSString, NSDate, NSDictionary;

@interface IMFileTransfer : NSObject {

	BOOL _isIncoming;
	BOOL _isDirectory;
	BOOL _shouldAttemptToResume;
	BOOL _wasRegisteredAsStandalone;
	BOOL _shouldForceArchive;
	BOOL _needsWrapper;
	BOOL _isAuxImage;
	BOOL _isAuxVideo;
	unsigned short _hfsFlags;
	unsigned _hfsType;
	unsigned _hfsCreator;
	NSURL* _localURL;
	NSData* _localBookmark;
	double _lastUpdatedInterval;
	double _lastAveragedInterval;
	unsigned long long _lastAveragedBytes;
	NSString* _guid;
	NSString* _messageGUID;
	NSDate* _startDate;
	NSDate* _createdDate;
	long long _transferState;
	NSString* _filename;
	NSURL* _transferDataURL;
	NSString* _utiType;
	NSString* _mimeType;
	NSString* _accountID;
	NSString* _otherPerson;
	unsigned long long _currentBytes;
	unsigned long long _totalBytes;
	unsigned long long _averageTransferRate;
	long long _error;
	NSString* _errorDescription;
	NSDictionary* _localUserInfo;
	NSString* _transferredFilename;
	NSDictionary* _transcoderUserInfo;
	NSDictionary* _AuxTranscoderUserInfo;

}

@property (nonatomic,readonly) BOOL canBeAccepted; 
@property (nonatomic,readonly) BOOL isFinished; 
@property (nonatomic,retain,readonly) NSString * displayName; 
@property (nonatomic,readonly) BOOL existsAtLocalPath; 
@property (assign,nonatomic) BOOL isAuxImage;                                                               //@synthesize isAuxImage=_isAuxImage - In the implementation block
@property (assign,nonatomic) BOOL isAuxVideo;                                                               //@synthesize isAuxVideo=_isAuxVideo - In the implementation block
@property (nonatomic,retain) NSString * guid;                                                               //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * messageGUID;                                                        //@synthesize messageGUID=_messageGUID - In the implementation block
@property (nonatomic,retain) NSDate * createdDate;                                                          //@synthesize createdDate=_createdDate - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                                            //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) long long transferState;                                                       //@synthesize transferState=_transferState - In the implementation block
@property (assign,nonatomic) BOOL isIncoming;                                                               //@synthesize isIncoming=_isIncoming - In the implementation block
@property (nonatomic,retain) NSString * filename;                                                           //@synthesize filename=_filename - In the implementation block
@property (nonatomic,retain) NSString * transferredFilename;                                                //@synthesize transferredFilename=_transferredFilename - In the implementation block
@property (nonatomic,retain) NSString * localPath; 
@property (nonatomic,retain) NSString * type;                                                               //@synthesize utiType=_utiType - In the implementation block
@property (nonatomic,retain,readonly) NSString * mimeType;                                                  //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,retain) NSURL * localURL; 
@property (nonatomic,retain) NSURL * transferDataURL;                                                       //@synthesize transferDataURL=_transferDataURL - In the implementation block
@property (nonatomic,retain,readonly) NSURL * localURLWithoutBookmarkResolution;                            //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,retain) NSData * localBookmark;                                                        //@synthesize localBookmark=_localBookmark - In the implementation block
@property (assign,nonatomic) unsigned hfsType;                                                              //@synthesize hfsType=_hfsType - In the implementation block
@property (assign,nonatomic) unsigned hfsCreator;                                                           //@synthesize hfsCreator=_hfsCreator - In the implementation block
@property (assign,nonatomic) unsigned short hfsFlags;                                                       //@synthesize hfsFlags=_hfsFlags - In the implementation block
@property (nonatomic,retain) NSString * accountID;                                                          //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) NSString * otherPerson;                                                        //@synthesize otherPerson=_otherPerson - In the implementation block
@property (assign,nonatomic) unsigned long long currentBytes;                                               //@synthesize currentBytes=_currentBytes - In the implementation block
@property (assign,nonatomic) unsigned long long totalBytes;                                                 //@synthesize totalBytes=_totalBytes - In the implementation block
@property (assign,nonatomic) unsigned long long averageTransferRate;                                        //@synthesize averageTransferRate=_averageTransferRate - In the implementation block
@property (assign,nonatomic) BOOL isDirectory;                                                              //@synthesize isDirectory=_isDirectory - In the implementation block
@property (assign,nonatomic) BOOL shouldAttemptToResume;                                                    //@synthesize shouldAttemptToResume=_shouldAttemptToResume - In the implementation block
@property (assign,nonatomic) BOOL shouldForceArchive;                                                       //@synthesize shouldForceArchive=_shouldForceArchive - In the implementation block
@property (assign,nonatomic) long long error;                                                               //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * errorDescription;                                                   //@synthesize errorDescription=_errorDescription - In the implementation block
@property (nonatomic,retain) NSDictionary * transcoderUserInfo;                                             //@synthesize transcoderUserInfo=_transcoderUserInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * AuxTranscoderUserInfo;                                          //@synthesize AuxTranscoderUserInfo=_AuxTranscoderUserInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                                                       //@synthesize localUserInfo=_localUserInfo - In the implementation block
@property (assign,setter=setRegisteredAsStandalone:,nonatomic) BOOL wasRegisteredAsStandalone;              //@synthesize wasRegisteredAsStandalone=_wasRegisteredAsStandalone - In the implementation block
@property (assign,setter=_setLastUpdatedInterval:,nonatomic) double _lastUpdatedInterval;                   //@synthesize lastUpdatedInterval=_lastUpdatedInterval - In the implementation block
@property (assign,setter=_setLastAveragedInterval:,nonatomic) double _lastAveragedInterval;                 //@synthesize lastAveragedInterval=_lastAveragedInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long _lastAveragedBytes;                                       //@synthesize lastAveragedBytes=_lastAveragedBytes - In the implementation block
@property (assign,setter=_setNeedsWrapper:,nonatomic) BOOL _needsWrapper;                                   //@synthesize needsWrapper=_needsWrapper - In the implementation block
+(id)_invalidCharactersForFileTransferName;
+(id)guidByStrippingAuxPrefix:(id)arg1 ;
+(BOOL)_doesLocalURLRequireArchiving:(id)arg1 ;
+(id)AuxGUIDFromFileTransferGUID:(id)arg1 ;
-(BOOL)isDirectory;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(NSString *)mimeType;
-(NSString *)displayName;
-(NSURL *)localURL;
-(BOOL)isFinished;
-(void)setCurrentBytes:(unsigned long long)arg1 ;
-(void)_setLocalPath:(id)arg1 ;
-(unsigned short)hfsFlags;
-(void)_calculateTypeInformation;
-(NSString *)transferredFilename;
-(void)_setDirectory:(BOOL)arg1 hfsType:(unsigned)arg2 hfsCreator:(unsigned)arg3 hfsFlags:(unsigned short)arg4 ;
-(BOOL)canBeAccepted;
-(BOOL)existsAtLocalPath;
-(void)_setTransferDataURL:(id)arg1 ;
-(unsigned)hfsType;
-(NSURL *)localURLWithoutBookmarkResolution;
-(NSData *)localBookmark;
-(void)setLocalBookmark:(NSData *)arg1 ;
-(double)_lastUpdatedInterval;
-(void)_setLastUpdatedInterval:(double)arg1 ;
-(double)_lastAveragedInterval;
-(void)_setLastAveragedInterval:(double)arg1 ;
-(unsigned long long)_lastAveragedBytes;
-(void)setIsIncoming:(BOOL)arg1 ;
-(NSURL *)transferDataURL;
-(void)setHfsType:(unsigned)arg1 ;
-(void)setHfsFlags:(unsigned short)arg1 ;
-(unsigned)hfsCreator;
-(void)setHfsCreator:(unsigned)arg1 ;
-(void)setAccountID:(NSString *)arg1 ;
-(void)setOtherPerson:(NSString *)arg1 ;
-(unsigned long long)averageTransferRate;
-(void)setAverageTransferRate:(unsigned long long)arg1 ;
-(void)setIsDirectory:(BOOL)arg1 ;
-(BOOL)shouldAttemptToResume;
-(void)setShouldAttemptToResume:(BOOL)arg1 ;
-(void)_setErrorDescription:(id)arg1 ;
-(BOOL)shouldForceArchive;
-(BOOL)_needsWrapper;
-(void)_setNeedsWrapper:(BOOL)arg1 ;
-(void)setTransferredFilename:(NSString *)arg1 ;
-(BOOL)isAuxImage;
-(BOOL)isAuxVideo;
-(NSDictionary *)AuxTranscoderUserInfo;
-(void)setAuxTranscoderUserInfo:(NSDictionary *)arg1 ;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
-(NSDate *)createdDate;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(void)setFilename:(NSString *)arg1 ;
-(unsigned long long)totalBytes;
-(void)setTotalBytes:(unsigned long long)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_initWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(BOOL)arg3 localURL:(id)arg4 account:(id)arg5 otherPerson:(id)arg6 totalBytes:(unsigned long long)arg7 hfsType:(unsigned)arg8 hfsCreator:(unsigned)arg9 hfsFlags:(unsigned short)arg10 isIncoming:(BOOL)arg11 ;
-(void)_setAccount:(id)arg1 otherPerson:(id)arg2 ;
-(void)_setForceArchive:(BOOL)arg1 ;
-(void)_setTransferState:(long long)arg1 ;
-(void)_setLocalURL:(id)arg1 ;
-(BOOL)isIncoming;
-(NSString *)otherPerson;
-(void)setRegisteredAsStandalone:(BOOL)arg1 ;
-(BOOL)_updateWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)wasRegisteredAsStandalone;
-(void)_setCurrentBytes:(unsigned long long)arg1 totalBytes:(unsigned long long)arg2 ;
-(void)_setAveragedTransferRate:(unsigned long long)arg1 lastAveragedInterval:(double)arg2 lastAveragedBytes:(unsigned long long)arg3 ;
-(void)setIsAuxImage:(BOOL)arg1 ;
-(NSDate *)startDate;
-(long long)error;
-(void)_setError:(long long)arg1 ;
-(NSString *)localPath;
-(NSString *)messageGUID;
-(void)setIsAuxVideo:(BOOL)arg1 ;
-(void)setTranscoderUserInfo:(NSDictionary *)arg1 ;
-(void)setMessageGUID:(NSString *)arg1 ;
-(NSDictionary *)transcoderUserInfo;
-(unsigned long long)currentBytes;
-(long long)transferState;
-(void)_clear;
-(NSString *)accountID;
-(NSString *)errorDescription;
-(void)_setStartDate:(id)arg1 ;
-(NSString *)filename;
@end

