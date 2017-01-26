/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@protocol TSWPStyleProvider;
@class TSWPStorage;

@interface TSWPStoragePasteboardProxy : TSPObject {

	TSWPStorage* _storage;
	NSRange _range;
	id<TSWPStyleProvider> _styleProvider;

}

@property (nonatomic,readonly) NSRange storageRange;              //@synthesize range=_range - In the implementation block
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithContext:(id)arg1 storage:(id)arg2 range:(NSRange)arg3 styleProvider:(id)arg4 ;
-(NSRange)storageRange;
-(void)dealloc;
@end
