/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPPlaceholderSmartField.h>

@class NSString;

@interface TSWPUnsupportedHyperlinkField : TSWPPlaceholderSmartField {

	NSString* _href;

}

@property (nonatomic,copy) NSString * href;              //@synthesize href=_href - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(int)smartFieldKind;
-(BOOL)allowsPasteAsSmartField;
-(const PlaceholderSmartFieldArchive*)placeholderSmartFieldArchiveFromUnarchiver:(id)arg1 ;
-(void)dealloc;
-(NSString *)href;
-(void)setHref:(NSString *)arg1 ;
@end

