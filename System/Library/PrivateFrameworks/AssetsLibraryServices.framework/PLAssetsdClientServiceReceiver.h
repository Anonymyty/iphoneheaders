/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:38:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLAssetsdClientService;
@interface PLAssetsdClientServiceReceiver : NSObject {

	id<PLAssetsdClientService> _weakClientService;

}
-(id)initWithWeakClientService:(id)arg1 ;
-(void)dispatchEvent:(id)arg1 connection:(id)arg2 ;
-(void)downloadStatus:(id)arg1 connection:(id)arg2 ;
-(id)clientService;
@end
