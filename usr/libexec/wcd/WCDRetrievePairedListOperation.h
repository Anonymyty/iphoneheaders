/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:37 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/wcd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <wcd/WCDAsyncOperation.h>

@interface WCDRetrievePairedListOperation : WCDAsyncOperation {

	BOOL _paired;

}

@property (assign,nonatomic) BOOL paired;              //@synthesize paired=_paired - In the implementation block
-(void)doWorkWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)pairedDeviceInformationForDevice:(id)arg1 ;
-(BOOL)paired;
-(void)setPaired:(BOOL)arg1 ;
@end

