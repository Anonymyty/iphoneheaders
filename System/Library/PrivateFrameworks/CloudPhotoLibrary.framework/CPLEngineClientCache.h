/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:39:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSArray, NSString, CPLPlatformObject;

@interface CPLEngineClientCache : CPLEngineStorage <CPLAbstractObject> {

	NSArray* __lastModifiedProperties;

}

@property (setter=_setLastModifiedProperties:,copy) NSArray * _lastModifiedProperties;              //@synthesize _lastModifiedProperties=__lastModifiedProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(id)status;
-(BOOL)resetWithError:(id*)arg1 ;
-(id)statusDictionary;
-(id)recordWithIdentifier:(id)arg1 ;
-(id)resourceOfType:(unsigned long long)arg1 forRecordWithIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasRecordWithIdentifier:(id)arg1 ;
-(BOOL)addRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteRecordWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)relatedIdentifierForRecordWithIdentifier:(id)arg1 ;
-(id)_relatedIdentifierForRecordWithIdentifier:(id)arg1 ;
-(id)recordsWithRelatedIdentifier:(id)arg1 ;
-(NSArray *)_lastModifiedProperties;
-(id)compactedBatchFromExpandedBatch:(id)arg1 ;
-(id)localChangeBatchFromCloudBatch:(id)arg1 usingMapping:(id)arg2 withError:(id*)arg3 ;
-(BOOL)applyBatch:(id)arg1 withError:(id*)arg2 ;
-(void)_setLastModifiedProperties:(id)arg1 ;
@end

