/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLPhotoBrowserImageRequest : NSObject {

	BOOL _canceled;
	int _imageManagerRequestID;

}

@property (assign,nonatomic) int imageManagerRequestID;              //@synthesize imageManagerRequestID=_imageManagerRequestID - In the implementation block
@property (assign,nonatomic) BOOL canceled;                          //@synthesize canceled=_canceled - In the implementation block
-(BOOL)canceled;
-(int)imageManagerRequestID;
-(void)setImageManagerRequestID:(int)arg1 ;
-(void)setCanceled:(BOOL)arg1 ;
@end
