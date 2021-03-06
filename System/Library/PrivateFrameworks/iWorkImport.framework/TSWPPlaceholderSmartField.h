/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:56 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPSmartField.h>

@class NSString;

@interface TSWPPlaceholderSmartField : TSWPSmartField {

	BOOL _localizable;
	NSString* _scriptTag;

}

@property (assign,nonatomic) BOOL isLocalizable;              //@synthesize localizable=_localizable - In the implementation block
@property (nonatomic,copy) NSString * scriptTag;              //@synthesize scriptTag=_scriptTag - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)saveToArchive:(PlaceholderSmartFieldArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const PlaceholderSmartFieldArchive*)arg1 unarchiver:(id)arg2 ;
-(int)smartFieldKind;
-(const PlaceholderSmartFieldArchive*)placeholderSmartFieldArchiveFromUnarchiver:(id)arg1 ;
-(BOOL)isLocalizable;
-(void)setIsLocalizable:(BOOL)arg1 ;
-(NSString *)scriptTag;
-(void)setScriptTag:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
@end

