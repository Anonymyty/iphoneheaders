/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:47:46 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPUCellInvalidationContext : NSObject {

	BOOL _invalidateEverything;
	BOOL _invalidateDownloadStatus;
	BOOL _invalidateLayout;
	BOOL _animated;

}

@property (assign,nonatomic) BOOL invalidateEverything;                    //@synthesize invalidateEverything=_invalidateEverything - In the implementation block
@property (assign,nonatomic) BOOL invalidateDownloadStatus;                //@synthesize invalidateDownloadStatus=_invalidateDownloadStatus - In the implementation block
@property (assign,nonatomic) BOOL invalidateLayout;                        //@synthesize invalidateLayout=_invalidateLayout - In the implementation block
@property (assign,getter=isAnimated,nonatomic) BOOL animated;              //@synthesize animated=_animated - In the implementation block
-(BOOL)isAnimated;
-(void)setAnimated:(BOOL)arg1 ;
-(BOOL)invalidateLayout;
-(BOOL)invalidateEverything;
-(void)setInvalidateEverything:(BOOL)arg1 ;
-(BOOL)invalidateDownloadStatus;
-(void)setInvalidateLayout:(BOOL)arg1 ;
-(void)setInvalidateDownloadStatus:(BOOL)arg1 ;
@end

