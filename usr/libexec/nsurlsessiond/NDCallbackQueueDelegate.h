/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:26 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/nsurlsessiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NDCallbackQueueDelegate <NSObject>
@required
-(id)descriptionForTaskWithIdentifier:(unsigned long long)arg1;
-(void)wakeUpClient;
-(void)errorOccurredDuringFinishedCallbackDelivery:(id)arg1;
-(void)errorOccurredDuringAuthCallbackDelivery:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)clientAcknowledgedTerminalCallbackForTask:(unsigned long long)arg1;
-(id)getClientProxy;

@end

