/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:10 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface _HDProvenanceKey : NSObject <NSCopying> {

	unsigned long long _hash;
	long long _syncProvenance;
	NSString* _originDevice;
	NSString* _originBuild;
	NSString* _localDevice;
	NSString* _localBuild;
	NSNumber* _sourceID;
	NSNumber* _deviceID;
	NSString* _sourceVersion;

}

@property (nonatomic,readonly) long long syncProvenance;                   //@synthesize syncProvenance=_syncProvenance - In the implementation block
@property (nonatomic,copy,readonly) NSString * originDevice;               //@synthesize originDevice=_originDevice - In the implementation block
@property (nonatomic,copy,readonly) NSString * originBuild;                //@synthesize originBuild=_originBuild - In the implementation block
@property (nonatomic,copy,readonly) NSString * localDevice;                //@synthesize localDevice=_localDevice - In the implementation block
@property (nonatomic,copy,readonly) NSString * localBuild;                 //@synthesize localBuild=_localBuild - In the implementation block
@property (nonatomic,readonly) NSNumber * sourceID;                        //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) NSNumber * deviceID;                        //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceVersion;              //@synthesize sourceVersion=_sourceVersion - In the implementation block
+(id)provenanceKeyForProvenance:(id)arg1 localDevice:(id)arg2 localBuild:(id)arg3 ;
+(id)provenanceKeyWithSyncProvenance:(long long)arg1 originDevice:(id)arg2 originBuild:(id)arg3 localDevice:(id)arg4 localBuild:(id)arg5 sourceID:(id)arg6 deviceID:(id)arg7 sourceVersion:(id)arg8 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)sourceVersion;
-(NSNumber *)sourceID;
-(long long)syncProvenance;
-(NSString *)originBuild;
-(NSString *)originDevice;
-(NSNumber *)deviceID;
-(NSString *)localDevice;
-(NSString *)localBuild;
@end

