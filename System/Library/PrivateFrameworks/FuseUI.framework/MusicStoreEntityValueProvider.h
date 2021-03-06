/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:58 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/MusicEntityValueProviding.h>

@protocol MusicEntityProviding;
@class MusicStoreItemMetadataContext, MPUContentItemIdentifierCollection, NSString;

@interface MusicStoreEntityValueProvider : NSObject <MusicEntityValueProviding> {

	id<MusicEntityProviding> _childrenEntityProvider;
	MusicStoreItemMetadataContext* _storeItemMetadataContext;

}

@property (nonatomic,retain) id<MusicEntityProviding> childrenEntityProvider;                                          //@synthesize childrenEntityProvider=_childrenEntityProvider - In the implementation block
@property (nonatomic,copy,readonly) MPUContentItemIdentifierCollection * contentItemIdentifierCollection; 
@property (nonatomic,readonly) MusicStoreItemMetadataContext * storeItemMetadataContext;                               //@synthesize storeItemMetadataContext=_storeItemMetadataContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(long long)entityType;
+(void)_registerEntityValueHandler:(/*^block*/id)arg1 forProperty:(id)arg2 ;
+(/*^block*/id)_entityValueHandlerForProperty:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(CGSize)arg2 destinationScale:(double)arg3 ;
-(id)entityUniqueIdentifier;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)valuesForEntityProperties:(id)arg1 ;
-(MusicStoreItemMetadataContext *)storeItemMetadataContext;
-(id)initWithStoreItemMetadataContext:(id)arg1 ;
-(MPUContentItemIdentifierCollection *)contentItemIdentifierCollection;
-(Class)_requiredClassForEquality;
-(id<MusicEntityProviding>)childrenEntityProvider;
-(void)setChildrenEntityProvider:(id<MusicEntityProviding>)arg1 ;
@end

