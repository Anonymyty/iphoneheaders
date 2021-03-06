/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:43:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicStoreModelRequest.h>

@class MusicForYouRecommendationsResponse;

@interface MusicForYouRecommendationsRequest : MusicStoreModelRequest {

	unsigned long long _recommendationsRequestType;

}

@property (assign) unsigned long long recommendationsRequestType; 
@property (nonatomic,retain) MusicForYouRecommendationsResponse * previousResponse; 
@property (nonatomic,copy) id responseHandler; 
+(id)allSupportedItemProperties;
+(id)allSupportedSectionProperties;
-(id)init;
-(id)configurationForLoadingModelDataWithStoreBag:(id)arg1 error:(id*)arg2 ;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)recommendationsRequestType;
-(void)setRecommendationsRequestType:(unsigned long long)arg1 ;
@end

