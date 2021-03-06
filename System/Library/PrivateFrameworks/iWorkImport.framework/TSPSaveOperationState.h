/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface TSPSaveOperationState : NSObject {

	NSMapTable* _newDataStorages;
	int _sampleID;
	long long _updateType;

}

@property (nonatomic,readonly) BOOL shouldUpdate; 
@property (nonatomic,readonly) BOOL preserveDocumentUUID; 
@property (nonatomic,readonly) long long updateType;                   //@synthesize updateType=_updateType - In the implementation block
@property (assign,nonatomic) int sampleID;                             //@synthesize sampleID=_sampleID - In the implementation block
-(void)setSampleID:(int)arg1 ;
-(BOOL)preserveDocumentUUID;
-(int)sampleID;
-(BOOL)hasNewStorageForData:(id)arg1 ;
-(void)addNewStorage:(id)arg1 forData:(id)arg2 ;
-(void)enumerateDatasAndStoragesUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(BOOL)shouldUpdate;
-(long long)updateType;
-(id)initWithUpdateType:(long long)arg1 ;
@end

