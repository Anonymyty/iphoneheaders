/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:14:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSArray;

@interface TIAsset : NSObject {

	long long _numberOfAssertions;
	NSString* _type;
	NSString* _inputModeLevel;
	NSURL* _url;
	long long _contentVersion;
	long long _compatibilityVersion;
	NSArray* _contents;
	unsigned long long _sizeInBytes;

}

@property (nonatomic,readonly) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * inputModeLevel;                   //@synthesize inputModeLevel=_inputModeLevel - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) long long contentVersion;                    //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,readonly) long long compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,readonly) NSArray * contents;                          //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeInBytes;              //@synthesize sizeInBytes=_sizeInBytes - In the implementation block
+(id)knownAssetTypes;
+(long long)supportedCompatibilityVersionForAssetType:(id)arg1 ;
+(id)supportedCompatibilityVersions;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)url;
-(NSString *)type;
-(NSArray *)contents;
-(id)recursiveDescription;
-(id)initWithASAsset:(id)arg1 ;
-(long long)contentVersion;
-(BOOL)hasAssertions;
-(NSString *)inputModeLevel;
-(void)removeAssertion;
-(long long)compatibilityVersion;
-(void)addAssertion;
-(id)assetContentItemsForInputModeLevels:(id)arg1 contentType:(id)arg2 ;
-(unsigned long long)sizeInBytes;
@end

