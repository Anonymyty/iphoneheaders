/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:11 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPUOperationQueue;

@interface MCDNewBrowseManager : NSObject {

	MPUOperationQueue* _operationQueue;

}

@property (nonatomic,retain) MPUOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)request;
-(void)setOperationQueue:(MPUOperationQueue *)arg1 ;
-(MPUOperationQueue *)operationQueue;
-(void)loadCuratedPlaylistStoreAdamID:(unsigned long long)arg1 requestWithCompletion:(/*^block*/id)arg2 ;
-(void)loadRequestForRadioGenresWithCompletion:(/*^block*/id)arg1 ;
-(void)loadRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)additionalRequestForParentSection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)additionalRequestForRadioGenresForParentSection:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
