/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:28 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDNetworkOperationDelegate.h>

@protocol SDAirDropListenerDelegate;
@class SDNetworkOperation, NSString;

@interface SDAirDropListener : NSObject <SDNetworkOperationDelegate> {

	SDNetworkOperation* _listener;
	BOOL _contactsOnly;
	id<SDAirDropListenerDelegate> _delegate;

}

@property (assign) BOOL contactsOnly;                                   //@synthesize contactsOnly=_contactsOnly - In the implementation block
@property (__weak) id<SDAirDropListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkOperation:(id)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(BOOL)contactsOnly;
-(void)setContactsOnly:(BOOL)arg1 ;
-(void)setDelegate:(id<SDAirDropListenerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SDAirDropListenerDelegate>)delegate;
-(void)stop;
-(void)start;
@end

