/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:20 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLIndoorDelegateProtocol <NSObject>
@optional
-(void)indoorIsUncertainWithLocation:(id)arg1;
-(void)indoorGivesUpWithLocation:(id)arg1;
-(void)indoorAssetDownloadProgress:(float)arg1;
-(void)indoorDidFailWithError:(id)arg1;

@required
-(void)indoorDidUpdateToLocation:(id)arg1 fromLocation:(id)arg2;

@end
