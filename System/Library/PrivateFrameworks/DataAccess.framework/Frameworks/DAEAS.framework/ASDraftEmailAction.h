/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:42:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAAction.h>

@interface ASDraftEmailAction : DAAction {

	BOOL _send;

}

@property (assign,nonatomic) BOOL send;              //@synthesize send=_send - In the implementation block
-(BOOL)send;
-(id)initWithItemChangeType:(long long)arg1 changedItem:(id)arg2 send:(BOOL)arg3 ;
-(void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(void)setSend:(BOOL)arg1 ;
@end

